#include<iostream>
using namespace std;

class a
{
	public:
		int a;
};
class b:public a
{
	public:
		int b;
};
class c:public a
{
	public:
		int c;
};
class d:public b,public c
{
	public:
		int d;
		int e;
	
		void setdata()
		{
			cout<<"Enter a:";
			cin>>c::a;
			
			cout<<"enter b: ";
			cin>>b;
			
			cout<<"enter c: ";
			cin>>c;
		}
		void getdata()
		{
			d=c::a*c::a;
			e=c::a*c::a*c::a;
			
			cout<<"squra of a:"<<d<<endl;
			cout<<"squra of b:"<<b*b<<endl;
			cout<<"squre of c:"<<c*c<<endl;
			cout<<"cube of a:"<<e<<endl;
			cout<<"cube of b:"<<b*b*b<<endl;
			cout<<"cube of c:"<<c*c*c<<endl;
		}
};

int main()
{
	d d1;
	d1.setdata();
	d1.getdata();
}
