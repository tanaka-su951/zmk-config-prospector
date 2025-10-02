cmake_minimum_required(VERSION 3.20)

find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(prospector_scanner_app)

# 独自ソースを ZMK app ターゲットに追加
target_sources(app PRIVATE
    src/display/status_screen.c
    src/display/widgets/bongo_cat.c
)

# 必要なライブラリリンク
target_link_libraries(app PRIVATE zmk ZMK)
