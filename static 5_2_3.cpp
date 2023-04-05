/*3. WAP to get and display N numbers Students
information using encapsulation with array of objects
member by including below mentioned attributes:
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

class student{
	
	int stu_id,stu_age;
	string stu_name,stu_email,stu_city;
	static string stu_college,stu_course;
	
	public :
		
		void setter(){
			cout<<"Enter ID of Student : ";
			cin>>stu_id;
			cout<<"Enter Name of Student : ";
			cin>>stu_name;
			cout<<"Enter Age of Student : ";
			cin>>stu_age;
			cout<<"Enter Email of Student : ";
			cin>>stu_email;
			cout<<"Enter City of Student : ";
			cin>>stu_city;
			cout<<"********************************"<<endl;
			
		}
		void getter(){
			cout<<"The ID of Student is : "<<stu_id<<endl;
			cout<<"The Name of Student is : "<<stu_name<<endl;
			cout<<"The Age of Student is : "<<stu_age<<endl;
			cout<<"The Email of Student is : "<<stu_email<<endl;
			cout<<"The College of Student is : "<<stu_college<<endl;
			cout<<"The City of Student is : "<<stu_city<<endl;
			cout<<"The Course of Student is : "<<stu_course<<endl;
			cout<<"*********************************"<<endl;
		}
};
string student :: stu_college = "Bhagwan Mahavir College";
string student :: stu_course = "B.C.A.";

main(){
		
	int n,i;
	
	cout<<"Enter Number Of Student : ";
	cin>>n;
	
	student s[n];
	
	for(i=0;i<n;i++)
	{
		s[i].setter();
		s[i].getter();
	}
	
}
