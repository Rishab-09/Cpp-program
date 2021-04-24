
#include<iostream>
using namespace std;

class emp
{
	public:
		int id;
		string name;
		float sal;
		emp(int i, string n,float s)
		{
			id = i;
			name = n;
			sal = s;
		}
		
		void display()
		{
			cout<<id<<" "<<name<<" "<<sal<<endl;
		}
};

int main()
{
	emp e1=emp(101, "Rishab", 10000);
	emp e2=emp(102, "Neha", 15000);
	emp e3=emp(103, "Rutik", 20000);
	
	e1.display();
	e2.display();
	e3.display();
}
+
