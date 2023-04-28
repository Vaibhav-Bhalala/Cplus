/*20. A Teacher give a punishment to all students to find
reverse numbers of given 3 random numbers by logically
under 15 minutes. Write a C++ Program to provide a
solution for this problem.*/
#include <iostream>
using namespace std;

class A{
	int n1, n2, n3;
    int rev1 = 0, rev2 = 0, rev3 = 0;
    public :
    	void input(){
    		cout << "Enter three random numbers : ";
    		cin >> n1 >> n2 >> n3;
		}
		void output(){
			 while (n1 != 0) {
        int digit = n1 % 10;
        rev1 = (rev1 * 10) + digit;
        n1 /= 10;
    }
    

    while (n2 != 0) {
        int digit = n2 % 10;
        rev2 = (rev2 * 10) + digit;
        n2 /= 10;
    }
    

    while (n3 != 0) {
        int digit = n3 % 10;
        rev3 = (rev3 * 10) + digit;
        n3 /= 10;
    }
    

    cout << "Reverse of " << n1 << " is " << rev1 << endl;
    cout << "Reverse of " << n2 << " is " << rev2 << endl;
    cout << "Reverse of " << n3 << " is " << rev3 << endl;
	}
};

main() {
	A a1;
	a1.input();
	a1.output();
    

}


