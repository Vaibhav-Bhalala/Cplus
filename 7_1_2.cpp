/*2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes
*/
#include<iostream>
using namespace std;

class cricket{
	public :
		int a,b;
		public :
			void gettotalovers(){
				cout << "Enter T20 match overs : ";
				cin >> a;
				cout << "Enter Test match overs : ";
				cin >> b;
				cout << "Cricket is very popular game in india." << endl;
			}
};

class t20match : public cricket
{	
	public :
		void gettotalovers(){
			
			cout << "T20 match overs is : " << a << endl;
		}
};

class testmatch : public t20match
{	
	public :
		void gettotalovers(){
			cout << "Test Match Per Day Overs is : " << b << endl;
		}
};

main(){
	
	testmatch t2;
	
	t2.cricket::gettotalovers();
	t2.t20match::gettotalovers();
	t2.gettotalovers();
}
