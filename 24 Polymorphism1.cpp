
#include<iostream>
using namespace std;
int mul(int,int);
float mul(float,int);

int mul(int a,int b)
{
	return a * b;
}

float mul(float a,int b)
{
	return a * b;
}

int main()
{
	int r1 = mul(5, 10);
	int r2 = mul(10, 10);
	cout<<"Result = "<<r1<<endl;
	cout<<"Result = "<<r2<<endl;
	
}
