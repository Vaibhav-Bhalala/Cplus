//3.WAP to make Bank Management System.
#include<iostream>
using namespace std;

class bms{

	int z=200000;
	int c;
	int a;
	string d;
	int h,i,j;
	string e,f,g="B";
		
	public :
		bms(){
			cout<< "\t\t:- Bank Managment System -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl ;
			cout<<endl;
			cout<< "\t\t:- Design And Program by -: "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t      VAIBHAV BHALALA  " <<endl;
			cout<<endl;
			cout<< "\t\t        :- Trainer -:       "<< endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<"\t\t\tSimran Ma'am          "<<endl;
			cout<<endl;
			cout<<endl;
		}
		void getB()
		{
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<" :- Press A to login as administrator or B to login as  staff"<<endl;
			cout<<"------------------------------------------------------------ "<< endl;
			cout<<endl;
			cout<< "press any num to next : ";
			cin >> g;
			
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t\t\t:- welcome to staff -:" <<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << "\t   Enter The Name Of Staff \t\t:" ;
			cin >> e;
			cout << "\t   Enter The Amount Number Of Staff \t:" ;
			cin >> c;
			cout << "\t   Enter The Phone Number Of Staff \t:" ;
			cin>> d;
			cout << "\t   Enter The Email Of Staff \t\t:";
			cin >>f;
		
			cout <<"------------------------------------------------------------" <<endl ;
			cout << "\t Name \t\t:" <<e << endl;
			cout << "\t Amount Number\t:"<<c <<endl;
			cout << "\t Phone Number \t:"<<d <<endl;
			cout << "\t Email \t\t:"<<f<<endl;
			cout <<"------------------------------------------------------------" <<endl ;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "\t\tPress [1] To withdraw Money" << endl;
			cout << "\t\tPress [2] To Transfer Money" << endl;
			cout << "\t\tPress [3] To deposite Money" << endl;
			cout << "\t\tPlese enter any number :- ";
			cin >> a;
				
				switch(a)
				{
					case 1: cout<<"------------------------------------------------------------" <<endl;
							cout<<"\t\tEnter amount to Withdraw : ";
							cin>>h;
							cout<<"------------------------------------------------------------" <<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\t\t\tYour Actual Amount Is : "<<z<<""<<endl<<endl;
							cout<<"\t\t\tCongrates Your Amount Has Withdraw Successfully "<<endl<<endl;
							cout<<"\t\t\tYour Accout Balance Is : "<<z-h;
							break;
							
					case 2: cout<<"------------------------------------------------------------" <<endl;
							cout<<"\t\tEnter amount to Transfer : ";
							cin>>i;
							cout<<"------------------------------------------------------------" <<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\t\t\tYour Actual Amount Is : "<<z<<""<<endl<<endl;
							cout<<"\t\t\tCongrates Your Amount Has Transfer Successfully "<<endl<<endl;
							cout<<"\t\t\tYour Accout Balance Is : "<<z-i;
							break;
							
					case 3: cout<<"------------------------------------------------------------" <<endl;
							cout<<"\t\tEnter amount to Deposite : ";
							cin>>j;
							cout<<"------------------------------------------------------------" <<endl;
							cout<<endl;
							cout<<endl;
							cout<<"\t\t\tYour Actual Amount Is : "<<z<<""<<endl<<endl;
							cout<<"\t\t\tCongrates Your Amount Has Transfer Successfully "<<endl<<endl;
							cout<<"\t\t\tYour Accout Balance Is : "<<z+j;
							break;	
							
					default:cout<<"Invalid choice";
		      				break;
					
				}
						
		}
};

int main(){
	bms b;
	string a;
	cout<< "press any num to next : ";
	cin >> a;
	b.getB();
	
	return 0;
	
}
