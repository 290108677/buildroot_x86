# CMake generated Testfile for 
# Source directory: /root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Utilities/cmcurl
# Build directory: /root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Utilities/cmcurl
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(curl "curltest" "http://open.cdash.org/user.php")
set_tests_properties(curl PROPERTIES  _BACKTRACE_TRIPLES "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Utilities/cmcurl/CMakeLists.txt;1300;add_test;/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Utilities/cmcurl/CMakeLists.txt;0;")
subdirs("lib")
