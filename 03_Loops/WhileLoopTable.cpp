#include<iostream>
using namespace std;
int main()
{
	int i, j=1;
	cout<<"...While loop..."<<endl;
	cin>>i;
	
	while(j<=10)
	{
		cout<<i<<" * "<<j<<" = "<<i*j<<endl;
		j++;
	}
	
	return 0;
}	