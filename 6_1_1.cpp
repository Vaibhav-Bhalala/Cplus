/*1. WAP to find sum of all three number’s cubes by
implementing single level inheritance: Class X->Class Y
- Class X has following members: a, b & c attributes in
integer data type
- Class Y has following members: setData() and
getData() methods */
#include<iostream>
using namespace std;

class X{

	protected :
		int a,b,c;
};

class Y : public X
{
	public :
		setdata(){
			cout << "Enter A : ";
			cin >> a;
			cout << "Enter B : ";
			cin >> b;
			cout << "Enter C : ";
			cin >> c;
		}
		getdata(){
			cout << "The Cube of "<< a << " is : " << a*a*a << endl ;
			cout << "The Cube of "<< b << " is : " << b*b*b << endl ;
			cout << "The Cube of "<< c << " is : " << c*c*c << endl ;
			 
			cout << "The Sum of All Three Cubes is : " << (a*a*a)+(b*b*b)+(c*c*c);
		}
	
};

main (){
	Y a;
	a.setdata();
	a.getdata();
}
