# README

# getc() vs getchar() vs getch() vs getche()

## Cloning the Repository
To get started, clone this repository from GitHub using the following command:
```sh
git clone https://github.com/computerman2027/getc-vs-getchar-vs-getch-vs-getche.git
cd "getc-vs-getchar-vs-getch-vs-getche"
```

## Compilation and Execution
Each program can be compiled using `gcc` and executed as follows:

### 1. getc_prog.c
```sh
gcc getc_prog.c -o getc_prog
./getc_prog
```
### 2. getc_prog2.c
```sh
gcc getc_prog2.c -o getc_prog2
./getc_prog2
```
### 3. getch_prog.c
```sh
gcc getch_prog.c -o getch_prog
./getch_prog
```
### 4. getche_prog.c
```sh
gcc getche_prog.c -o getche_prog
./getche_prog
```
### 5. getchar_prog.c
```sh
gcc getchar_prog.c -o getchar_prog
./getchar_prog
```

## Explanation of Each Program

### 1. `getc_prog.c`
- Uses `getc(stdin)` to read characters from input.
- Since input is buffered, you need to press `Enter` to submit input.
- Reads and prints each character separately.
- If the user enters "abcd" and presses `Enter`:
  - The first call to `getc(stdin)` retrieves `'a'`.
  - The remaining characters `'b'`, `'c'`, and `'d'` remain in the input buffer.
  - The next call to `getc(stdin)` retrieves `'b'` directly from the buffer.

#### Example Execution:
```sh
HEllo
aEAT SLEEP CODE
bBYE
```

### 2. `getc_prog2.c`
- Demonstrates that `getc()` can read characters from different input streams.
- Reads a character from `stdin`.
- Reads a character from a file using `getc(file)`.
- If the user enters "apple" as input, `getc(stdin)` captures `'a'` and the rest remains in the buffer.
- Reads the first character from `input.txt` when opened as a file stream.

#### Example Execution:
```sh
Enter a character: apple
You entered from stdin: a
Character read from file: E
```

### 3. `getch_prog.c`
- Uses `getch()` from `<conio.h>`.
- Waits for a key press without requiring `Enter`.
- Does not display the key pressed.

#### Example Execution:
```sh
HEllo
EAT SLEEP CODE
BYE
```

### 4. `getche_prog.c`
- Similar to `getch()`, but echoes the key pressed on the screen.

#### Example Execution:
```sh
HEllo
aEAT SLEEP CODE
bBYE
```

### 5. `getchar_prog.c`
- Uses `getchar()` to read a single character.
- Works similarly to `getc()`, requiring `Enter` to submit input.
- If the user enters "abcd" and presses `Enter`:
  - The first call to `getchar()` retrieves `'a'`.
  - The remaining characters `'b'`, `'c'`, and `'d'` remain in the input buffer.
  - The next call to `getchar()` retrieves `'b'` directly from the buffer.

#### Example Execution:
```sh
HEllo
aEAT SLEEP CODE
bBYE
```

## What is conio.h Header File?
`conio.h` (console input/output) is a header file used in older MS-DOS-based compilers like Turbo C/C++. It provides functions for handling console input and output, such as `getch()`, `getche()`, and `clrscr()`. These functions are primarily used for taking character input without pressing `Enter` and for managing screen output. However, `conio.h` is not a part of the standard C library and is not available in modern compilers like GCC. To use `getch()` and `getche()`, you may need to use alternative libraries or platform-specific implementations.

## What is Input Buffer?
The input buffer is a temporary storage area in memory where user input is stored before being processed by the program. When a user types characters and presses `Enter`, all the characters are stored in the input buffer. Functions like `getc()` and `getchar()` retrieve characters one by one from this buffer. If multiple characters are entered, the first function call retrieves the first character, and subsequent calls retrieve the next characters without requiring further user input. The buffer is cleared when all characters are read or explicitly flushed.

## Comparison Table
| Function  | Header File  | Buffered Input | Requires Enter | Displays Input | Used in Modern Compilers | Can Access Different Streams |
|-----------|-------------|---------------|---------------|---------------|------------------------|-----------------------------|
| `getc()`  | `<stdio.h>`  | Yes           | Yes           | Yes           | Yes                    | Yes                         |
| `getchar()` | `<stdio.h>`  | Yes           | Yes           | Yes           | Yes                    | No                          |
| `getch()`  | `<conio.h>`  | No            | No            | No            | No (not standard)      | No                          |
| `getche()` | `<conio.h>`  | No            | No            | Yes           | No (not standard)      | No                          |


## Conclusion
- `getc()` and `getchar()` are buffered, requiring `Enter`.
- `getch()` and `getche()` capture key presses instantly, but `getch()` does not display input.
- `getc()` can read from different input streams, including `stdin` and file streams.
- `getchar()` can only read from stdin input stream.
- Choose the appropriate function based on buffering and echoing behavior.

