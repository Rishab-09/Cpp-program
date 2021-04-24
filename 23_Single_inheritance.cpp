
#include<iostream>
using namespace std;

class Account
{
	public:
		int salary = 80000;
};

class programmer : public Account
{
	public:
		int bonus = 2000;
		
};

int main()
{
	programmer p1;
	cout<<"Salary: "<<p1.salary<<endl;
	cout<<"bonus: "<<p1.bonus<<endl;
	
	return 0;
}
