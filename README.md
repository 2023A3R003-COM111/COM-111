# Setting up a lab environment with vscode for c programming language

## Requrements
1. Windows OS, Mac, Linux
2. Stable Internt Connection

### About VsCode
VSCode (Visual Studio Code) is a powerful Integrated Development Environment (IDE) that offers extensive support for extensions and customization. VSCode features built-in syntax highlighting and auto-completion, which greatly enhance the understanding and writing of code in any programming language.

### About MinGW (Minimal GNU)
MinGW is a collection of open-source development tools for Windows that includes the GNU Compiler Collection(GCC) and other essential utilities from GNU softwares.

## Procedure
1. Download vscode installer form official website, and run the installer with `administrator` permisions.
2. Accept the license agreement and click on `Next > Next > Install`. After Installation successfully complete click on `Finish`.
4. Download mingw installer form sourceforge, and run the installer with `administrator` permisions.
5. Then click on `Install > Continue`. This will install latest version of mingw installer manager.
6. After installation complete click on `Continue`. MinGW installer manager will open itself, now right click on `mingw32-base` and select `Mark for Installaion`.
7. Now form menu bar click on `Installation` and select `Apply changes`, a prompt will pop up, select `Apply`. This will install latest GNU base binaries. After Installion completes click on `Close` and quit the Manager.
8. After Successfully installing MinGW we also need to export the directory of binaries where MinGW is installed to the `PATH` variable of system.
9. Search for `Edit the system environment variables`, open it and click on `Environment`, Select `Path` variable and click `Edit > New` and add the location of binaries where you you installed MinGW, which in our case is default to `C:\MinGW\bin`. After adding click `OK > OK > OK`.
10. VsCode and MinGw is Successfully installed on your systems.

## Extension Requred for vscode
1. C/C++ Extension Pack
2. Code Runner

## Recomended Settings
#### Enabling "Run in Terminal"
Click on Setting(or CTR+,) form left bottom bar and select `Settings > Extensions > Run Code Configuration` and serach for `Run in Terminal` and enable it. This will run your code in linux like terminal which will give you more control over your vscode.
