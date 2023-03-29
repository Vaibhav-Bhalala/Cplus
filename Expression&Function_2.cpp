/*2.WAP to create a basic calculator with +, -, *, /and %
operations using switch case and UDF. Add never
ending functionality using loop.*/
#include<iostream>
using namespace std;

void sum(){
	int a,b,sum;
	
	cout<<"enter A: ";
	cin>>a;
	cout<<"enter B: ";
	cin>>b;
	
	sum=a+b;
	cout<<"the sum is : "<<sum;	
}

void sub(){
	int a,b,sub;
	
	cout<<"enter A: ";
	cin>>a;
	cout<<"enter B: ";
	cin>>b;
	
	sub=a-b;
	cout<<"the sub is : "<<sub;	
}

void multi(){
	int a,b,multi;
	
	cout<<"enter A: ";
	cin>>a;
	cout<<"enter B: ";
	cin>>b;
	
	multi=a*b;
	cout<<"the multiplication is : "<<multi;	
}

void div(){
	int a,b,div;
	
	cout<<"enter A: ";
	cin>>a;
	cout<<"enter B: ";
	cin>>b;
	
	div=a/b;
	cout<<"the division is : "<<div;	
}

void mod(){
	int a,b,mod;
	
	cout<<"enter A: ";
	cin>>a;
	cout<<"enter B: ";
	cin>>b;
	
	mod=a%b;
	cout<<"the modulo is : "<<mod;	
}

main()
{
	int n=1;
	
	while(n!=0)
	{
		cout<<"\npress 1 for sum\n";
		cout<<"press 2 for sub\n";
		cout<<"press 3 for multiplication\n";
		cout<<"press 4 for division\n";
		cout<<"press 5 for modulo\n";
		
		cout<<"enter your choice : ";
		cin>>n;
		
		switch(n)
		{
			case 1 :
				sum();
				break;
				
			case 2 :
				sub();
				break;
				
			case 3 :
				multi();
				break;
				
			case 4 :
				div();
				break;
				
			case 5 :
				mod();
				break;
				
			default :
				cout<<"Invalid Choice.";
				break;				
		}
		
	}
	
	
}

