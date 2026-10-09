/* Program to add two numbers */
#include<stdio.h>
#define PI 3.14

int x = 10;
void show();

int main(){
	int a, b, sum;
	a = 5;
	b = 10;
	sum = a + b;
	printf("Sum = %d\n",sum);
	show();
	return 0;
}

void show(){
	printf("Value of PI = %.2f", PI);
}