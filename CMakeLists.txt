cmake_minimum_required(VERSION 3.30.0)
project(CryptoTrader LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Bring in the nlohmann/json lib
include(FetchContent)
FetchContent_Declare(
    nlohmann-json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.3  # Updated tag
)

FetchContent_MakeAvailable(nlohmann-json)

add_executable(CryptoTrader main.cpp)
target_link_libraries(CryptoTrader PRIVATE nlohmann_json::nlohmann_json)