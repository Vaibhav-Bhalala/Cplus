/*27.create a addition logic to find sum of all digits of a given number to surpass a very 
challanging dream of tanmay.write a c++ program to develop this system for tanmay.
*/
#include <iostream>
using namespace std;

class A{
	int n,sum=0,remainder;
	public :
		void input(){
			cout << "Enter a number: ";
    		cin >> n;
		}
		void output(){
			while (n!=0) {
        		remainder=n%10;
        		sum=sum+remainder;
        		n=n/10;
			}
    		cout << "The sum of the digits is: " << sum;
		}
};

main()
{
 	A a1;
	a1.input();
	a1.output();    
    
}

