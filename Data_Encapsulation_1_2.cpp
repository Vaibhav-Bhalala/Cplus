/*2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)
*/
#include<iostream>
using namespace std;

class customer {
	
	
	int c_id,c_age,c_mobile_number,c_simcard_validity;
	string c_name,c_telecom_brand_name,c_city;
	
	public :
		
		setter(	int c_id,int c_age,int c_mobile_numeber,int c_simcard_validity,string c_name,string c_telecom_brand_name,string c_city){
			
			this->c_id=c_id;
			this->c_age=c_age;
			this->c_name=c_name;
			this->c_mobile_number=c_mobile_number;
			this->c_simcard_validity=c_simcard_validity;
			this->c_telecom_brand_name=c_telecom_brand_name;
			this->c_city=c_city;
			
		}
		
		getter(){
			
			cout<<"The ID of Customer : "<<c_id<<endl;
			cout<<"The Age of Customer : "<<c_age<<endl;
			cout<<"The Mobile number of Customer : "<<c_mobile_number<<endl;
			cout<<"The Simcard validity of Customer : "<<c_simcard_validity<<endl;
			cout<<"The Name Of Customer : "<<c_name<<endl;
			cout<<"The Telecom brand Name of Customer : "<<c_telecom_brand_name<<endl;
			cout<<"The City of Customer : "<<c_city<<endl;
		}
};

main(){
	
	int c_id,c_age,c_mobile_number,c_simcard_validity;
	string c_name,c_telecom_brand_name,c_city;
	
	int i;
	
	customer c[5];
	
	for(i=0;i<5;i++)
	{
		cout<<"Enter Id of customer : ";
		cin>>c_id;
		cout<<"Enter Age of customer : ";
		cin>>c_age;
		cout<<"Enter Mobile Number of Customer : ";
		cin>>c_mobile_number;
		cout<<"Enter Simcard Validity Of Customer : ";
		cin>>c_simcard_validity;
		cout<<"Enter Name of Customer : ";
		cin>>c_name;
		cout<<"Enter Telecom Brand Name of customer: ";
		cin>>c_telecom_brand_name;
		cout<<"Enter City of Customer : ";
		cin>>c_city;
		
		c[i].setter(c_id,c_age,c_mobile_number,c_simcard_validity,c_name,c_telecom_brand_name,c_city);
	}
	
	for(i=0;i<5;i++)
	{
		c[i].getter();
	}
}
