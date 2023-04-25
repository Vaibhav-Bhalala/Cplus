//1. WAP to create a class which illustrate the concept of handling all types of exceptions using general exception.
#include<iostream>
using namespace std;

class A{
	public :
	float a,b,div;
	public :
		void input(){
			cout << "Enter a : ";
			cin >> a;
			cout << "Enter b : ";
			cin >> b;
		}
		void output(){
			div=a/b;
			
			try{
				if(b!=0)
				{
					cout << "The division of " << a << " and " << b << " is : " << div << endl;
				}
				else
				{
					throw div;
				}
			}
			catch(...){
				
				cout << "The Numbers Of a and b cannot divide by Zero.";
			}
		}
};

main(){
	A a1;
	a1.input();
	a1.output();
	
}
