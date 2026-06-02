#include<iostream>
using namespace std;
int main()
{
	int age;
	cin>>age;
	
	if(age >= 18)
	{
		cout<<"Candidate is eligible for voting";
	}
	else
	{
		cout<<"Candidate is not eligible for voting";
	}
	return 0;
}
