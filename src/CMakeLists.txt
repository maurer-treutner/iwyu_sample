cmake_minimum_required(VERSION 3.8)

project(helloworld,C++)

find_program(iwyu_path NAMES include-what-you-use iwyu)
if(NOT iwyu_path)
  message(WARNING "include-what-you-use not found, no analysis of include files possible")
endif()

add_subdirectory(iwyu_sample)
