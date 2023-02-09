0x15. C - File I/O

n Unix and Unix-like computer operating systems, a file descriptor (FD, less frequently fildes) is a process-unique identifier (handle) for a file or other input/output resource, such as a pipe or network socket.

File descriptors typically have non-negative integer values, with negative values being reserved to indicate "no value" or error conditions.

File descriptors are a part of the POSIX API. Each Unix process (except perhaps daemons) should have three standard POSIX file descriptors, corresponding to the three standard streams

On Linux, the set of file descriptors open in a process can be accessed under the path /proc/PID/fd/, where PID is the process identifier. File descriptor /proc/PID/fd/0 is stdin, /proc/PID/fd/1 is stdout, and /proc/PID/fd/2 is stderr. As a shortcut to these, any running process can also access its own file descriptors through the folders /proc/self/fd and /dev/fd.[4]


Tasks
0. Tread lightly, she is near
Write a function that reads a text file and prints it to the POSIX standard output.


1. Under the snow
Create a function that creates a file.



2. Speak gently, she can hear
Write a function that appends text at the end of a file.


3. cp
Write a program that copies the content of a file to another file.


4. elf
Write a program that displays the information contained in the ELF header at the start of an ELF file.
