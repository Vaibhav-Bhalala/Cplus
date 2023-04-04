/*1. WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
*/
#include<iostream>
using namespace std;

class student {
	
	int stu_id,stu_age;
	string stu_name,stu_email,stu_course,stu_city,stu_college;
	
	public :
		
		setter(	int stu_id,int stu_age,string stu_name,string stu_email,string stu_course,string stu_city,string stu_college){
			
			this->stu_id=stu_id;
			this->stu_age=stu_age;
			this->stu_name=stu_name;
			this->stu_email=stu_email;
			this->stu_course=stu_course;
			this->stu_city=stu_city;
			this->stu_college=stu_college;
			
		}
		
		getter(){
			
			cout<<"The ID of Student : "<<stu_id<<endl;
			cout<<"The Name of Student : "<<stu_name<<endl;
			cout<<"The Age of Student : "<<stu_age<<endl;
			cout<<"The Course of Student : "<<stu_course<<endl;
			cout<<"The Email of Student : "<<stu_email<<endl;
			cout<<"The City of Student : "<<stu_city<<endl;
			cout<<"The College of Student : "<<stu_college<<endl;
		}
};

main(){
	
	int stu_id,stu_age;
	string stu_name,stu_email,stu_course,stu_city,stu_college;
	
	int i;
	
	student s[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter Id of Student : ";
		cin>>stu_id;
		cout<<"Enter Name of Student : ";
		cin>>stu_name;
		cout<<"Enter Age of Student : ";
		cin>>stu_age;
		cout<<"Enter Course of Student : ";
		cin>>stu_course;
		cout<<"Enter Email of Student : ";
		cin>>stu_email;
		cout<<"Enter City of Student : ";
		cin>>stu_city;
		cout<<"Enter college of Student : ";
		cin>>stu_college;
		
		s[i].setter(stu_id,stu_age,stu_name,stu_email,stu_course,stu_city,stu_college);
	}
	
	for(i=0;i<5;i++)
	{
		s[i].getter();
	}
}
