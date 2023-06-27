#include<iostream>
using namespace std;
class custemer
{
  private:	
	int cus_id;
    char cus_name[100];
	int cus_age;
	char cus_telecome_brand_name[100];
	char cus_mobile_number[10];
	char cus_city[100];
	char cus_simcard_validity[100];
	
	public:
	 void setdata()
	 {
		 	cout<<"enter id:";
		 	cin>>cus_id;
		 	
		 	cout<<"enter name:";
		 	cin>>cus_name;
		 	
		 	cout<<"enter age:";
		 	cin>>cus_age;
		 	
		 	cout<<"enter brand:";
		 	cin>>cus_telecome_brand_name;
		 	
		 	cout<<"enter mobile_number:";
		 	cin>>cus_mobile_number;
		 	
		 	cout<<"enter city:";
		 	cin>>cus_city;
		 	
		 	cout<<"enter simcard_validity:";
		 	cin>>cus_simcard_validity;
		
	 }
		
		void getdata()
		{
			cout<<"id: "<<cus_id
				<<"name: "<<cus_name
				<<"age: "<<cus_age
				<<"brand"<<cus_telecome_brand_name
				<<"mobile_number: "<<cus_mobile_number
				<<"city: "<<cus_city
				<<"cus_simcard_validity: "<<cus_simcard_validity<<endl;
		}	 	
	
};
int main()
{
	custemer c1, c2, c3;
	
	c1.setdata();
	c2.setdata();
	c3.setdata();
	
	c1.getdata();
	c2.getdata();
	c3.getdata();

	return 0;
	
}

