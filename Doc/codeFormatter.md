@page REF_CODE_FORMATTER Clang-Format

# Download and Install Clang-Format

Download here[https://llvm.org/builds] and install (https://medium.com/@swargarajd/installing-clang-formatter-in-visual-studio-code-for-windows-9a4fc882785c)

- do not remember to add executable into system path

# Install Extension on VSCode 

Install extension for vscode market [https://marketplace.visualstudio.com/items?itemName=xaver.clang-format]

# Configure VSCode Setting

- create a file for formatting style > named `.clang-format` at root.
- fill inside this file whatever you want
- Add executable of clang formatter in .settings.json > `"clang-format.executable": "C:\\Program Files\\LLVM\\bin\\clang-format.exe"`
- also you can enable/disable auto format on save and formatter > 
```cpp
    "[cpp]": {
            "editor.defaultFormatter": "xaver.clang-format",
            "editor.formatOnSave": false
        },
```
