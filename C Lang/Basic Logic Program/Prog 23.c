//23.WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter num1 : ");
	scanf("%d",&num1);
	printf("Enter num2 : ");
	scanf("%d",&num2);
	printf("before swap a=%d,b=%d\n",num1,num2);
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	printf("after swap a=%d,b=%d\n",num1,num2);
}

