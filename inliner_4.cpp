//4. WAP to illustrate the use of inline function by creating a function which prints a multiplication table of given number.
#include<iostream>
using namespace std;

inline multi(int a)
{
	int i;
	
	for(i=1;i<=10;i++)
	{
		cout<< a << "X" << i << "=" << a*i << endl;
	}
}

int main()
{
	int a;
	cout << "Enter your number : ";
	cin >> a;
	multi(a);
}


