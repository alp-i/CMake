cmake_minimum_required(VERSION 3.3)
project(SwiftOnly Swift)

if(NOT XCODE_VERSION VERSION_LESS 10.2)
  set(CMAKE_Swift_LANGUAGE_VERSION 5.0)
elseif(NOT XCODE_VERSION VERSION_LESS 8.0)
  set(CMAKE_Swift_LANGUAGE_VERSION 3.0)
endif()

add_executable(SwiftOnly main.swift)

# Dummy to make sure generation works with such targets.
add_library(SwiftIface INTERFACE)
