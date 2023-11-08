#include<stdio.h>
#include<conio.h>
void main(){
	float c,f;
	clrscr();
	printf("Enter the value of Celsius: ");
	scanf("%f",&c);
	f=(c*9/5)+32;
	printf("\nThe value of Fahrenheit is: %f",f);
	getch();
}