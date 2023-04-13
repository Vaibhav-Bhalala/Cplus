/*1. WAP that defines a shape class with a constructor that gives value to width and height. The define two sub-classes triangle and rectangle, that calculate the 
area of the shape area (). In the main, define two variables a triangle and a rectangle and then call the area() function in this two varibles.*/
#include<iostream>
using namespace std;

class shape{
	protected :
		int  width,height;
	public :
		shape()
		{
			cout << "Enter width:";
			cin >> width;
			cout << "Enter height :";
			cin >> height;
		}
};
class triangle : public shape {
	public :
		void area()
		{
			cout << "Triangle area : " << (width * height) / 2 << endl;
		}
				
	
};
class Rectangle : public shape {
	public :
		void area()
		{
			cout << "Rectangle area : " << width * height << endl;
		}	
};

int main()
{
	Rectangle r;
	r.area();
	triangle t;
	t.area();
}



