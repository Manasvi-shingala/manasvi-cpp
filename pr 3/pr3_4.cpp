#include<iostream>
using namespace std;

class employee1
{
	public:
		int id=101;
		char name[15]="mansvi";
		int salary=200000;	

	void function1()
	{
		cout<<"Enter id : "<<id<<endl;
		cout<<"Enter name : "<<name<<endl;
		cout<<"Enter salary : "<<salary<<endl;
	}
};
class employee2
{
		public:
			int id=103;
			char name[15]="khushi";
			int salary=200000;	
	
		void function2()
		{
			cout<<"Enter id : "<<id<<endl;
			cout<<"Enter name : "<<name<<endl;
			cout<<"Enter salary : "<<salary<<endl;
		}	
};

class manager:public employee1 , public employee2
{
	public:
};



int main()
{
	manager m1,m2;
	m1.function1();
	cout<<"***************************"<<endl;
	
	m2.function2();
}
