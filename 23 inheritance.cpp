
#include<iostream>
using namespace std;

class animal
{
	public:
		void eat()
		{
			cout<<"Dog is Eating"<<endl;
		}
		
		void sleep()
		{
			cout<<"Dog is Sleeping"<<endl;
		}
};

class dog : public animal
{
	public:
		void bark()
		{
			cout<<"Dog is Barking"<<endl;
		}
};

int main()
{
	dog d1;
	d1.eat();
	d1.sleep();
	d1.bark();
}
