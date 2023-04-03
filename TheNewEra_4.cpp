//4. WAP to create a class which Read and Print House details along with Room details.
#include<iostream>
using namespace std;

class detail {
	public :
	int House_no,House_member,Room_no,Room_member;
	
	input()
	{
		cout << "Enter The House Number : ";
		cin >> House_no;
		cout << "Enter the Member of House : ";
		cin >> House_member;
		cout << "Enter The Number of Rooms : ";
		cin >> Room_no;
		cout << "Enter The Member of Rooms : ";
		cin >> Room_member;
	}
	output()
	{
		cout << "The House Number is : " << House_no << endl;
		cout << "The Member Of house is : " << House_member << endl;
		cout << "The Numbers of Rooms is : " << Room_no << endl;
		cout << "The Members of Room is : " << Room_member << endl;
	}
};
int main()
{
	detail d;
	d.input();
	d.output();
}

