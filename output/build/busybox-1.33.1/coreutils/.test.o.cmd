cmd_coreutils/test.o := /root/buildroot-2021.05.1/output/host/bin/x86_64-buildroot-linux-uclibc-gcc -Wp,-MD,coreutils/.test.o.d   -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.33.1"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os   -malign-data=abi -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os     -DKBUILD_BASENAME='"test"'  -DKBUILD_MODNAME='"test"' -c -o coreutils/test.o coreutils/test.c

deps_coreutils/test.o := \
  coreutils/test.c \
    $(wildcard include/config/test.h) \
    $(wildcard include/config/test1.h) \
    $(wildcard include/config/test2.h) \
    $(wildcard include/config/ash/test.h) \
    $(wildcard include/config/hush/test.h) \
    $(wildcard include/config/ash/bash/compat.h) \
    $(wildcard include/config/hush/bash/compat.h) \
    $(wildcard include/config/feature/test/64.h) \
  include/libbb.h \
    $(wildcard include/config/feature/shadowpasswds.h) \
    $(wildcard include/config/use/bb/shadow.h) \
    $(wildcard include/config/selinux.h) \
    $(wildcard include/config/feature/utmp.h) \
    $(wildcard include/config/locale/support.h) \
    $(wildcard include/config/use/bb/pwd/grp.h) \
    $(wildcard include/config/lfs.h) \
    $(wildcard include/config/feature/buffers/go/on/stack.h) \
    $(wildcard include/config/feature/buffers/go/in/bss.h) \
    $(wildcard include/config/variable/arch/pagesize.h) \
    $(wildcard include/config/feature/verbose.h) \
    $(wildcard include/config/feature/etc/services.h) \
    $(wildcard include/config/feature/ipv6.h) \
    $(wildcard include/config/feature/seamless/xz.h) \
    $(wildcard include/config/feature/seamless/lzma.h) \
    $(wildcard include/config/feature/seamless/bz2.h) \
    $(wildcard include/config/feature/seamless/gz.h) \
    $(wildcard include/config/feature/seamless/z.h) \
    $(wildcard include/config/float/duration.h) \
    $(wildcard include/config/feature/check/names.h) \
    $(wildcard include/config/feature/prefer/applets.h) \
    $(wildcard include/config/long/opts.h) \
    $(wildcard include/config/feature/pidfile.h) \
    $(wildcard include/config/feature/syslog.h) \
    $(wildcard include/config/feature/syslog/info.h) \
    $(wildcard include/config/warn/simple/msg.h) \
    $(wildcard include/config/feature/individual.h) \
    $(wildcard include/config/ash.h) \
    $(wildcard include/config/sh/is/ash.h) \
    $(wildcard include/config/bash/is/ash.h) \
    $(wildcard include/config/hush.h) \
    $(wildcard include/config/sh/is/hush.h) \
    $(wildcard include/config/bash/is/hush.h) \
    $(wildcard include/config/echo.h) \
    $(wildcard include/config/printf.h) \
    $(wildcard include/config/kill.h) \
    $(wildcard include/config/killall.h) \
    $(wildcard include/config/killall5.h) \
    $(wildcard include/config/chown.h) \
    $(wildcard include/config/ls.h) \
    $(wildcard include/config/xxx.h) \
    $(wildcard include/config/route.h) \
    $(wildcard include/config/feature/hwib.h) \
    $(wildcard include/config/desktop.h) \
    $(wildcard include/config/feature/crond/d.h) \
    $(wildcard include/config/feature/setpriv/capabilities.h) \
    $(wildcard include/config/run/init.h) \
    $(wildcard include/config/feature/securetty.h) \
    $(wildcard include/config/pam.h) \
    $(wildcard include/config/use/bb/crypt.h) \
    $(wildcard include/config/feature/adduser/to/group.h) \
    $(wildcard include/config/feature/del/user/from/group.h) \
    $(wildcard include/config/ioctl/hex2str/error.h) \
    $(wildcard include/config/feature/editing.h) \
    $(wildcard include/config/feature/editing/history.h) \
    $(wildcard include/config/feature/tab/completion.h) \
    $(wildcard include/config/shell/ash.h) \
    $(wildcard include/config/shell/hush.h) \
    $(wildcard include/config/feature/editing/savehistory.h) \
    $(wildcard include/config/feature/username/completion.h) \
    $(wildcard include/config/feature/editing/vi.h) \
    $(wildcard include/config/feature/editing/save/on/exit.h) \
    $(wildcard include/config/pmap.h) \
    $(wildcard include/config/feature/show/threads.h) \
    $(wildcard include/config/feature/ps/additional/columns.h) \
    $(wildcard include/config/feature/topmem.h) \
    $(wildcard include/config/feature/top/smp/process.h) \
    $(wildcard include/config/pgrep.h) \
    $(wildcard include/config/pkill.h) \
    $(wildcard include/config/pidof.h) \
    $(wildcard include/config/sestatus.h) \
    $(wildcard include/config/unicode/support.h) \
    $(wildcard include/config/feature/mtab/support.h) \
    $(wildcard include/config/feature/clean/up.h) \
    $(wildcard include/config/feature/devfs.h) \
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
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/ctype.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_touplow.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/dirent.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/dirent.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/errno.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/errno.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/errno.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/errno.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/errno.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/errno-base.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/fcntl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/fcntl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/time.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/select.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/select.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sigset.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/time.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/sysmacros.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/pthreadtypes.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uio.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/stat.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/stat.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/inttypes.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/netdb.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/netinet/in.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/socket.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/uio.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/socket.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/socket_type.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sockaddr.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/socket.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/socket.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/posix_types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/stddef.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/posix_types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/posix_types_64.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/posix_types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/bitsperlong.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/sockios.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/sockios.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/in.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/siginfo.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/netdb.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/setjmp.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/setjmp.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/signal.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/signum.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sigaction.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sigcontext.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sigstack.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/ucontext.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/sigthread.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/paths.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/stdio.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_stdio.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/wchar.h \
  /root/buildroot-2021.05.1/output/host/lib/gcc/x86_64-buildroot-linux-uclibc/9.4.0/include/stdarg.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/stdlib.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/waitflags.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/waitstatus.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/alloca.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/string.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/libgen.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/poll.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/poll.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/poll.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/ioctl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/ioctls.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/ioctls.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/ioctls.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/ioctl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/ioctl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/ioctl.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/ioctl-types.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/ttydefaults.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/mman.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/mman.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/mman-linux.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/mman-shared.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/resource.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/resource.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/time.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/wait.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/termios.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/termios.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/uClibc_clk_tck.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/param.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/linux/param.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm/param.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/asm-generic/param.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/pwd.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/grp.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/shadow.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/mntent.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/sys/statfs.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/statfs.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/utmpx.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/bits/utmpx.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/arpa/inet.h \
  include/xatonum.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/regex.h \
  /root/buildroot-2021.05.1/output/host/x86_64-buildroot-linux-uclibc/sysroot/usr/include/fnmatch.h \

coreutils/test.o: $(deps_coreutils/test.o)

$(deps_coreutils/test.o):
