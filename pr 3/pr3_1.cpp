#include<iostream>
using namespace std;

class a
{
	public:
	int height;
	int width;	
};
class b:public a
{
	public:
		
	int b;
	void setdata()
	{
		cout<<"enter height:";
		cin>>a::height;
		cout<<"enter width:";
		cin>>a::width;		
	}
	void getdata()
	{
		b=width*height;
		cout<<"arae is : "<<b<<endl;
	}	
};
class c:public a
{
	public:
	int c;
	void setdata()
	{
		cout<<"enter height:";
		cin>>a::height;
		cout<<"enter width:";
		cin>>a::width;
	}
	void getdata()
	{
		c=0.5*width*height;
		cout<<"area is : "<<c<<endl;
	}	
};
int main()
{
	b b1;
	c c1;
	
	b1.setdata();
	b1.getdata();
	c1.setdata();
	c1.getdata();
}






























 
