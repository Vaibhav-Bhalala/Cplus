/*1. WAP to create a Message class with a constructor that takes a single string with a default value. Create a private member string, and in the constructor simply
 assign the argument string to your internal string. Create two overloaded member functions called print( ): one that takes no arguments and simply prints the message
  stored in the object, and one that takes a string argument, which it prints in addition to the internal message.
*/
#include<iostream>
using namespace std;

class M{
	
	string a="hello c++.";
	public :
		
		M(){
			
			cout << a;
		}
		
		M(string b){
			
			cout << b;
		}
};

main(){
	string b;
	
	cout << "Enter the string : ";
	cin >> b;
	M m1;
	cout << endl;
	M m2(b);
	
}
