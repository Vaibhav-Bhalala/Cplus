//1.1 WAP to pass function as an argument to a function.
#include<iostream>
using namespace std;

int sum (int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		cout << "a[" << i << "] : ";
		cin >> a[i];
		sum += a[i];	
	}
	return sum;
}
void avg(int a,int n)
{
	cout << " average is : " << a/n ;  
}

int main()
{
	int n;
	
	cout<< "Enter n : ";
	cin>> n;
	
	int a[n];
	
	avg(sum(a,n),n);
}



