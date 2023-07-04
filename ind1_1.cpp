#include<iostream>
using namespace std;
class X{
	public:
	int a;
	int b;
	int c;
};
class Y:public X
{
	
	public:
		int d;
	void setData()
	{
		cout<<"enter value of a : ";
		cin>>a;
		cout<<"enter value of b : ";
		cin>>b;
		cout<<"enter value of c : ";
		cin>>c;
	};
	
	void getData()
	{
		d=a+b+c;
		cout<<"sum : "<<d<<endl;
		cout<<"cube : "<<d*d*d<<endl;
	};
};
int main(){
		Y s1;
		s1.setData();
		s1.getData();
	return 0;

	
}
