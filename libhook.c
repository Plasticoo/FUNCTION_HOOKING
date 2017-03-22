#define _GNU_SOURCE

#include <dlfcn.h>
#include <unistd.h>
#include <stdio.h>

unsigned int (*original_sleep)(unsigned int);

void __attribute__((constructor)) __init()
{
    original_sleep = dlsym(RTLD_NEXT, "sleep");
}

unsigned int sleep(unsigned int seconds)
{
    
}
