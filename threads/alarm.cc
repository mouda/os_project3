// alarm.cc
//	Routines to use a hardware timer device to provide a
//	software alarm clock.  For now, we just provide time-slicing.
//
//	Not completely implemented.
//
// Copyright (c) 1992-1996 The Regents of the University of California.
// All rights reserved.  See copyright.h for copyright notice and limitation 
// of liability and disclaimer of warranty provisions.

#include "copyright.h"
#include "alarm.h"
#include "main.h"

//----------------------------------------------------------------------
// Alarm::Alarm
//      Initialize a software alarm clock.  Start up a timer device
//
//      "doRandom" -- if true, arrange for the hardware interrupts to 
//		occur at random, instead of fixed, intervals.
//----------------------------------------------------------------------

Alarm::Alarm(bool doRandom)
{
    timer = new Timer(doRandom, this);
}

//----------------------------------------------------------------------
// Alarm::CallBack
//	Software interrupt handler for the timer device. The timer device is
//	set up to interrupt the CPU periodically (once every TimerTicks).
//	This routine is called each time there is a timer interrupt,
//	with interrupts disabled.
//
//	Note that instead of calling Yield() directly (which would
//	suspend the interrupt handler, not the interrupted thread
//	which is what we wanted to context switch), we set a flag
//	so that once the interrupt handler is done, it will appear as 
//	if the interrupted thread called Yield at the point it is 
//	was interrupted.
//
//	For now, just provide time-slicing.  Only need to time slice 
//      if we're currently running something (in other words, not idle).
//	Also, to keep from looping forever, we check if there's
//	nothing on the ready list, and there are no other pending
//	interrupts.  In this case, we can safely halt.
//----------------------------------------------------------------------


void 
Alarm::CallBack() 
{
    Interrupt *interrupt = kernel->interrupt;
    MachineStatus status = interrupt->getStatus();
    
	for(int a=0;a<10;a++)
	{
		if(kernel->scheduler->waitArray[a].time>=0)
		{
			kernel->scheduler->waitArray[a].time--;
			
			if(kernel->scheduler->waitArray[a].time<=0)
			{
				kernel->scheduler->ReadyToRun(kernel->scheduler->waitArray[a].thread);
				kernel->scheduler->waitArray[a].thread=NULL;
				kernel->scheduler->waitArray[a].time=-1;
				kernel->scheduler->inwait--;
				status = SystemMode;
			}
		}
	}

    if (status == IdleMode & kernel->scheduler->inwait == 0) {	// is it time to quit?
        if (!interrupt->AnyFutureInterrupts()) {
	    timer->Disable();	// turn off the timer
	}
    } else {			// there's someone to preempt
		if(kernel->scheduler->getType()==SJF)
		{
			int t;
			t=(int)
			(kernel->scheduler->timeMap[kernel->currentThread]
			 *kernel->scheduler->rate
			 +(kernel->stats->userTicks - kernel->scheduler->beforeTick)
			 *(1 - kernel->scheduler->rate));
			kernel->scheduler->timeMap[kernel->currentThread]=t;
			cout<<" "<<kernel->currentThread->getName()<<" "<<" <----next burst\n";
		}
	interrupt->YieldOnReturn();
    }
}

void Alarm::WaitUntil(int x)
{
	kernel->interrupt->SetLevel(IntOff);
	waitStruct temp;
	temp.thread = kernel->currentThread;
	temp.time = x;
	
	cout<<"Sleep Start\n";
	for(int a=0;a<10;a++)
	{
		if(kernel->scheduler->waitArray[a].time==-1)
		{
			kernel->scheduler->inwait++;
			kernel->scheduler->waitArray[a]=temp;
			break;
		}
	}
	kernel->currentThread->Sleep(false);
	kernel->interrupt->SetLevel(IntOn);
	cout<<"Sleep End\n";
}
