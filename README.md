# test_popen.c

Different output executing on **macOS** and **GNU-Linux** in **C**, the function `popen("echo -n \"Hello World!\"")`
* [macOS](#macOS)
* [GNU-Linux](#gnu-linux)

## macOS

```
$ gcc test_popen.c
$ ./a.out
-n Hello World!
$
```
## GNU-Linux

```
$ gcc test_popen.c
$ ./a.out
Hello World!$
```
