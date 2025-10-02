cmake_minimum_required(VERSION 3.20)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(prospector_scanner_app)

# ZMK 標準アプリをインポート
# app ターゲットは ZMK が提供するので再定義は不要
# 独自コードだけ追加
target_sources(app PRIVATE
    src/display/status_screen.c
    src/display/widgets/bongo_cat.c
)

# 必要に応じてモジュールをリンク
target_link_libraries(app PRIVATE zmk ZMK)
