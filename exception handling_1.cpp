/*1. WAP to implement exception handling mechanism for
different types of scenarios:
- a number cannot be divide by zero
- a person cannot be able to vote if his/her age is less
than 18
- a password cannot be validate if it doesn’t contains
an uppercase letter
*/
#include<iostream>
using namespace std;

main(){
	float a,b,div;
	int age,flag=0;
	string pass;
	
	cout << "\nDivision" << endl;
	
	cout << "\nEnter the Value of A : ";
	cin >> a;
	cout << "Enter the Value of B : ";
	cin >> b;
	div=a/b;

    try {
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
	
	cout << "\n\nEligible of voting" << endl;
	
	cout << "\nEnter the Age : ";
	cin >> age;
	
	try{
		if(age>=18)
		{
			cout << "You are Eligibile For Voting because Your Age Greater then 18." << endl;
		}
		else
		{
			throw age;
		}
	}
	catch(...){
		cout << "You are not eligible For Voting." << endl;
	}
	
	cout << "\n\nPassword verify";
	
	cout << "\nEnter the Password : ";
	cin >> pass;
	
	for(int i=0;pass[i]!=NULL;i++)
	{
		if(pass[i]>=65 && pass[i]<=90)
		{
			flag++;
		}
	}
	try{
		if(flag>=1)
		{
			cout << "The Password is valid and it contains atleast one Uppercase letter." << endl;
		}
		else
		{
			throw flag;
		}
		
	}
	
	catch(...){
			cout << "Password is Not Valid because its must be contains atleast one uppercase letter.";
		}
	
	
}
