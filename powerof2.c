#include<stdio.h>
int checkofpower(int n)
{
	if(n==0)
		return 0;
	while(n!=1)
	{
		if(n%2!=0)
			return 0;
		n=n/2;
	}
	return 1;
}
int main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(checkofpower(num))
	{
		printf("%d is power of 2\n",num);
	}
	else 
		printf("%d is not a power of 2\n",num);
}
