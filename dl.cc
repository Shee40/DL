//C++ program to check eligibility to own a driving license 
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age of the user:";
	cin>>age;
	
		if(age>=18)
		{
			cout<<"\n You are eligible";
		}
		else
		cout<<"\n You are not eligible";
		return 0;
	
}
