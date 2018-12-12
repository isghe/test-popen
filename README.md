# test_popen.c

(SOLVED) Different output executing on **macOS** and **GNU-Linux** in **C**, the function `popen("echo -n 'Hello World'")`
* [macOS](#macOS)
* [GNU-Linux](#gnu-linux)
* [Command Line](#command-line)
* [Solution](#solution)

## macOS

```
$ gcc test_popen.c
$ ./a.out
-n Hello World
$
```
## GNU-Linux

```
$ gcc test_popen.c
$ ./a.out
Hello World$
```
## Command Line

From command line, the result is the same, both on **macOS** and **GNU-Linux**
```
$ echo -n 'Hello World'
Hello World$
```

## Solution

Thanks to [Timothy Redaelli](https://github.com/drizzt) here the solution:
`/bin/echo -n` :-)
