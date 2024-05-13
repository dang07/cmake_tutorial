cmake_minimum_required(VERSION 3.21)
project(MyProject VERSION 1.0.0)

# Can add STATIC or SHARED, or define -DBUILD_SHARED_LIBS=...
add_library(MySum add.c) 
add_executable(MyExe main.c)

target_link_libraries(MyExe PRIVATE MySum)
# target_link_options(MyExe PRIVATE abc) # Add linker option to target
#target_include_directories() # Add includes 
# target_compile_definitions()
# target_compile_options()


#add_subdirectories()
#include()

message("CMAKE_CURRENT_LIST_DIR = ${CMAKE_CURRENT_LIST_DIR}")
message("CMAKE_CURRENT_LIST_FILE = ${CMAKE_CURRENT_LIST_FILE}")
message("CMAKE_CURRENT_LIST_LINE = ${CMAKE_CURRENT_LIST_LINE}")

message("Top level:")
message(" PROJECT_SOURCE_DIR = ${PROJECT_SOURCE_DIR}")
message(" MyProject_SOURCE_DIR = ${MyProject_SOURCE_DIR}")

message("CMAKE_MODULE_PATH = ${CMAKE_MODULE_PATH}")


set(foo ab) # foo = "ab"
set(bar ${foo}cd) # bar = "abcd"
set(baz ${foo} cd) # baz = "ab;cd"
set(myVar ba) # myVar = "ba"
set(big "${${myVar}r}ef") # big = "${bar}ef" = "abcdef"
set(${foo} xyz) # ab = "xyz"
set(bar ${notSetVar}) # bar = ""

message(foo=${foo})
message(bar=${bar})
message(baz=${baz})
message(big=${big})
message(myVar=${myVar})