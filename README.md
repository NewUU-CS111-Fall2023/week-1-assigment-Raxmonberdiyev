# Description of the project

## Simple project structure
The main idea about project structure is that you have at least 2 folders include and src. Folders purpose is:

- `include` - PUBLIC header files (.h files).
- `src` - PRIVATE source files (.h and .m files).
- `test` - tests files if you write tests (indefinitely you should).
- `libs` - third party or your own libraries you depend on.

```
MyProject
 ├── include
 │   └── MyProject
 │       └── Algorithm.h
 ├── src
 │   ├── Algorithm.cpp
 │   ├── FancyMath.h
 │   └── FancyMath.cpp
 └── test
     ├── AlgorithmTests.cpp
     └── FancyMathTests.cpp
```
