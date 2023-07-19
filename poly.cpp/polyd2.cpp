#include<iostream>
using namespace std;
class Max{
	public:
	int a;
	void set(int x){
		this->a=x;
		
	}
	void get(){
		cout<<"a = "<<this->a<<endl;
		
	}
	bool operator>(Max n){
		if(this->a>n.a){
			return true;
		}
		else{
			return false;
		}
	}
};
int main(){
	Max m1,m2;
	m1.set(1);
	m1.get();
	m2.set(2);
	m2.get();
	if(m1>m2){
		cout<<"first number is max"<<endl;
	}else{
		cout<<"second number is max"<<endl;
	}
	
	return 0;
}
