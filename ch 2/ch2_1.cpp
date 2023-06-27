#include<iostream>
using namespace std;
class student
{
  private:	
	int stu_id;
    char stu_name[100];
	int stu_age;
    char stu_course[100];
    char stu_email[100];
	char stu_city[100];
	char stu_college[100];
	
	public:
	 void setdata()
	 {
		 	cout<<"enter id:";
		 	cin>>stu_id;
		 	
		 	cout<<"enter name:";
		 	cin>>stu_name;
		 	
		 	cout<<"enter age:";
		 	cin>>stu_age;
		 	
		 	cout<<"enter course:";
		 	cin>>stu_course;
		 	
		 	cout<<"enter email:";
		 	cin>>stu_email;
		 	
		 	cout<<"enter city:";
		 	cin>>stu_city;
		 	
		 	cout<<"enter college:";
		 	cin>>stu_college;
		
	 }
		
		void getdata()
		{
			cout<<"id: "<<stu_id
				<<"name: "<<stu_name
				<<"age: "<<stu_age
				<<"course: "<<stu_course
				<<"email: "<<stu_email
				<<"city: "<<stu_city
				<<"college: "<<stu_college<<endl;
		}	 	
	
};
int main()
{
	student stu1, stu2, stu3;
	
	stu1.setdata();
	stu2.setdata();
	stu3.setdata();
	
	stu1.getdata();
	stu2.getdata();
	stu3.getdata();

	return 0;
	
}

