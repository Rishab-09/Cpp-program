
#include<iostream>
#include<string.h>
using namespace std;

class employee
{
	public:
	int id1;
	string name1;
	float salary1;
	
	employee(int id,string name,float salary)
	{
		this->id1=id;
		this->name1=name;
		this->salary1=salary;
	}
	
	void display()
	{
		cout<<id1<<" "<<name1<<" "<<salary1<<" "<<endl;
	}
};

int main()
{
	employee e1 = employee(101,"Rishab",5000);
	employee e2 = employee(102,"Rutik",10000);
	
	e1.display();
	e2.display();
	
	return 0;
}

