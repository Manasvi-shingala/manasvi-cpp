#include<iostream> 
#include<string.h>
using namespace std;
class compny
{
	public:
		int comp_id;
		char comp_name[100];
		int comp_staff_quantity;
		int comp_revenue;
		int comp_import_raw_diamonds; 
		int comp_export_diamonds;
		char comp_ceo[100];
	
	public:
		compny()
		{
			this->comp_id=1;
			strcpy(this->comp_name , "abc");
			this->comp_staff_quantity=1000;
			this->comp_revenue=1000;
			this->comp_import_raw_diamonds=1000;
			this->comp_export_diamonds=10000;
			strcpy(this->comp_ceo , "xyz");
			
			cout<<"comp_id "<< this->comp_id<<endl;
			cout<<"comp_name"<<this->comp_name<<endl;
			cout<<"comp_staff_quantity"<<this->comp_staff_quantity<<endl;
			cout<<"comp_revenue"<<this->comp_revenue<<endl;
			cout<<"comp_export_diamonds "<<this->comp_import_raw_diamonds<<endl;
			cout<<"comp_ceo"<<this->comp_ceo<<endl;
		}
	
};
int main()
{
	
	compny c1;
	return 0;
}


