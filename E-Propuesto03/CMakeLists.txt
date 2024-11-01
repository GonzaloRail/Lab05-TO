cmake_minimum_required(VERSION 3.16)

project(E-Propuesto03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(E-Propuesto03 main.cpp)

include(GNUInstallDirs)
install(TARGETS E-Propuesto03
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
