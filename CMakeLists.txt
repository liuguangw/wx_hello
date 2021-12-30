cmake_minimum_required(VERSION 3.21)
project(wx_hello)

set(CMAKE_CXX_STANDARD 14)
#set(wxBUILD_SHARED OFF)

add_subdirectory(deps/wxwidget)
set(appSourceList main.cpp core/my_frame.cpp core/my_app.cpp)
if (WIN32)
  add_executable(wx_hello WIN32 "${appSourceList}")
else()
  add_executable(wx_hello "${appSourceList}")
endif()
target_link_libraries(wx_hello wx::net wx::core wx::base)
