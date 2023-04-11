//5. WAP which illustrates the use of public and private access modifiers.
//private
#include<iostream>
using namespace std;

class D {
	
	int a,b;
	public :
	input()
	{
		cout << "Enter A : ";
		cin >> a;
		cout << "Enter B : ";
		cin >> b;
	}
	sum();
	
};
D::sum(){
		
		cout << "The Sum of A and B is : "<<a+b;
	}
int main()
{
	D d1;
	d1.input();
	d1.sum();
	
}

