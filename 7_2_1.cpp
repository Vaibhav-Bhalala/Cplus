/*1. WAP to overload < operator to find which object
contains higher value from given 2 numbers.
*/
#include<iostream>
using namespace std;

class A{
	int a,b,c;
	public :
		void input(){
			cout << "Enter a : ";
			cin >> a;
		}
		void input1(){
			cout << "Enter b : ";
			cin >> b;
		}
		A operator < (A a2){
			A i;
			
			if(a<a2.b)
			{
				cout << "B is Bigger then A.";
			}
			else
			{
				cout << "A is Bigger then B.";
			}
			return i;
		}
		
};

main(){
	
	A a1;
	a1.input();
	A a2;
	a2.input1();
	A a3;
	a3=a1<a2;
	
}
