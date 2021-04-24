#include<iostream>
using namespace std;

int main()
{
	int a=5 ,b=10,c=20;
	if(a>b)
	{
		if (a>c)
		{
			printf("Greatest number is %d",a);
		}
		else
		{
			printf("greatest number is %d",c);
		}
	}
	else
	{
		printf("greatest number is %d",a);
	}
}
