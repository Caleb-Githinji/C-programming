//for loop
#include <stdio.h>
int main()
{
	int i, sum = 0;
	//for(start,stop,step)
	for (i = 100; i > 0; i--)
	{
		printf("%d\n", i);
		sum += i;
	}
	printf("the sum is %d", sum);
	return 0;
}