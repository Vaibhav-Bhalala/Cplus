/*1. WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity
*/
#include<iostream>

using namespace std;

class hotels{
	
	int hotel_id,hotel_establish_year,hotel_staff_quantity,hotel_room_quantity;
	string hotel_name,hotel_location;
	static string hotel_type,hotel_rating;
	public :
		
		void setter(){
			cout<<"Enter Hotel Name : ";
			cin>>hotel_name;
			cout<<"Enter Hotel ID : ";
			cin>>hotel_id;
			cout<<"Enter Hotel Location : ";
			cin>>hotel_location;
			cout<<"Enter Hotel Establish Year : ";
			cin>>hotel_establish_year;
			cout<<"Enter Hotel Staff Quantity: ";
			cin>>hotel_staff_quantity;
			cout<<"Enter Hotel Room Quantity : ";
			cin>>hotel_room_quantity;
			cout<<"***************************************"<<endl;
		}
		
		void getter(){
			cout<<"The Hotel Name is : "<<hotel_name<<endl;
			cout<<"The Hotel ID is : "<<hotel_id<<endl;
			cout<<"The Hotel Location is : "<<hotel_location<<endl;
			cout<<"The Hotel Establish Year is : "<<hotel_establish_year<<endl;
			cout<<"The Hotel Staff Quantity is :  "<<hotel_staff_quantity<<endl;
			cout<<"The Hotel Room Quantity is : "<<hotel_room_quantity<<endl;
			cout<<"The Hotel Type is : "<<hotel_type<<endl;
			cout<<"The Hotel Rating is : "<<hotel_rating<<endl;
			cout<<"***************************************"<<endl;	
		}
		
		
};
string hotels :: hotel_type = "Motel";
string hotels :: hotel_rating = "3 star";

main(){
	
	int n,i;
	
	cout<<"Enter Number Of Hotels : ";
	cin>>n;
	
	hotels h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setter();
		h[i].getter();
	}
}
