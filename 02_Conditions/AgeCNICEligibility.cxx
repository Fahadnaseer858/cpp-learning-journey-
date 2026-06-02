#include<iostream>
using namespace std;
int main()
{
	int age, cnic;
	cout<<"Enter your age: ";
	cin>>age;
	cout<<"Enter your cnic: ";
	cin>>cnic;
	if(age>=18 && cnic==1)
	{
		cout<<"Eligible";
	}
	else
	{
		cout<<"Not eligible";
	}
	return 0;
}