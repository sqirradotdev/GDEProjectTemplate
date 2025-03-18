# GDExtension Project Template in VS Code

This is a Godot Engine project template with GDExtension (C++) already setup to kickstart your project.

For more information, refer to [GDExtension C++ Example](https://docs.godotengine.org/en/stable/tutorials/scripting/gdextension/gdextension_cpp_example.html#setting-up-the-project), as this is what this project is based on.

## Getting Started

### Prerequisites

- Godot 4 executable
- C++ build tools\*
- SCons\*

\* *Follow [this documentation](https://docs.godotengine.org/en/stable/contributing/development/compiling/index.html#toc-devel-compiling) for build tools installation according to your platform.*

### Installation

1. Clone this repository somewhere locally alongside its submodules.

    ```
    git clone --recurse-submodules https://github.com/sqirradotdev/GDEProjectTemplate.git 
    ```
2. Navigate to the cloned repo and go to `.vscode` folder. Depending on your platform, duplicate (copy & paste) the template `launch` file and rename it to exactly `launch.json`. Ex: Windows users should duplicate `launch.windows.json`.
3. Open the cloned repo folder in VS Code.
4. Edit the recently renamed `launch.json` in `.vscode` folder and make a few edits:
    - Change the example Godot executable path to your path.
    - (Optional) To use the debugger on the Godot Editor, append `--editor` in the arguments list.

### Usage

It is adviced to compile the extension before launching the project for the first time.

Compiling is easy, you can hit the build shortcut (default is `Ctrl+Shift+B`) or by going to Terminal > Run Build Task...

Debugging is supported. Hit the Run shortcut (default is `F5`) or by going to Run > Start Debugging.

## License

This project is licensed under *Do What The Fuck You Want To Public License (WTFPL)*, see [LICENSE.txt](LICENSE.txt) for the full license text.

## Acknowledgments

- All of the [Godot Engine](https://github.com/godotengine/godot) authors and contributors. Thank you for your FOSS efforts!