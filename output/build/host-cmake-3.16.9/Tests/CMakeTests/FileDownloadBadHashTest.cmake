if(NOT "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CMakeTests" MATCHES "^/")
  set(slash /)
endif()
set(url "file://${slash}/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CMakeTests/FileDownloadInput.png")
set(dir "/root/buildroot-2021.05.1/output/build/host-cmake-3.16.9/Tests/CMakeTests/downloads")

file(DOWNLOAD
  ${url}
  ${dir}/file3.png
  TIMEOUT 2
  STATUS status
  EXPECTED_HASH SHA1=5555555555555555555555555555555555555555
  )
