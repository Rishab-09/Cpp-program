
#include<iostream>
using namespace std;

class emp
{
	public:
		emp()
		
		{
			cout<<"Default Invoke Constructor"<<endl;
		}
		~emp()
		{
			cout<<"Default Invoke Destructor"<<endl;
		}
};

int main()
{
	emp e1;
	emp e2;
}
