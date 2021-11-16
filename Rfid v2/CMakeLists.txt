cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")


ADD_LIBRARY(RFID lib/rfid/MFRC522.cpp)

find_library(wiringPi_LIB wiringPi)

add_executable(guigui main.cpp)

target_link_libraries(guigui wiringPi wiringPiDev RFID bcm2835)
