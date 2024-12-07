#include <stdio.h>
#include <stdlib.h>

int main(){
	int paragraph;
	FILE *fptr;
	
	fptr = fopen("C:\\Users\\peter\\Desktop\\C Programs\\output.txt", "w");
	if (fptr == NULL){
		printf("Error opening the file");
		exit(1);
	}
	printf("Write a paragraph of upto 200 characters: ");
	scanf("%d", &paragraph);
	
	fprintf(fptr, "The paragraph written is %d", paragraph);
	fclose(fptr);
	printf("Paragraph written successfully.");
	
	return 0;
}