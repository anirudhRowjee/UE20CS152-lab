# UE20CS152 Lab

These are the programs I've written for the various lab components of the `UE20CS152` course at PES University, Bangalore. Feel free to point out the mistakes (if any), and shoot me a message (or open an issue).

## Structure

```
t<number> == task <number>
pp<number> == practice program
```

```
week<number>
|-- {t/pp}<number>
|-- |-- main.c
|-- |-- utils.h
|-- |-- utils.c
```

## Usage
1. Clone or Download this Repository (`git clone`)
2. Navigate to the folder you want (folders for weeks are zero-indexed with no gaps)
3. Navigate to the program folder you want to go to (t1, t2, t3.. pp1, pp2..)

**WARNING: IF YOU USE WINDOWS, THE MAKEFILE WILL NOT WORK WITHOUT CHANGES.**

* On Windows, use the following command
```
$ gcc -o main utils.c main.c
```

* On Linux, use the `make` command to compile the program. You could also use the compile command for windows.
```
$ make
```

(copying the same makefile in multiple places was a matter of convenience, and It could've been avoided.)



