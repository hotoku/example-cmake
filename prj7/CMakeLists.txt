cmake_minimum_required(VERSION 3.10)

project(prj6)

# main.cは、header1.h, header2.hへの依存がある。
# 明示的に、それらへの依存関係を記述しなくても、cmakeが自動的に依存関係を解決してくれる。
# つまり、header1.h or header2.hを更新すれば、main.cが再コンパイルされる。
add_executable(prj6
    main.c
)
