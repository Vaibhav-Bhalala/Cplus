//1.WAP to check given string is numeric or not.
#include<iostream>
#include<string.h>
using namespace std;

main(){
	
	char a[20];
	int i,c=0;
	
	gets(a);
	
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			c++;
		}
	}
	if(c!=0)
	{
		cout<<"Numeric";
	}
	else
	{
		cout<<"Not Numeric";
		
	}
}
