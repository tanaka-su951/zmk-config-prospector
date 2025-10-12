cmake_minimum_required(VERSION 3.20.0)

# Zephyr/ZMKアプリケーションのルートをインクルード
include(${ZEPHYR_BASE}/cmake/app/boilerplate.cmake NO_POLICY_SCOPE)

# ユーザー設定をZMKアプリケーションに追加する
zmk_init_targets()
