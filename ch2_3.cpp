#include<iostream>
using namespace std;
class hotel
{
   public:
	int hotel_id;
	char hotel_name[100];
	char hotel_type[100]; 
	int hotel_rating;
	static char hotel_location[100]; 
	int hotel_establish_year;
	int hotel_staff_quantity;
	int hotel_room_quantity;
	
	
	public:
		void setdata()
		{
			cout<<"enter hotel_id:";
			cin>>hotel_id;
			
			cout<<"enter hotel_name:";
			cin>>hotel_name;
			
			cout<<"enter hotel_type:";
			cin>>hotel_type;
			
			cout<<"enter hotel_rating:";
			cin>>hotel_rating;
			
			cout<<"enter hotel_establish_year:";
			cin>>hotel_establish_year;
			
			cout<<"enter hotel_staff_quantity:";
			cin>>hotel_staff_quantity;
			
			cout<<"enter hotel_room_quantity:";
			cin>>hotel_room_quantity;			
		}
		void getdata()
		{
			 cout<<"hotel_id: "<<hotel_id<<endl;
			 cout<<"hotel_name: "<<hotel_name<<endl;
			 cout<<"hotel_type: "<<hotel_type<<endl;
			 cout<<"hotel_rating: "<<hotel_rating<<" star"<<endl;
			 cout<<"hotel_location"<<" surat"<<endl;
			 cout<<"hotel_establish_year: "<<hotel_establish_year<<" year"<<endl;
			 cout<<"hotel_staff_quantity: "<<hotel_staff_quantity<<endl;
			 cout<<"hotel_room_quantity: "<<hotel_room_quantity<<endl;
			 
		}
};
	
	char hotel::hotel_location[100];
	
int main()
{
		
	hotel h1,h2,h3,h4,h5;
	
	h1.setdata();
	h2.setdata();
	h3.setdata();
	h4.setdata();
	h5.setdata();
	
	h1.getdata();
	h2.getdata();
	h3.getdata();
	h4.getdata();
	h5.getdata();
	
	
return 0;	
	
}	

