CMake の簡単な使い方をメモした。

[参考](https://qiita.com/shohirose/items/45fb49c6b429e8b204ac?utm_source=pocket_shared#%E3%81%AF%E3%81%98%E3%82%81%E3%81%AB)

## ビルド

各プロジェクトに移動後に、以下を実行する。

```shell
cmake -S . -B build
cmake --build build
```

## 内容

- prj1 基本
- prj2 ライブラリを作成し、それをリンクする場合
- prj3 ソースコードがサブディレクトリに分かれている場合
- prj4 C++11 を使う
