/*1.WAP to find factorial of all elements from given array
using inline function.*/
#include<iostream>
using namespace std;

inline fact(int a){
	
	int fact=1;
	
	while(a>=1)
	{
		fact=fact*a;
		a--;
	}
	
	return fact;
}
main(){
	int n,i,a[n];
	
	cout<<"Enter the size of array : ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cout<<"Enter the elements : ";
		cin>>a[i];
	}
	
	cout<<"Factorial is : ";
	
	for(i=0;i<n;i++)
	{
		cout<<fact(a[i])<<" ";
	}
}
