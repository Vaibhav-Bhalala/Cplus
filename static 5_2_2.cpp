/*2. WAP to get and display N numbers Employees
information using encapsulation with array of objects
member by including below mentioned attributes:
- emp_id
- emp_name
- emp_role
- emp_age
- emp_salary
- emp_experience
- emp_city
- emp_company_name
*/
#include<iostream>
using namespace std;

class employee{
	
	int emp_id,emp_age,emp_salary,emp_exp;
	string emp_name,emp_city,emp_role;
	static string emp_company_name;
	
	public :
		
		void setter(){
			cout<<"Enter ID of Employee : ";
			cin>>emp_id;
			cout<<"Enter Name of Employee : ";
			cin>>emp_name;
			cout<<"Enter Role of Employee : ";
			cin>>emp_role;
			cout<<"Enter Age of Employee : ";
			cin>>emp_age;
			cout<<"Enter salary of Employee : ";
			cin>>emp_salary;
			cout<<"Enter Experience of Employee : ";
			cin>>emp_exp;
			cout<<"Enter City of Employee : ";
			cin>>emp_city;
			cout<<"********************************"<<endl;
			
		}
		void getter(){
			cout<<"The ID of Employee is : "<<emp_id<<endl;
			cout<<"The Name of Employee is : "<<emp_name<<endl;
			cout<<"The Role of Employee is : "<<emp_role<<endl;
			cout<<"The Age of Employee is : "<<emp_age<<endl;
			cout<<"The salary of Employee is : "<<emp_salary<<endl;
			cout<<"The Experience of Employee is : "<<emp_exp<<endl;
			cout<<"The City of Employee is : "<<emp_city<<endl;
			cout<<"The Company Name of Employee is : "<<emp_company_name<<endl;
			cout<<"*********************************"<<endl;
		}
};
string employee :: emp_company_name = "RND Infotech";

main(){
		
	int n,i;
	
	cout<<"Enter Number Of Employee : ";
	cin>>n;
	
	employee e[n];
	
	for(i=0;i<n;i++)
	{
		e[i].setter();
		e[i].getter();
	}
	
}
