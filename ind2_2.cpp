#include<iostream>
using namespace std;
	class A{
		public:
		int a;
		};
	class B:public A{
		public:
			int b;
		};
	class C:public A{
		public:
		int c;
		};
	class D:public B,public C{
		public:
			int d;
			void setData(){
				cout<<"enter a :  ";
				cin>>B::a;
				cout<<"enter b :  ";
				cin>>b;
				cout<<"enter c :  ";
				cin>>c;
			}
			void getData(){
				d=B::a+b+c;
				cout<<"sum :  "<<d;
			}
		};
int main(){
	D d1;
	d1.setData();
	d1.getData();
	return 0;
}
