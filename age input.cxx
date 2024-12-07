// Age
#include <stdio.h>
int main()
{
	int age;
	
	//Read the age
	printf("Enter your age:");
	scanf("%d", &age);
	
	//Read the input and output the appropriate message
	if (age>=18){
		printf("Issue an ID\n");
	} else {
		printf("Below 18 years\n");
	}
	return 0;
}