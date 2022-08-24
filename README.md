# compile-commands-testing

## Reproduction

1. `bazel clean --expunge && rm -rf .cache compile_commands.json`
2. VSCode command `clangd: Restart language server`
3. Open `foo.h` in VSCode; observe that there are no underlined errors.
4. `bazel run :refresh_compile_commands_bad`
5. Close and reopen `foo.h` in VSCode; observe the following error underlined on line 4:
```
/usr/include/c++/12.1.1/iostream
Follow link (ctrl + click)

In included file: 'stdlib.h' file not foundclang(pp_file_not_found)
cstdlib(75, 15): Error occurred here
```
6. `bazel run :refresh_compile_commands_good`
7. Close and reopen `foo.h` is VSCode; observe that there are no underlined errors.

Tested with:
```
$ uname -a
Linux nomi-linux 5.15.59-1-MANJARO #1 SMP PREEMPT Wed Aug 3 11:20:04 UTC 2022 x86_64 GNU/Linux
$ bazel --version
bazel 5.3.0
$ /usr/bin/gcc --version
gcc (GCC) 12.1.1 20220730

Visual Studio Code > Help > About
    Version: 1.70.2
    Commit: e4503b30fc78200f846c62cf8091b76ff5547662
    Date: 2022-08-16T05:36:25.715Z
    Electron: 18.3.5
    Chromium: 100.0.4896.160
    Node.js: 16.13.2
    V8: 10.0.139.17-electron.0
    OS: Linux x64 5.15.59-1-MANJARO

Clangd path:
/home/nomi/.config/Code/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/14.0.3/clangd_14.0.3/bin/clangd

Clangd arguments:
--header-insertion=never
--query-driver=**
--log=verbose
```

## Logs

- logs/clangd-no-compile-commands.log
- logs/clangd-compile-commands-bad.log
- logs/clangd-compile-commands-good.log
- logs/compile_commands_bad.json
- logs/compile_commands_good.json

