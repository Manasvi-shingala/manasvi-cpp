#include<iostream>
using namespace std;

class  mother
{
	public:
	int age;
	char name[100];	
};
class zebra:public mother
{
	public:
		void setdata()
		{
			cout<<"Enter age : ";
			cin>>mother::age;
			
			cout<<"Enter name : ";
			cin>>mother::name;
		}	
		void getdata()
		{
			cout<<"Hello , I am zebra"<<endl;
			
			cout<<"my age is : "<<age<<endl;
			cout<<"my name is : "<<name<<endl;
		}
};
class Dolphin:public mother
{
	public:
		void setdata()
		{
			cout<<"Enter age : ";
			cin>>mother::age;
			
			cout<<"Enter name : ";
			cin>>mother::name;
		}	
		void getdata()
		{
			cout<<"Hello , I am Dolphin"<<endl;
			
			cout<<"my age is : "<<age<<endl;
			cout<<"my name is : "<<name<<endl;
		}
};

int main()
{
	zebra z1;
	Dolphin d1;
	
	z1.setdata();
	z1.getdata();
	d1.setdata();
	d1.getdata();
	
	
}

