# Setting up a lab environment with vscode for c programming language

<img src="https://github.com/2023A3R003-COM111/COM-111/blob/main/res/VSCode.png">

## Requirements
1. Windows OS
2. Stable Internet Connection

### About VsCode
VSCode (Visual Studio Code) is a powerful Integrated Development Environment (IDE) that offers extensive support for extensions and customization. VSCode features built-in syntax highlighting and auto-completion, which greatly enhance the understanding and writing of code in any programming language.

### About MinGW (Minimal GNU)
MinGW is a collection of open-source development tools for Windows that includes the GNU Compiler Collection(GCC) and other essential utilities from GNU softwares.

## Procedure
1. Download [vscode](https://code.visualstudio.com/download) installer form official website, and run the installer with `administrator` permisions.
2. Accept the license agreement and click on `Next > Next > Install`. After Installation successfully complete click on `Finish`.
4. Download [mingw](ceforge.net/projects/mingw/) installer form sourceforge, and run the installer with `administrator` permisions.
5. Then click on `Install > Continue`. This will install latest version of mingw installer manager.
6. After installation complete click on `Continue`. MinGW installer manager will open itself, now right click on `mingw32-base` form the package list and select `Mark for Installaion`.
7. Now from menubar click on `Installation` and select `Apply changes`, a prompt will pop up, select `Apply`. This will install latest GNU base binaries. After Installion completes click on `Close` and quit the Manager.
8. After Successfully installing MinGW we also need to export the directory(to the `PATH` variable) where MinGW binaries are installed.
9. Search for `Edit the system environment variables`, open it and click on `Environment Variables...` and click `Edit > New` and add the location of binaries where you you installed MinGW, which in our case is default to `C:\MinGW\bin`. After adding click `OK > OK > OK`.
10. VsCode and MinGw is Successfully installed on your systems.

## Extension Requred for vscode
1. C/C++ Extension Pack
2. Code Runner

<img src="https://github.com/2023A3R003-COM111/COM-111/blob/main/res/Extensions%20required.png">

## Recomended Settings
#### Enabling "Run in Terminal"
Click on Setting(or CTR+,) form left bottom bar and select `Settings > Extensions > Run Code Configuration` and serach for `Run in Terminal` and enable it. This will run your code in linux like terminal which will give you more control over your vscode.

## Runing you first code
**Writing Hello world in C**<br>
Copy the following code into the vscode editor and save it.
```
#include <stido.h>

int main(){
  printf("Hello, World!\n");
  return 0;
}
```
Now click on Run button, placed on Top-Right corner of tab bar.
Your Program will run and will output "Hello, World!" onto terminal tab.

<img src="https://github.com/2023A3R003-COM111/COM-111/blob/main/res/Running%20first%20program.png">
