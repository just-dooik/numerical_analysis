# Homework#1

## File Structure
```
📦numerical_analysis
 ┣ 📂.vscode
 ┃ ┣ 📜c_cpp_properties.json
 ┃ ┗ 📜settings.json
 ┣ 📂Homework#1
 ┃ ┣ 📜README.md
 ┃ ┣ 📜main.c
 ┃ ┣ 📜makefile
 ┃ ┗ 📜runMachAr
 ┣ 📂NRs
 ┗ 📜README.md
 ```

- main.c includes `nr.h` which contains the modules given from the assignment. 
- `/NRs/k_and_r/ansi/machar.c` has been modified by adding a function `machar_double` which does exactly the same function to `machar` but with the variable type `double`. 

## System Environment

### OS: MAC 14.6.1(23G93)
### Compiler: macos-clang-arm64
### C standard: C17

## Implementation
all the implementations can be seen in `main.c` and `NRs/k_and_r/ansi/machar.c`
#### get_eps
- finds smallest real number eps where 1 + 2^(-n) = 1 for float

#### get_eps_double 
- finds smallest real number eps where 1 + 2^(-n) = 1 for double

#### machar
- no change

#### machar_double
- does same task to machar but with double, implemented in `NRs/k_and_r/ansi/machar.c`

## Result

```
Machine Accuracy (machar):      0.00000011920928955078125
Machine Accuracy (get_eps):     0.00000011920928955078125
Machine Accuracy (machar_double):       0.0000000000000002220446049250313080847263336181640625
Machine Accuracy (get_double_eps):      0.0000000000000002220446049250313080847263336181640625
```