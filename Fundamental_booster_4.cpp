//4.. WAP to check if a given character is vowel or consonant.
#include<iostream>
using namespace std;

main(){
	char x;
	
	cout<<"Enter X : ";
	cin>>x;
	
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	{
		cout<<"Vowel";
	}
	else if(x=='A'||x=='E'||x=='I'||x=='O'||x=='U')
	{
		cout<<"Vowel";
	}
	else
	{
		cout<<"Consonant";
	}
}
