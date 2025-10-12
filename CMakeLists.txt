# リポジトリルート (zmk-config-prospector/) の CMakeLists.txt

# Zephyrアプリケーションとして必要な最小バージョン
cmake_minimum_required(VERSION 3.20.0)

# プロジェクト名を設定（C言語のみを使用）
project(Prospector_ZMK_Config C) 

# カスタム設定を外部アプリケーションとしてZephyrに組み込む
# ZMKのカスタムアプリケーション統合の標準定型文を使用
list(APPEND KERNEL_CONFIG_SOURCES config/prospector_scanner.conf)
list(APPEND KERNEL_CONFIG_SOURCES config/prospector_scanner.overlay)

# configディレクトリをKconfigの探索パスに追加
list(APPEND ZEPHYR_EXTRA_MODULES ${CMAKE_CURRENT_SOURCE_DIR})
