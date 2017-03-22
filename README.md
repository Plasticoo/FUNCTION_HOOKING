Function Hooking in Linux
=========================

This is to test the capabilities of function hooking in Linux using LD_PRELOAD.
This doesn't include anything about detours, trampolines or virtual tables.

### How to test:

```
gcc main.c -o main
gcc -Wall -fPIC -shared -o libhook.so libhook.c -ldl
LD_PRELOAD=./libhook.so ./main

```
