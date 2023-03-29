//6. WAP to generate cube of given 5 numbers and make an array of that generated cubes.
#include<iostream>
using namespace std;

main(){
	
	int n,i;
	
	cout<<"Enter N : ";
	cin>>n;
	
	int a[n],b[n];
	
	for(i=0;i<n;i++)
	{
		cout<<"a[i] : ";
		cin>>a[i];
		b[i]=a[i]*a[i]*a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<"b[i] : "<<b[i]<<"\n";
	}
}
