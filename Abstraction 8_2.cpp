/*1. WAP to perform some basic mathematical operations
using Abstract class such like:
- area of circle
- area of triangle
- area of rectangle
- use one single pure virtual function named
calculate() to perform all above operations
*/
#include<iostream>
using namespace std;

class circle{
	public :
		virtual void calculate()=0;
};

class triangle{
	public :
		virtual void calculate()=0;
};

class rectangle{
	public :
		virtual void calculate()=0;
};

class shape : public circle , public triangle , public rectangle{
	public :
	int c_r,t_h,t_b,r_w,r_h;
	public :
		void calculate(){
			cout << "\n Circle " << endl;
			cout << "\nEnter Radious of Circle : ";
			cin >> c_r;
			cout << "\nArea of circle is : " << 3.1415*c_r*c_r << endl;
			cout << "\n Triangle " << endl;
			cout << "\nEnter Height of Triangle : ";
			cin >> t_h;
			cout << "Enter Base of Triangle : ";
			cin >> t_b;
			cout << "\nArea of Triangle is : " << 0.5*t_b*t_h << endl;
			cout << "\n Rectangle " << endl;
			cout << "\nEnter Width of Rectangle : ";
			cin >> r_w;
			cout << "Enter Height of Rectangle : ";
			cin >> r_h;
			cout << "\nArea of rectangle is : " << r_h*r_w << endl;
		}
		
};
main(){
	circle *c1=new shape();
	c1->calculate();
}
