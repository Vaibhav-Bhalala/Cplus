/*3) WAP to demonstrate usage of Virtual Function.*/

#include<iostream>
using namespace std;

class rectangle{
	public :
		virtual void calculate()=0;
};

class shape : public rectangle
{
	int r_h,r_w;
	public :
		void calculate()
		{
			cout<<"Enter height of rectangle :- ";
			cin>>r_h;
			cout<<"Enter width of rectangle :- ";
			cin>>r_w;
			cout<<"Area of rectangle is :- "<<r_h*r_w<<endl<<endl;
			
		}
};

main()
{
	rectangle *r1=new shape();
	r1->calculate();
}
