# Install script for directory: /home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/src/aruku

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/aruku")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/." TYPE DIRECTORY FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/src/aruku/include")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/libaruku.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so"
         OLD_RPATH "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/framework_common/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/framework_math/lib:/opt/ros/foxy/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/kansei_interfaces/lib:/opt/ros/foxy/lib/x86_64-linux-gnu:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/kansei/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/keisan/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/musen/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/robocup_client/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/tachimawari_interfaces/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/tachimawari/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaruku.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/aruku" TYPE EXECUTABLE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/walking_main")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main"
         OLD_RPATH "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/framework_common/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/framework_math/lib:/opt/ros/foxy/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/kansei_interfaces/lib:/opt/ros/foxy/lib/x86_64-linux-gnu:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/kansei/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/keisan/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/musen/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/robocup_client/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/tachimawari_interfaces/lib:/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/install/tachimawari/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/aruku/walking_main")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/opt/ros/foxy/lib/python3.8/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/library_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/aruku")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/aruku")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/opt/ros/foxy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/environment" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/path.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/local_setup.bash")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/local_setup.sh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_environment_hooks/package.dsv")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_index/share/ament_index/resource_index/packages/aruku")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/cmake" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/cmake" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/cmake" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku/cmake" TYPE FILE FILES
    "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_core/arukuConfig.cmake"
    "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/ament_cmake_core/arukuConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/aruku" TYPE FILE FILES "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/src/aruku/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/azriel19/Documents/File TA/File Simul ICHIRO/webots_ws/build/aruku/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
