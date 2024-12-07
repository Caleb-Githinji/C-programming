//Display the cube
#include <stdio.h>
int main (){
	int a, num_terms;
	
	//Input the number of terms
	printf("Input number of terms:");
	scanf("%d", &num_terms);
	
	//Display cubes of numbers from 1 to input number of terms
	for (a=1;a<=num_terms;a++){
		printf("Number is: %d and cube of the %d is: %d\n", a, a,a*a*a);;
	}
	
	return 0;
}