# extended-qt-widgets
There are classes that inherit Qt widgets and have more methods in here.

# Using the plugin in your own project

* Step 1: add as ```submodule```
```bash
git submodule add https://github.com/zero80517/extended-qt-widgets
```
* Step 2: build added submodule in ```release``` mode with ```install``` make argument.
* Step 3: add in ```pro``` file of your own application

```bash
include(./extended-qt-widgets/extended-qt-widgets.pri)
```
