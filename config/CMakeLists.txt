# config/CMakeLists.txt

# カスタムモジュールの統合（カスタムモジュールがwest.ymlで有効になった場合）
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/modules/prospector-zmk-module/CMakeLists.txt")
    add_subdirectory(modules/prospector-zmk-module)
endif()

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/modules/zmk-dongle-display/CMakeLists.txt")
    add_subdirectory(modules/zmk-dongle-display)
endif()
