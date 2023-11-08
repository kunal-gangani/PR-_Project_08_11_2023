#include<stdio.h>
#include<conio.h>
void main(){
	clrscr();
	int basic;
	float gross,hra,da,ta;
	printf("Enter your Basic salary: ");
	scanf("%d",&basic);
	hra=basic*0.15;
	da=basic*0.05;
	ta=basic*0.08;
	gross=basic+hra+da+ta;
	printf("\nYour gross salary is : %f",gross);
	getch();

}