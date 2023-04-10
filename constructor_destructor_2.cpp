/*2. WAP to get and display N numbers of Fast Food cafe
information using encapsulation and use of default
constructor by including below mentioned attributes:
- cafe_id
- cafe_name
- cafe_type (like rooftop or normal)
- cafe_rating (like 1 Star, 2 Start, ..., 5 Star)
- cafe_location (city name)
- cafe_establish_year
- cafe_staff_quantity*/

#include<iostream>
using namespace std;

class ffc{
	
	int cafe_id;
	string cafe_name;
	string cafe_type;
	string cafe_rating;
	string cafe_location;
	int cafe_establish_year;
	int cafe_staff_quantity;
	
	public :
		ffc(int cafe_id,string cafe_name,string cafe_type,string cafe_rating,string cafe_location,int cafe_establish_year,int cafe_staff_quantity){
				this->cafe_id=cafe_id;
				this->cafe_name=cafe_name;
				this->cafe_type=cafe_type;
				this->cafe_rating=cafe_rating;
				this->cafe_location=cafe_location;
				this->cafe_establish_year=cafe_establish_year;
				this->cafe_staff_quantity=cafe_staff_quantity;
				output();
		} 
		
		void output(){
			cout<<"Cafe id :- "<<cafe_id<<endl;
			cout<<"Cafe name :- "<<cafe_name<<endl;
			cout<<"Cafe type :- "<<cafe_type<<endl;
			cout<<"Cafe rating :- "<<cafe_rating<<endl;
			cout<<"Cafe location :- "<<cafe_location<<endl;
			cout<<"Cafe establish year :- "<<cafe_establish_year<<endl;
			cout<<"Cafe staff quantity :- "<<cafe_staff_quantity<<endl;
		}
};

main(){
	int cafe_id;
	string cafe_name;
	string cafe_type;
	string cafe_rating;
	string cafe_location;
	int cafe_establish_year;
	int cafe_staff_quantity;
	
	int n,i;
    cout << "Enter the number of fast food cafe : ";
    cin >>n;
    
    for (i=0;i<n;i++) {
        

        cout << endl << "Enter details for Cafe " << i+1 << ":" << endl;
        cout << "Enter the Cafe ID: ";
        cin >> cafe_id;;
        cout << "Enter the Cafe Name: ";
        cin >> cafe_name;
        cout << "Enter the Cafe type: ";
        cin >> cafe_type;
        cout << "Enter the Cafe rating: ";
        cin >> cafe_rating;
        cout << "Enter the Cafe location: ";
        cin >> cafe_location;
        cout << "Enter the Cafe establist year: ";
        cin >> cafe_establish_year;
        cout << "Enter the Cafe staff quantity: ";
        cin >> cafe_staff_quantity;
        
        ffc F(cafe_id,cafe_name,cafe_type,cafe_rating,cafe_location,cafe_establish_year,cafe_staff_quantity);
    }

    
}
