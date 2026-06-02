#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your marks: ";
	cin>>marks;
	
	if(marks>=90)
	{
				cout<<"Your Grade is A";
	}
	else if(marks>=75)
	{
   		cout<<"Your Grade is B";
	}
    else if(marks>=50)
	{
		cout<<"Your Grade is C";
	 }
	else
	{
		cout<<"you're' failed better luck next time";
	}
	return 0;
}