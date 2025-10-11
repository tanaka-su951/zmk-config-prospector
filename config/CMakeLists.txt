# config/CMakeLists.txt

# ZMKの標準的なCMake処理をインクルードします
find_package(ZMK REQUIRED)

# ZMKに、カスタムモジュール（modules/配下）を認識させます。
# これがモジュールのKconfigとC/C++ファイルをビルドにフックする役割を果たします。
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/modules/prospector-zmk-module/CMakeLists.txt")
    add_subdirectory(modules/prospector-zmk-module)
endif()

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/modules/zmk-dongle-display/CMakeLists.txt")
    add_subdirectory(modules/zmk-dongle-display)
endif()

# (オプション) ZMKアプリケーションを定義
# target_link_libraries(app PRIVATE <カスタムライブラリ名> )
