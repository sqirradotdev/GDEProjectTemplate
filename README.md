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