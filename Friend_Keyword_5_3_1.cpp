/*1. WAP to create a friend function for two different classes
which performs addition of two times in format of
HH:MM:SS.
*/
#include<iostream>

using namespace std;

class MM;
class SS;
class HH{
	int a;
	public :
		void input(){
			cout<<"Enter the Hour : ";
			cin>>a;
		}
		friend void addition(HH,MM,SS);
		
};
class MM{
	int b;
	public :
		void input(){
			cout<<"Enter the Minute : ";
			cin>>b;
		}
		friend void addition(HH,MM,SS);
};
class SS{
	int c;
	public :
		void input(){
			cout<<"Enter the Seconds : ";
			cin>>c;
		}
		friend void addition(HH,MM,SS);
};
void addition(HH x,MM y,SS z){

	int H,M,S;
	
	H=x.a;
	M=y.b;
	S=z.c;
	
	while(S>=60)
	{
		S-=60;
		M++;
	}
	while(M>=60)
	{
		M-=60;
		H++;
	}
	cout<<+"HH:MM:SS: "<<H<<":"<<M<<":"<<S;
}

main(){
	HH x;
	MM y;
	SS z;
	x.input();
	y.input();
	z.input();
	addition(x,y,z);
}
