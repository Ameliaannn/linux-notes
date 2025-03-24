# A simple Linux command practice tool written in C++

A simple C++ program to practice Linux commands interactively using `system()` calls.


## Features
1. Execute any Linux shell command interactively (via `system()`)
2. Automatically logs all commands to `command_log.txt`
3. Input `log` to view command history
4. Input `exit` to quit the program

Uses `std::getline()` to read user input.
Calls Linux commands using `std::system()`.
Writes logs using `std::ofstream` to `command_log.txt`.
Simple condition handling for `exit` and `log` commands.

##  Usage

### 1. Compile

```bash
g++ LinuxFileHelper.cpp -o helper
```

### 2. Run

```bash
./helper
```
