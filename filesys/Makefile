# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the file system assignment
#    Defines set up assuming multiprogramming and virtual memory done first.
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES =-DUSER_PROGRAM -DFILESYS_NEEDED -DFILESYS -DVM -DUSE_TLB
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine -I../lib
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O)

# bare bones version
# DEFINES =-DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../filesys -I../threads -I../machine
# HFILES = $(THREAD_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(FILESYS_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
bitmap.o: ../lib/bitmap.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/bitmap.h
debug.o: ../lib/debug.cc ../lib/copyright.h ../lib/utility.h \
 ../lib/debug.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h
hash.o: ../lib/hash.cc ../lib/copyright.h
libtest.o: ../lib/libtest.cc ../lib/copyright.h ../lib/libtest.h \
 ../lib/bitmap.h ../lib/utility.h ../lib/list.h ../lib/debug.h \
 ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/list.cc \
 ../lib/hash.h ../lib/hash.cc
list.o: ../lib/list.cc ../lib/copyright.h
sysdep.o: ../lib/sysdep.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 /usr/include/sys/time.h /usr/include/sys/file.h /usr/include/fcntl.h \
 /usr/include/bits/fcntl.h /usr/include/bits/uio.h \
 /usr/include/bits/stat.h /usr/include/sys/socket.h \
 /usr/include/sys/uio.h /usr/include/bits/socket.h \
 /usr/include/bits/sockaddr.h /usr/include/asm/socket.h \
 /usr/include/asm-generic/socket.h /usr/include/asm/sockios.h \
 /usr/include/asm-generic/sockios.h /usr/include/sys/un.h \
 /usr/include/signal.h /usr/include/bits/signum.h \
 /usr/include/bits/siginfo.h /usr/include/bits/sigaction.h \
 /usr/include/bits/sigcontext.h /usr/include/bits/sigstack.h \
 /usr/include/sys/ucontext.h /usr/include/bits/sigthread.h
interrupt.o: ../machine/interrupt.cc ../lib/copyright.h \
 ../machine/interrupt.h ../lib/list.h ../lib/copyright.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/list.cc \
 ../machine/callback.h ../threads/main.h ../lib/debug.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
stats.o: ../machine/stats.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../machine/stats.h
timer.o: ../machine/timer.cc ../lib/copyright.h ../machine/timer.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
alarm.o: ../threads/alarm.cc ../lib/copyright.h ../threads/alarm.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../machine/timer.h ../machine/callback.h ../threads/main.h \
 ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h
kernel.o: ../threads/kernel.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/kernel.h ../threads/synch.h ../threads/synchlist.h \
 ../threads/synchlist.cc ../lib/libtest.h ../machine/elevatortest.h
main.o: ../threads/main.cc ../lib/copyright.h ../threads/main.h \
 ../lib/debug.h ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
scheduler.o: ../threads/scheduler.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 ../threads/thread.h ../lib/utility.h ../lib/sysdep.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
synch.o: ../threads/synch.cc ../lib/copyright.h ../threads/synch.h \
 ../threads/thread.h ../lib/utility.h ../lib/copyright.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
synchlist.o: ../threads/synchlist.cc ../lib/copyright.h \
 ../threads/synchlist.h ../lib/list.h ../lib/copyright.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/list.cc \
 ../threads/synch.h ../threads/thread.h ../lib/utility.h ../lib/sysdep.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/synchlist.cc
thread.o: ../threads/thread.cc ../lib/copyright.h ../threads/thread.h \
 ../lib/utility.h ../lib/copyright.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/switch.h \
 ../threads/synch.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h ../lib/list.cc ../threads/main.h ../lib/debug.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/scheduler.h \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
elevatortest.o: ../machine/elevatortest.cc ../lib/copyright.h \
 ../machine/elevatortest.h ../machine/elevator.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/list.cc \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/thread.h
elevator.o: ../machine/elevator.cc ../lib/copyright.h \
 ../machine/elevator.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../lib/list.h ../lib/debug.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/list.cc \
 ../threads/kernel.h ../lib/debug.h ../threads/thread.h ../lib/sysdep.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../threads/main.h ../userprog/userkernel.h \
 ../userprog/machine.h ../filesys/synchdisk.h ../machine/disk.h \
 ../threads/synch.h ../threads/main.h
addrspace.o: ../userprog/addrspace.cc ../lib/copyright.h \
 ../threads/main.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h ../userprog/addrspace.h ../bin/noff.h
exception.o: ../userprog/exception.cc ../lib/copyright.h \
 ../threads/main.h ../lib/debug.h ../lib/copyright.h ../lib/utility.h \
 ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h ../userprog/syscall.h
synchconsole.o: ../userprog/synchconsole.cc ../lib/copyright.h \
 ../userprog/synchconsole.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../machine/console.h ../machine/callback.h \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
 ../userprog/machine.h ../filesys/synchdisk.h ../machine/disk.h
userkernel.o: ../userprog/userkernel.cc ../lib/copyright.h \
 ../userprog/synchconsole.h ../lib/utility.h ../lib/copyright.h \
 ../machine/callback.h ../machine/console.h ../machine/callback.h \
 ../threads/synch.h ../threads/thread.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/timer.h \
 ../userprog/machine.h ../filesys/synchdisk.h ../machine/disk.h \
 ../userprog/userkernel.h
console.o: ../machine/console.cc ../lib/copyright.h ../machine/console.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
machine.o: ../machine/machine.cc ../lib/copyright.h ../machine/machine.h \
 ../lib/utility.h ../lib/copyright.h ../machine/translate.h \
 ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h
mipssim.o: ../machine/mipssim.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../machine/machine.h ../lib/utility.h ../machine/translate.h \
 ../machine/mipssim.h ../threads/main.h ../userprog/userkernel.h \
 ../threads/kernel.h ../threads/thread.h ../lib/sysdep.h \
 ../userprog/machine.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h
translate.o: ../machine/translate.cc ../lib/copyright.h ../threads/main.h \
 ../lib/debug.h ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h
synchdisk.o: ../filesys/synchdisk.cc ../lib/copyright.h \
 ../filesys/synchdisk.h ../machine/disk.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../threads/synch.h \
 ../threads/thread.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/machine.h ../machine/translate.h ../userprog/addrspace.h \
 ../filesys/filesys.h ../filesys/openfile.h ../lib/list.h ../lib/debug.h \
 ../lib/utility.h ../lib/sysdep.h ../lib/list.cc ../threads/main.h \
 ../lib/debug.h ../userprog/userkernel.h ../threads/kernel.h \
 ../threads/scheduler.h /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h
disk.o: ../machine/disk.cc ../lib/copyright.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../threads/main.h ../lib/debug.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../filesys/openfile.h \
 ../threads/scheduler.h ../lib/list.h ../lib/debug.h ../lib/list.cc \
 /usr/include/c++/4.4/map /usr/include/c++/4.4/bits/stl_tree.h \
 /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../machine/disk.h ../threads/synch.h ../threads/main.h
directory.o: ../filesys/directory.cc ../lib/copyright.h ../lib/utility.h \
 ../lib/copyright.h ../filesys/filehdr.h ../machine/disk.h \
 ../machine/callback.h ../lib/bitmap.h ../lib/utility.h \
 ../filesys/directory.h ../filesys/openfile.h /usr/include/stdio.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h \
 /usr/include/bits/types.h /usr/include/bits/typesizes.h \
 /usr/include/libio.h /usr/include/_G_config.h /usr/include/wchar.h \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/stdio_lim.h /usr/include/bits/sys_errlist.h \
 /usr/include/string.h /usr/include/xlocale.h
filesys.o: ../filesys/filesys.cc ../lib/copyright.h ../machine/disk.h \
 ../lib/utility.h ../lib/copyright.h ../machine/callback.h \
 ../lib/bitmap.h ../lib/utility.h ../filesys/directory.h \
 ../filesys/openfile.h ../filesys/filehdr.h ../filesys/filesys.h \
 ../lib/debug.h ../lib/sysdep.h /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h \
 ../filesys/pbitmap.h
openfile.o: ../filesys/openfile.cc ../lib/copyright.h \
 ../filesys/filehdr.h ../machine/disk.h ../lib/utility.h \
 ../lib/copyright.h ../machine/callback.h ../lib/bitmap.h \
 ../lib/utility.h ../filesys/openfile.h ../lib/debug.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/stats.h ../threads/alarm.h ../machine/callback.h \
 ../machine/timer.h ../userprog/machine.h ../filesys/synchdisk.h \
 ../threads/synch.h ../threads/main.h
filehdr.o: ../filesys/filehdr.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../lib/utility.h \
 ../threads/thread.h ../lib/sysdep.h ../userprog/machine.h \
 ../machine/translate.h ../userprog/addrspace.h ../filesys/filesys.h \
 ../filesys/openfile.h ../threads/scheduler.h ../lib/list.h \
 ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h ../filesys/filehdr.h ../lib/bitmap.h
fstest.o: ../filesys/fstest.cc ../lib/copyright.h ../lib/debug.h \
 ../lib/copyright.h ../lib/utility.h ../lib/sysdep.h \
 /usr/include/c++/4.4/iostream \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++config.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/os_defines.h \
 /usr/include/features.h /usr/include/bits/predefs.h \
 /usr/include/sys/cdefs.h /usr/include/bits/wordsize.h \
 /usr/include/gnu/stubs.h /usr/include/gnu/stubs-32.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/cpu_defines.h \
 /usr/include/c++/4.4/ostream /usr/include/c++/4.4/ios \
 /usr/include/c++/4.4/iosfwd /usr/include/c++/4.4/bits/stringfwd.h \
 /usr/include/c++/4.4/bits/postypes.h /usr/include/c++/4.4/cwchar \
 /usr/include/c++/4.4/cstddef \
 /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stddef.h /usr/include/wchar.h \
 /usr/include/stdio.h /usr/lib/gcc/i686-linux-gnu/4.4.5/include/stdarg.h \
 /usr/include/bits/wchar.h /usr/include/xlocale.h \
 /usr/include/c++/4.4/exception /usr/include/c++/4.4/bits/char_traits.h \
 /usr/include/c++/4.4/bits/stl_algobase.h \
 /usr/include/c++/4.4/bits/functexcept.h \
 /usr/include/c++/4.4/exception_defines.h \
 /usr/include/c++/4.4/bits/cpp_type_traits.h \
 /usr/include/c++/4.4/ext/type_traits.h \
 /usr/include/c++/4.4/ext/numeric_traits.h \
 /usr/include/c++/4.4/bits/stl_pair.h /usr/include/c++/4.4/bits/move.h \
 /usr/include/c++/4.4/bits/concept_check.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_types.h \
 /usr/include/c++/4.4/bits/stl_iterator_base_funcs.h \
 /usr/include/c++/4.4/bits/stl_iterator.h \
 /usr/include/c++/4.4/debug/debug.h /usr/include/c++/4.4/bits/localefwd.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++locale.h \
 /usr/include/c++/4.4/clocale /usr/include/locale.h \
 /usr/include/bits/locale.h /usr/include/c++/4.4/cctype \
 /usr/include/ctype.h /usr/include/bits/types.h \
 /usr/include/bits/typesizes.h /usr/include/endian.h \
 /usr/include/bits/endian.h /usr/include/bits/byteswap.h \
 /usr/include/c++/4.4/bits/ios_base.h \
 /usr/include/c++/4.4/ext/atomicity.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/gthr-default.h \
 /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h \
 /usr/include/bits/sched.h /usr/include/bits/time.h \
 /usr/include/bits/pthreadtypes.h /usr/include/bits/setjmp.h \
 /usr/include/unistd.h /usr/include/bits/posix_opt.h \
 /usr/include/bits/environments.h /usr/include/bits/confname.h \
 /usr/include/getopt.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/atomic_word.h \
 /usr/include/c++/4.4/bits/locale_classes.h /usr/include/c++/4.4/string \
 /usr/include/c++/4.4/bits/allocator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/c++allocator.h \
 /usr/include/c++/4.4/ext/new_allocator.h /usr/include/c++/4.4/new \
 /usr/include/c++/4.4/bits/ostream_insert.h \
 /usr/include/c++/4.4/cxxabi-forced.h \
 /usr/include/c++/4.4/bits/stl_function.h \
 /usr/include/c++/4.4/backward/binders.h \
 /usr/include/c++/4.4/bits/basic_string.h \
 /usr/include/c++/4.4/initializer_list \
 /usr/include/c++/4.4/bits/basic_string.tcc \
 /usr/include/c++/4.4/bits/locale_classes.tcc \
 /usr/include/c++/4.4/streambuf /usr/include/c++/4.4/bits/streambuf.tcc \
 /usr/include/c++/4.4/bits/basic_ios.h \
 /usr/include/c++/4.4/bits/locale_facets.h /usr/include/c++/4.4/cwctype \
 /usr/include/wctype.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_base.h \
 /usr/include/c++/4.4/bits/streambuf_iterator.h \
 /usr/include/c++/4.4/i686-linux-gnu/bits/ctype_inline.h \
 /usr/include/c++/4.4/bits/locale_facets.tcc \
 /usr/include/c++/4.4/bits/basic_ios.tcc \
 /usr/include/c++/4.4/bits/ostream.tcc /usr/include/c++/4.4/istream \
 /usr/include/c++/4.4/bits/istream.tcc /usr/include/stdlib.h \
 /usr/include/bits/waitflags.h /usr/include/bits/waitstatus.h \
 /usr/include/sys/types.h /usr/include/sys/select.h \
 /usr/include/bits/select.h /usr/include/bits/sigset.h \
 /usr/include/sys/sysmacros.h /usr/include/alloca.h /usr/include/libio.h \
 /usr/include/_G_config.h /usr/include/bits/stdio_lim.h \
 /usr/include/bits/sys_errlist.h /usr/include/string.h ../lib/utility.h \
 ../filesys/filesys.h ../filesys/openfile.h ../threads/main.h \
 ../userprog/userkernel.h ../threads/kernel.h ../threads/thread.h \
 ../lib/sysdep.h ../userprog/machine.h ../machine/translate.h \
 ../userprog/addrspace.h ../filesys/filesys.h ../threads/scheduler.h \
 ../lib/list.h ../lib/debug.h ../lib/list.cc /usr/include/c++/4.4/map \
 /usr/include/c++/4.4/bits/stl_tree.h /usr/include/c++/4.4/bits/stl_map.h \
 /usr/include/c++/4.4/bits/stl_multimap.h ../machine/interrupt.h \
 ../machine/callback.h ../machine/stats.h ../threads/alarm.h \
 ../machine/callback.h ../machine/timer.h ../userprog/machine.h \
 ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h \
 ../threads/main.h ../threads/thread.h
pbitmap.o: ../filesys/pbitmap.cc ../lib/copyright.h ../filesys/pbitmap.h \
 ../lib/bitmap.h ../lib/copyright.h ../lib/utility.h \
 ../filesys/openfile.h ../lib/utility.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
