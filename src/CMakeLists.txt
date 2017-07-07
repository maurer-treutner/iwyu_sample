# CMake file for project iwyu_sample.
#
# Sets some global parameters and adds all required module as submodules
#
# (c) 2017 Maurer & Treutner GmbH & Co. KG, Leopoldshafen
#

# We require CMake 3.3 since it introduced the cmake property CXX_INCLUDE_WHAT_YOU_USE
cmake_minimum_required(VERSION 3.3)

# Our project is a pure C++ project
project(helloworld,C++)

# For iwyu support, we need the program inclued-what-you-use. 
find_program(iwyu_path NAMES include-what-you-use iwyu)
if(NOT iwyu_path)
  message(WARNING "include-what-you-use not found, no analysis of include files possible")
endif()

# Submodule for our example
add_subdirectory(iwyu_sample)
