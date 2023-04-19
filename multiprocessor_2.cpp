// 2. WAP to add two distances using binary plus (+) operator overloading.


#include<iostream>

using namespace std;

class distances
{
    int a;

    public :

    input(){

        cout << "Enter the distance in Kilometer : "; 
		cin >> a ;

    }

   	distances operator + (distances d2)
    {
        cout << "The sum of the distance is : " << a+d2.a <<" km";
    }

};

main()

{
    distances d1;
    distances d2;
    distances d3;
    d1.input();
    d2.input();
    d3=d1+d2;
}
