//Program to find volume and surface area of cylinder
#include <stdio.h>
int main (){
	int height,radius,volume,surface_area;
	int PI=3.142;
	printf("Enter the radius");
	scanf("%d", &radius);
	
	printf("Enter the height");
	scanf("%d", &height);
	
	volume=PI*radius*radius*height;
	printf("The volume of %d and %d is %d\n", radius, height, volume);
	
	surface_area=2*PI*radius*radius+2*PI*radius*height;
	printf("The surface_area of %d and %d is %d\n", radius, height, surface_area);
	return 0;
}