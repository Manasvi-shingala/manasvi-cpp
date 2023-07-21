#include<iostream>
using namespace std;
class mother
{
	public:
		void family()
		{
		
			cout<<"hello i am mother...."<<endl;	
		}
};
class daughter:public mother
{
	public:
		void family()
		{
		
			cout<<"hello I am daughter...."<<endl;
		}
	
};
class brother:public daughter
{
	public:
		void family()
		{
		
			cout<<"hello I am brother...."<<endl;
		}
	
};
int main()
{
	brother b1;
	b1.family();
	daughter d1;
	d1.family();
	b1.mother::family();
	
	return 0;
}
