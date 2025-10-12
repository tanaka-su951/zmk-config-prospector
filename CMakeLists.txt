# リポジトリルート (zmk-config-prospector/) の CMakeLists.txt

# Zephyrアプリケーションとして必要な最小バージョン
cmake_minimum_required(VERSION 3.20.0)

# プロジェクト名を設定（ファームウェア名）
project(Prospector_ZMK_Config)

# カスタム設定をZephyrにインクルード
add_subdirectory(config) 
