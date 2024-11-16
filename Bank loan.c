//Bank loan 
#include <stdio.h>

int main(){
	int age, annual_income;
	printf("Enter your age:");
	scanf("%d", &age);
	
	printf("Enter your annual_income:");
	scanf("%d", &annual_income);
	
	if("age>=21, && annual_income>21000:"){
		printf("Congratulations you qualify for a loan:");
	}
	 else{
			printf("Unfortunately we are unable to offer you a loan at this time");
			
		}
		
		return 0;
}