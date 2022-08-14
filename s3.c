#include<stdio.h>
int a=10;

void fun()
{
	int x=20;
	printf("in fun\n");
}

void main()
{
	int y=30;
	printf("in  main\n ");
	fun();
	printf("end main \n");
}
