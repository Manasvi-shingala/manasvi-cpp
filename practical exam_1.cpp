#include<iostream>
using namespace std;

main()
{
	int j;
	int i;
	int n;
	int factorial=1;
	
	cout<<"Enter Number : "; cin>>n;
	
	for(i=1;i<=n;i++)
	{
		for(i=1,j=1;i<=n;i++,j++)
		{
			factorial=factorial*i;
			cout<<"Factorial of "<<j<<" is : "<<factorial<<endl;
		}
		n--;
	}
	return main() ;
}
