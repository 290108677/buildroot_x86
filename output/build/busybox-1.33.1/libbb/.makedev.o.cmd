cmd_libbb/makedev.o := /root/buildroot-2021.05.1/output/host/bin/x86_64-buildroot-linux-uclibc-gcc -Wp,-MD,libbb/.makedev.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.33.1"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os   -malign-data=abi -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"makedev"'  -DKBUILD_MODNAME='"makedev"' -c -o libbb/makedev.o libbb/makedev.c

deps_libbb/makedev.o := \
  libbb/makedev.c \
  include/platform.h \
    $(wildcard include/config/werror.h) \
    $(wildcard include/config/big/endian.h) \
    $(wildcard include/config/little/endian.h) \
    $(wildcard include/config/nommu.h) \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include-fixed/limits.h \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include-fixed/syslimits.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/limits.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/features.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_config.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/cdefs.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/posix1_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/local_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/limits.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_local_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/posix2_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/xopen_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/stdio_lim.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/byteswap.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/byteswap.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/wordsize.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/byteswap-common.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/typesizes.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/byteswap-16.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/endian.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/endian.h \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include/stdint.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/stdint.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/wchar.h \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include/stdbool.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/unistd.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/posix_opt.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_posix_opt.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/environments.h \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include/stddef.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/confname.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/getopt.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/sysmacros.h \

libbb/makedev.o: $(deps_libbb/makedev.o)

$(deps_libbb/makedev.o):
