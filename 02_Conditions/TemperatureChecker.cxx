#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"Enter Temperature: ";
	cin>>temp;
	
	if(temp>=40)
	{
		cout<<"Very hot temperature";
	}
	else if(temp>=30)
	{
		cout<<"Hot temperature";
	}
	else if(temp>=20)
	{
		cout<<"Normal";
	}
	else
	{
		cout<<"Cold";
	}
	return 0;
}