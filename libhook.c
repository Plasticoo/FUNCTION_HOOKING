#define _GNU_SOURCE

#include <dlfcn.h>
#include <unistd.h>
#include <stdio.h>

unsigned int (*original_sleep)(unsigned int);
long long (*multiply)(int,int);

int a = 300;
int b = 400;

void __attribute__((constructor)) __init()
{
    original_sleep = dlsym(RTLD_NEXT, "sleep");
    multiply = 0x400546;
}

unsigned int sleep(unsigned int seconds)
{
    printf("Multiply() hooked: %lld\n", multiply(a++, b++));
    return (*original_sleep)(seconds);
}
