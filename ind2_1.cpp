#include<iostream>
using namespace std;
class Sbi{
	public:
	int interest=2;
	void fucS(){
	
	cout<<"interest of SBI : "<<interest<<endl;
}
};
class Bob{
	public:
	int interest=3;
	void fucB(){
	
	cout<<"interest of BOB : "<<interest<<endl;
}
};
class Icici{
	public:
	int interest=1;
	void fucI(){
	cout<<"interest of ICICI : "<<interest<<endl;
}
};
class Rbi:public Sbi,public Bob,public Icici
{
	
	
};
int main(){
	Rbi r1;
	r1.fucS();
	r1.fucB();
	r1.fucI();
	return 0;
}
