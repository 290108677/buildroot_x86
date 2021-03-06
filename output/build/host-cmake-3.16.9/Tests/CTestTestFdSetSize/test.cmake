cmake_minimum_required(VERSION 2.8.10)

# Settings:
set(CTEST_DASHBOARD_ROOT                "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CTestTest")
set(CTEST_SITE                          "racknerd-c383c8")
set(CTEST_BUILD_NAME                    "CTestTest-Linux-g++-FdSetSize")

set(CTEST_SOURCE_DIRECTORY              "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CTestTestFdSetSize")
set(CTEST_BINARY_DIRECTORY              "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CTestTestFdSetSize")
set(CTEST_CVS_COMMAND                   "CVSCOMMAND-NOTFOUND")
set(CTEST_CMAKE_GENERATOR               "Unix Makefiles")
set(CTEST_CMAKE_GENERATOR_PLATFORM      "")
set(CTEST_CMAKE_GENERATOR_TOOLSET       "")
set(CTEST_BUILD_CONFIGURATION           "$ENV{CMAKE_CONFIG_TYPE}")
set(CTEST_COVERAGE_COMMAND              "/usr/bin/gcov")
set(CTEST_NOTES_FILES                   "${CTEST_SCRIPT_DIRECTORY}/${CTEST_SCRIPT_NAME}")

ctest_start(Experimental)
ctest_configure(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
message("build")
ctest_build(BUILD "${CTEST_BINARY_DIRECTORY}" RETURN_VALUE res)
message("test")
ctest_test(BUILD "${CTEST_BINARY_DIRECTORY}" PARALLEL_LEVEL 20 RETURN_VALUE res)
message("done")
