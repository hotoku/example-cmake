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
- prj5 ライブラリを探す

# memo

`cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=1` を実行すると build の下に compile_commands.json が作られる。
このファイルへのパスを、`.vscode/c_cpp_properties.json`に設定すると intelliSence に情報を渡せる。
cf: https://stackoverflow.com/questions/46258143/visual-studio-code-how-to-configure-includepath-for-better-intellisense-results
