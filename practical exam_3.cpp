#include<iostream>
using namespace std;

int main()
{
	int a=234;
	int b=0; 
	int c;
	
	
	
	try
	{
		if(b==0)
		{
			throw 0;
		}
		else
		{
			c=a/b;
			cout<<"answer is : "<<c<<endl;
		}
	}
	catch(int n)
	{
		cout<<"The Number Is can't  be divisible by zero...";
	}
	return 0;
}
