#include <stdio.h>
#include <unistd.h>

long long multiply(int a, int b)
{
	if(a != 0 && b != 0) {
		return a*b;
	}

	return 0LL;
}

int main()
{
    int a = 2;
    int b = 1;

    for(;;a++,b++) {
        printf("Multiply() normal: %lld\n", multiply(a, b));
        sleep(1);
    }

    return 0;
}
