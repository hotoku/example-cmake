add_library(greetings
  SHARED
    hello.cpp
    good_morning.cpp
)

target_include_directories(greetings
  PUBLIC ${PROJECT_SOURCE_DIR}/include
)

# note:
# PUBLICの意味 = このターゲット（greetings）にも、
# これをリンクするターゲット（a.out）にも、このディレクトリのヘッダが必要。
# 他に、PRIVATE, INTERFACEがある。
# PRIVATEの意味 = このターゲット（greetings）にだけ、このディレクトリのヘッダが必要。
# INTERFACEの意味 = これをリンクするターゲット（a.out）にだけ、このディレクトリのヘッダが必要。

