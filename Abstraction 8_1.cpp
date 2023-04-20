/*1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.
- Class Admin -> Class Manager
- Class Manager -> Class Employee
- Class Admin has following members:
- company_name
- manager_salary
- employee_salary
- total_staff
- total_annual_revenue
- can_terminate
- use all attributes accessibility in parent class and
child class properly.
- override a method myAccess() in both child
classes to display all parent class’s members value
accordingly.
*/

#include<iostream>
using namespace std;

class Admin{
	private :	
	
	int total_annual_revenue,total_staff;
	string company_name,can_terminate;
		public :
			void input(){
				
				cout << "Enter Total Annual Revenue : ";
				cin >> total_annual_revenue;
				cout << "Enter Total Staff : ";
				cin >> total_staff;
				cout << "Enter Company Name : ";
				cin >> company_name;
				cout << "Can Terminate Or Not : ";
				cin >> can_terminate;
			}
			void myAccess(){
				
				cout << "The Total Annual Revenue is : " << total_annual_revenue << endl;
				cout << "The Total Staff is : " << total_staff << endl;
				cout << "The Company Name is : " << company_name << endl;
				cout << "Can Terminate or Not : " << can_terminate << endl;
			}
};
class Manager : private Admin
{	
	public :
		int manager_salary;
		public :
			void input(){
				cout << "Enter Manager Salary : ";
				cin >> manager_salary;
			}
			void myAccess(){
				cout << "The Manager Salary Is : " << manager_salary << endl;
			}
	
};
class Employee : public Manager
{	
	public :
		int employee_salary;
	public :
		void input(){
			cout << "Enter the Employee Salary : ";
			cin >> employee_salary;
		}
		void myAccess(){
			cout << "The Employee Salary is : " << employee_salary << endl;
		}
};
main(){
	Employee e1;
	
	e1.Admin::input();
	e1.Manager::input();
	e1.input();
	
	cout<<endl<<endl;
	
	e1.Admin::myAccess();
	e1.Manager::myAccess();
	e1.myAccess();
}
