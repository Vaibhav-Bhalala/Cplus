/*2) WAP to illustrate the use of access modifiers in inheritence.*/

#include<iostream>
using namespace std;

class A{
	public :
		virtual void input() = 0;
};

class B : public A
{
	string n;
	public :
		void input()
		{
			cout<<"Enter your Email :- ";
			cin>>n;
		}
		void output()
		{
			cout<<"Your E-Mail is :- "<<n;
		}
};

main()
{
	B b1;
	b1.input();
	b1.output();
}

