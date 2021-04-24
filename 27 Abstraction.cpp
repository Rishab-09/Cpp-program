
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char key[25]= "Rishab";
	char buffer[25];
	do
	{
		
		cout<<"Enter your Name: "<<endl;
		cin>>buffer;
	}
	
	while(strcmp(key,buffer) !=0);
	{
		cout<<"Hey Rishab nice to meet to you"<<endl;
		
	}

}
