# CMake generated Testfile for 
# Source directory: /root/buildroot-2021.05.1/output/build/host-cmake-3.16.9
# Build directory: /root/buildroot-2021.05.1/output/build/host-cmake-3.16.9
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
include("/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/EnforceConfig.cmake")
add_test(SystemInformationNew "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/bin/cmake" "--system-information" "-G" "Unix Makefiles")
set_tests_properties(SystemInformationNew PROPERTIES  _BACKTRACE_TRIPLES "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/CMakeLists.txt;825;add_test;/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/CMakeLists.txt;0;")
subdirs("Source/kwsys")
subdirs("Utilities/std")
subdirs("Utilities/KWIML")
subdirs("Utilities/cmlibrhash")
subdirs("Utilities/cmzlib")
subdirs("Utilities/cmcurl")
subdirs("Utilities/cmexpat")
subdirs("Utilities/cmbzip2")
subdirs("Utilities/cmzstd")
subdirs("Utilities/cmliblzma")
subdirs("Utilities/cmlibarchive")
subdirs("Utilities/cmjsoncpp")
subdirs("Utilities/cmlibuv")
subdirs("Source")
subdirs("Utilities")
subdirs("Tests")
subdirs("Auxiliary")
