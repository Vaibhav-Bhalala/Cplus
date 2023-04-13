/*4. WAP to read and print employee information using multiple inheritance.*/
#include<iostream>
using namespace std;

class A{
	protected :
		int id;
		string name;
	public :
		void setA(){
			cout << "Enter id : ";
			cin >> id;
			cout << "Enter Name : ";
			cin >> name;
		}
};
class B{
	protected :
		string contact;
	public :
		void setB(){
			cout << "Enter contact : ";
			cin >> contact;
		}
};
class C : public A,public B
{
	public :
		void getc()
		{
			cout << "Name : " << name << endl;
			cout << "ID : " << id << endl;
			cout << "contact : "<< contact << endl;
		}
};

main()
{
	C c1;
	c1.setA();
	c1.setB();
	c1.getc();
}
