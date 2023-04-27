#include<stdio.h>
#include<conio.h>
int main()
{
	/* We are goin to create a code for a user to enter two numbers and get their addition,Multiplication,
	division and the two numbers square as a result
	*/
	int a,b,c;
	
	printf("Enter number a\n");
	scanf("%d", &a);
	
	printf("Enter number b\n");
	scanf("%d", &b);
	
	printf("The sum is: \n%d\n,The product is:\n%d\n,The substraction is:\n%d\n,The division is:\n%d\n,The square of a is:\n%d\n , The square of b is: \n%d\n",a+b,a*b,a-b,a/b,a*a,b*b);
	
}
