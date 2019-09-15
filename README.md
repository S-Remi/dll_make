# dll_make
C/C++でDLLを簡単に作成するためのヘッダファイル


## 使い方
Visual Studio(以下、VSとする)もしくはGCCを使用することを前提としてる。

まずはDLLを作成する関数が存在するファイルに、
 - VSなら WIN_DLL_CREATE を定義(define)する。
 - GCCなら GCC_DLL_CREATE を定義(define)する。
 - DLLを使用しない場合は、何も定義しない（もしくは上記定義のコメントアウトを行う）。


その次にこのヘッダファイルをincludeする。

※ifdefなどを使用しているため、includeを先に行わないこと。

後はDLLにしたい関数の戻り値の型を「DLL(戻り値の型)」とするだけ。

ただし、GCCではビルド時のオプションで「-fvisibility=hidden」を指定してください。


