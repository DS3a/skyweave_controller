cmake_minimum_required(VERSION 3.10)
project(skyweave_controller LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the crazyflie_cpp library as a subdirectory
add_subdirectory(crazyflie_cpp)

# Add your own executable (or library)
add_executable(controller
  src/controller.cpp
#   src/SomeOtherSource.cpp
)

# Include your own headers
target_include_directories(controller
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Link against crazyflie_cpp
target_link_libraries(controller
  PRIVATE
    crazyflie_cpp
)

# Optional: Install target
install(TARGETS controller
  RUNTIME DESTINATION bin
)