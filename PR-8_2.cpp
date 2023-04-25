//2. Create hybrid inheritance and remove ambiguity permanently.
#include<iostream>
using namespace std;

class X{
	public :
		virtual void input()=0;
		virtual void output()=0;
};

class A : public X
{	public :
	int a;
	public :
		void input(){
			cout << "Enter a : ";
			cin >> a;
		}
	
};
class B : public X
{	public :
	int b;
	public :
		void input(){
			cout << "Enter b : ";
			cin >> b;
		}
};
class C : public X 
{	public :
	int c;
	public :
		void input(){
			cout << "Enter c : ";
			cin >> c;
		}	
};
class sum : public A,public B,public C,public X
{	
	public :
		void output(){
			cout << "The Sum Of A,B and C is : " << a+b+c;
		}
};

main(){
	X *x1=new A();
	x1->input();
	
	X *x2=new B();
	x2->input();
	
	X *x3=new c();
	x3->input();
	
	X *x4=new sum();
	x4->output();
}
