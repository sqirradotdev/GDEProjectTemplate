Windows

```json
{
    "name": "Launch Project",
    "type": "cppvsdbg",
    "request": "launch",
    "program": "path\\to\\Godot.exe",
    // To run the project instead of editing it, add the "--editor" argument.
    "args": [
        "--path",
        "."
    ],
    "stopAtEntry": false,
    "cwd": "${workspaceFolder}",
    "environment": [],
    "console": "internalConsole",
    "preLaunchTask": "build (debug)"
}
```

Mac

```json
{
    "name": "Run Project",
    "type": "lldb",
    "request": "custom",
    "targetCreateCommands": [
        "target create /path/to/Godot.app/Contents/MacOS/Godot"
    ],
    // To run the project instead of editing it, add the "--editor" argument.
    "processCreateCommands": [
        "process launch -- --path ."
    ],
    "preLaunchTask": "build (debug)"
}
```