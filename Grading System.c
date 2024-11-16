//Grading system
#include <stdio.h>
int main(){
	int subject1, subject2, subject3, average;
	printf("Enter marks for subject 1:");
	scanf("%d", &subject1);
	printf("Enter marks for subject 2:");
	scanf("%d", &subject2);
	printf("Enter marks for subject 3:");
	scanf("%d", &subject3);
	
	//calculate average marks
	average=(subject1+subject2+subject3)/3;
	printf("Average marks: %d\n", average);
	
	if(average>=70 && average<100){
		printf("Grade: A\n");
	}else if(average>=60 && average<70){
		printf("Grade: B\n");
	}else if(average>=50 && average<60){
		printf("Grade: C\n");
	}else if(average>=40 && average<50){
		printf("Grade: D\n");
	}else{
		printf("Grade: E(Fail)\n");
	}
	return 0;
}