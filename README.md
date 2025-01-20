## Pipex

### Overview
The **Pipex** project is a fundamental introduction to working with UNIX system calls. It aims to deepen your understanding of pipes, process creation, and file handling by implementing a simple shell-like pipeline mechanism.

This project mimics the behavior of the following shell command:
```bash
< file1 cmd1 | cmd2 > file2
```
With your implementation, the above command will be executed as:
```bash
./pipex file1 "cmd1" "cmd2" file2
```

---

### Features
- Handles two commands (`cmd1` and `cmd2`) connected by a single pipe.
- Reads input from a file (`file1`) and writes output to a file (`file2`).
- Supports command path resolution using the `PATH` environment variable.
- Manages errors such as invalid file access, missing commands, or execution failures.
- Implements basic memory management to prevent leaks.

---

### Bonus Features
If implemented, the bonus part includes:
1. Handling multiple commands:
   ```bash
   ./pipex file1 "cmd1" "cmd2" "cmd3" ... "cmdN" file2
   ```
2. Implementing the "here_doc" functionality:
   ```bash
   ./pipex here_doc LIMITER cmd1 cmd2 file2
   ```
   This allows redirection similar to:
   ```bash
   cmd1 << LIMITER | cmd2 >> file2
   ```

---

### How to Use
1. **Compile the Project**: 
   Use the provided `Makefile` to compile the program.
   ```bash
   make
   ```

2. **Run the Program**:
   Execute the program with the required arguments:
   ```bash
   ./pipex file1 "cmd1" "cmd2" file2
   ```

3. **Example**:
   ```bash
   ./pipex infile "grep foo" "wc -l" outfile
   ```
   This will execute:
   ```bash
   < infile grep foo | wc -l > outfile
   ```

---

### Requirements
- Must use only allowed functions such as `open`, `close`, `read`, `write`, `pipe`, `fork`, `execve`, `dup2`, etc.
- Code must adhere to the [42 Norm](https://github.com/42School/norminette).
- Includes memory management and error handling to prevent segmentation faults or resource leaks.

---

### Files and Structure
- **Makefile**: Automates compilation with targets for `all`, `clean`, `fclean`, and `re`.
- **src/**: Contains the main logic and helper functions.
  - `pipex.c`: Entry point of the program.
  - `pipex_utils.c`: Utility functions for file handling and memory management.
- **libft/**: A custom library for additional string and memory manipulation functions.

---

### Testing
We recommend using tools like `valgrind` or `fsanitize` to verify memory usage:
```bash
valgrind --leak-check=full ./pipex infile "cmd1" "cmd2" outfile
```

---

### Learning Outcomes
- Deeper understanding of UNIX system calls.
- Experience with inter-process communication using pipes.
- Familiarity with process creation and command execution using `fork` and `execve`.
- Strengthened debugging skills for memory management and file handling.

---

Feel free to contribute or ask questions by opening an issue! 😊
---
