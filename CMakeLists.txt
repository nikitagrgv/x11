cmake_minimum_required(VERSION 3.25)
project(xspam)

set(CMAKE_CXX_STANDARD 17)

add_executable(xspam main.cpp Event.h TypesRegister.h TypesRegister.cpp Events.h)

target_link_libraries(xspam
        -lX11
)
