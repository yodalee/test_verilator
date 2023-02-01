cmake_minimum_required(VERSION 3.16)

project(verilog)

find_package(verilator HINTS $ENV{VERILATOR_ROOT})

set(TOP Vmain)

add_executable(${TOP} main.cpp)
verilate(${TOP} TRACE_FST SOURCES top.sv pkg.sv)