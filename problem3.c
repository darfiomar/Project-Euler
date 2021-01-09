#include<stdio.h>
void main(void)
{
    __int64 number = 4000000;
	int divisor = 2;
	while (number > 1) {
		if (0 == (number % divisor)) {
			number /= divisor;
			divisor--;
		}
		divisor++;
	}
	printf("%d", divisor);
}
