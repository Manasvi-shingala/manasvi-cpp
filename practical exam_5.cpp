#include<iostream>
using namespace std;

class tiger
{
public:
	animal()
	{
		cout<<"hello you are calling class tiger..."<<endl;
	}
};
class lion:virtual public tiger
{
	public:
		animal()
		{
			cout<<"hello you are calling class lion..."<<endl;
		}
};
class zebra:virtual public tiger
{
	public:
		animal()
		{
			cout<<"hello you are calling class zebra..."<<endl;
		}	
};
class dear:public lion,public zebra
{
	public:
		animal()
		{
			cout<<"hello you are calling class dear..."<<endl;
		}
};

int main()
{
	dear d1;
	d1.tiger::animal();
	d1.lion::animal();
	d1.zebra::animal();
	
	return 0;
}
