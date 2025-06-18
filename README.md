# get_next_line

`get_next_line` is a C function that reads a file descriptor line by line, returning one line at a time until the end of the file.

## Features

- Reads one line per call from a file descriptor
- Supports multiple file descriptors simultaneously
- Handles memory efficiently

## Usage

Call `get_next_line(fd)` repeatedly to get each line. Returns `NULL` when no more lines are available or on error.

## How to compile

Make sure to include your `.c` files and link properly. Example:

```bash
gcc -Wall -Wextra -Werror get_next_line.c main.c -o gnl
