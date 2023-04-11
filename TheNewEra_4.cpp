//4. WAP to create a class which Read and Print House details along with Room details.
#include<iostream>
using namespace std;

class detail {
	public :
	int house_no,house_size,house_member;
	string house_type,house_address;
	
	void input()
	{
		cout << "Enter The House Number : ";
		cin >> house_no;
		cout << "Enter the Member of House : ";
		cin >> house_member;
		cout << "Enter The size in sq. mtr of house : ";
		cin >> house_size;
		cout << "Enter The type of house : ";
		cin >> house_type;
		cout << "Enter the Address of house : ";
		cin >> house_address;

	}
	void output()
	{
		cout << "The House Number is : " << house_no << endl;
		cout << "The Member Of house is : " << house_member << endl;
		cout << "The size of house is : " << house_size << endl;
		cout << "The Type of house is : " << house_type << endl;
		cout << "The Address of the house is : " << house_address << endl;
	}
};
int main()
{
	detail d;
	d.input();
	d.output();
}

