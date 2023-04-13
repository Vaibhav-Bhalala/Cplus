//6. WAP to read and print employee information with use of multilevel inheritance. (as like in below image)
#include<iostream>
using namespace std;

class A{
	public :
	int id,salary,experience;
	string name,role,c_name,address,email,contact;
	public :
		void setA(){
			cout << "Enter the ID : ";
			cin >> id;
			cout << "Enter the Name : ";
			cin >> name;
			cout << "Enter the Role : ";
			cin >> role;
		}
};

class B : public A
{
	public :
		void setB(){
			cout << "Enter the Salary : ";
			cin >> salary;
			cout << "Enter the Experience : ";
			cin >> experience;		
		}
};

class C : public B
{
	public :
		void setC(){
			cout << "Enter the Company Name : ";
			cin >> c_name;
			cout << "Enter the Address : ";
			cin >> address;
		}
		void getC(){
			cout << "The Name is : " << name << endl;
			cout << "The Role is : " << role << endl;
			cout << "The Salary is : " << salary << endl;
		}
		
};

class D : public C
{
	public :
		void setD(){
			cout << "Enter The Email : ";
			cin >> email;
			cout << "Enter the Contact : ";
			cin >> contact;
		}
		void getD(){
			cout << "The ID is : " << id << endl;
			cout << "The Name is : " << name << endl;
			cout << "The Role is : " << role << endl;
			cout << "The Salary is : " << salary << endl;
			cout << "The Experience is : " << experience << endl;
			cout << "The Company Name is : " << c_name << endl;
			cout << "The Address is : " << address << endl;
			cout << "The Email is : " << email << endl;
			cout << "The Contact is : " << contact << endl;
		}
};

main(){
	D d1;
	d1.setA();
	d1.setB();
	d1.setC();
	cout << endl;
	d1.getC();
	cout << endl;
	d1.setD();
	cout << endl;
	d1.getD();
}
