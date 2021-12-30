cmake_minimum_required(VERSION 3.21)
project(wx_hello)

set(CMAKE_CXX_STANDARD 14)
#set(wxBUILD_SHARED OFF)

add_subdirectory(deps/wxwidget)
add_executable(wx_hello main.cpp core/my_frame.cpp core/my_app.cpp)
target_link_libraries(wx_hello wx::net wx::core wx::base)
