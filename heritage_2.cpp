/*2. WAP with a mother class and an  daugther class.Both of them should have a method void display ()that prints a message (different for mother and daugther). In 
the main define a daugther and call the display() method on it.*/
#include<iostream>
using namespace std;

class mother {
	public :
		void display()
		{
			cout << "MOTHER." << endl;	
		}
		
};
class daugther : public mother
{
	public :
		void display()
		{
			cout << "DAUGTHER." << endl;	
		}
		
};

main()
{
	daugther d;
	d.display();
	d.mother::display();
}
