/*2. WAP to convert given degree celsius temperature into
fahrenheit and convert that fahrenheit temperature
into kelvin by implementing multilevel inheritance:
Class P -> Class Q -> Class R
- Class P has following members: temperature
attribute in float
- Class Q has following members: toFehrenheit()
method
- Class R has following members: toKelvin() method
*/
#include<iostream>
using namespace std;

class P{
	public :
		
		int temperature;
		
		void input(){
			cout << "Enter The Temperature in Degree Celsius : ";
			cin >> temperature;
		}
	
};

class Q : public P
{
	public :
		float fahrenheit;
		
		void toFahrenheit(){
			
			fahrenheit=temperature*1.8+32;
			
			cout << "Temperature into Fahrenheit : " << fahrenheit << endl;
		}
};

class R : public Q
{
	public :
		float kelvin;
		
		void toKelvin(){
			
			kelvin=(fahrenheit-32)*0.56+273.15;
			
			cout << "Fahrenheit into Kelvin : " << kelvin << endl;  
		}
};

main(){
	R a;
	
	a.input();
	a.toFahrenheit();
	a.toKelvin();
}
