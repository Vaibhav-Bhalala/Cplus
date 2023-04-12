/*1. WAP to print rate of interests of different banks using
hierarchical inheritance:
- Class RBI -> Class SBI
- Class RBI -> Class BOB
- Class RBI -> Class ICICI
- inherit rate attribute and getROI() method in all child
classes
*/
#include<iostream>
using namespace std;

class RBI{
	public :
		float rate=7.90;
		
};

class SBI : public RBI
{
	public :
		void getROI(){
			cout << "Rate of Interest of SBI is : " << rate << endl;			
		}
};

class BOB : public RBI
{
	public :
		void getROI(){
			cout << "Rate of Interest of BOB is : " << rate << endl;			
		}
};

class ICICI : public RBI
{
	public :
		void getROI(){
			cout << "Rate of Interest of ICICI is : " << rate << endl;			
		}
};

main(){
	SBI s;
	BOB b;
	ICICI i;
	
	s.getROI();
	b.getROI();
	i.getROI();
	

}
