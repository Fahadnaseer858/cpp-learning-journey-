#include<iostream>
using namespace std;

int a=2, b;
void printTable()
{
	for(b=1; b<=10; b++)
	{
	    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
	}
}
int main()
{
	printTable();
}
