/*4) WAP to create an Abstract Class Shape. 
 Make two sub-class Circle and Triangle which implements a method from Shape class called getArea().*/
 
#include<iostream>
using namespace std;

class Shape {
	public :
		virtual void getarea()=0;
};
class Circle : public Shape
{
	int r;
	public :
		void getarea()
		{
			cout<<"Enter radius of circle : ";
			cin>>r;
			cout<<"Area of circle is :- "<<3.14*r*r<<endl<<endl;
		}
};
class Triangle : public Shape
{
	int h,b;
	public :
		void getarea()
		{
			cout<<"Enter height of triangle :- ";
			cin>>h;
			cout<<"Enter base of triangle :- ";
			cin>>b;
			cout<<"Area of triangle is :- "<<h*b/2<<endl<<endl;
		}
};

main()
{
	Circle c;
	cout<<"Area of circle"<<endl;
	c.getarea();
	Triangle t;
	cout<<"Area of triangle"<<endl;
	t.getarea();
	
}
