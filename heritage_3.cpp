/*3. WAP with a mother class animal. Inside it define a name and an age variables, and set_value() function. Then create two bases class Zebra and Dolphin which 
write a message telling the age, the name and giving some extra information (e.g. place of origin).*/
#include<iostream>
using namespace std;

class animal{
	protected:
		int age;
		string name;
	public :
		void setan()
		{
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Name : ";
			cin >> name;
		}
};
class zebra : public animal{
	protected:
		string place;
	public :
		void setze()
		{
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter place : ";
			cin >> place;
		}
		void getze()
		{
			cout << "Name :" << name << endl;
			cout << "Age  :" << age  << endl;
			cout << "Place:" << place << endl;
		}

	
};
class dolphin : public animal{
	protected:
		string col;
	public :
		void setdo()
		{
			cout << "Enter age : ";
			cin >> age;
			cout << "Enter Name : ";
			cin >> name;
			cout << "Enter colour : ";
			cin >> col;
		}
		void getdo()
		{
			cout << "Name  :" << name << endl;
			cout << "Age   :" << age  << endl;
			cout << "colour:" << col << endl;
		}	
};
main()
{
	zebra z;
	z.setan();
	z.setze();
	z.getze();
	
	cout << endl;
	
	dolphin d;
	d.setan();
	d.setdo();
	d.getdo();
}
