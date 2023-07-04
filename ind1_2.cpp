#include<iostream>
using namespace std;
class Cel{
	public:
	float a;
};
class fer:public Cel{
	public:
		float b;
};
class Temp:public fer{
	public:
		void setdata(){
			cout<<"enter temperature in celsius : ";
			cin>>a;
		}
		void getdata(){
			b=(a*9/5)+32;
			cout<<"TEMPERATURE IN FAHRENHEIT : "<<b<<endl;
		}
};
int main(){
	Temp t1;
	t1.setdata();
	t1.getdata();
	return 0;
}
