/*1. WAP to make Railway Reservation System.
Requirements:
(A) User Input Train Number , Train Name , Source , Destination , Train Time.
(B) Display Record By Search Train Number.
(C) Minimum 3 Input Train Record.
*/
#include<iostream>
using namespace std;

class Railway{
		int t_num;
		string t_name,t_Source,t_Destination,t_time;
		public :
		
	   void setR()
		{
			cout << "Enter Train Number : ";
			cin >> t_num;
			cout << "Enter Train Name : ";
			cin >> t_name;
			cout << "Enter Source : ";
			cin >> t_Source;
			cout << "Enter Destination : ";
			cin >> t_Destination;
			cout << "Enter Train time : ";
			cin >> t_time;
			cout << "*************************************"<<endl;
		}
		void getR()
		{
			cout << "Train Number : " << t_num << endl;
			cout << "Train Name : " << t_name << endl;
			cout << "Source : " << t_Source << endl;
			cout << "Destination : " << t_Destination << endl;
			cout << "Train time : " << t_time << endl;
			cout << "************************************"<<endl; 
		}	
		friend void display(Railway []);	
};
void display(Railway r[])
{
	int n;
	
	cout << "Enter Train Number : ";
	cin >> n;
	
	for(int i=0;i<3;i++)
	{
		if(r[i].t_num==n)
		{
			r[i].getR();
		}
	}
}

int main()
{
	Railway r[3];
	
	for(int i=0;i<3;i++)
	{
		r[i].setR();
	} 
	
	for(int i=0;i<3;i++) 
	{
		r[i].getR();
	}
	
	display(r);
}
