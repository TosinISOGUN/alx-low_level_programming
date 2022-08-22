# C - File I/O
<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/f/f8/File_table_and_inode_table.svg/800px-File_table_and_inode_table.svg.png" width="" height=""  />

## Description
In [Unix](https://en.wikipedia.org/wiki/Unix) and [Unix-like](https://en.wikipedia.org/wiki/Unix-like) computer operating systems, a **file descriptor (FD**, less frequently **fildes**) is a unique identifier ([handle](https://en.wikipedia.org/wiki/Handle_(computing)) for a file or other [input/output resource](https://en.wikipedia.org/wiki/Input/output), such as a [pipe](https://en.wikipedia.org/wiki/Pipe_(Unix)) or [network socket](https://en.wikipedia.org/wiki/Network_socket).

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams:
| Integer Value | Name |<[unistd.h](https://en.wikipedia.org/wiki/Unistd.h)> symbolic constant | <[stdio.h](https://en.wikipedia.org/wiki/Stdio.h)> file stream |
| --- | --- | --- | --- |
| 0 | [Standard input](https://en.wikipedia.org/wiki/Stdin) | STDIN_FILENO | stdin |


## Contents
File 0-read_textfile.c is a function that reads a text file and prints it to the POSIX standard output.

File 1-create_file.c is a function that creates a file.

File 2-append_text_to_file.c is a function that appends text at the end of a file.

File 3-cp.c is a program that copies the content of a file to another file.

File main.h is the header file that contains all these function prototypes.

## Requirements
<img src="https://alx-apply.hbtn.io/brand_alx/share_image_2019.jpg" width="300" height="100" />

- Allowed editors: `vi`, `vim`, `emacs`
- Compiler;
  - Ubuntu 20.04 LTS using gcc.
  - Using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Coding style;
  - Betty Style.

## Credits
Collaborators are acknowledged within the repository.
