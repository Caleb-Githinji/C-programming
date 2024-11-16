// Program to find the area of a triangle
#include <stdio.h>
int main() {
    int l,w,area;
	//declaration of variables 
	 printf("enter the length"); 
     scanf("%d",&l);
	    
     printf("enter the width");
	 scanf("%d",&w);  
     area=l*w;  
     printf("the area of %d and %d is %d\n",l,w,area);    
	 return 0;
}