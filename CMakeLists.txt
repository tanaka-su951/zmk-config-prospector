# リポジトリルート (zmk-config-prospector/) の CMakeLists.txt

# Zephyrアプリケーションとして必要な最小バージョン
cmake_minimum_required(VERSION 3.20.0)

# プロジェクト名を設定
project(Prospector_ZMK_Config C) # ★★★ 修正箇所: C++ サポートを無効化するため 'C' のみを指定 ★★★

# カスタム設定をZephyrにインクルード
add_subdirectory(config)
