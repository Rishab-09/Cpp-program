#include<iostream>
using namespace std;

template<class T> T add(T &a,T &b)
{
	T result = a+b;
	return result;
}

int main()
{
	int i=10;
	int j=5;
	float m = 2.5;
	float n = 2;
	
	cout<<"Addition of i and j is "<<add(i,j)<<endl;
	cout<<"Addition of m and n is "<<add(m,n)<<endl;
	
}
