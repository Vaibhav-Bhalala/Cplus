//5. WAP to demonstrate example of hierarchical inheritance to get square and cube of a number.
#include<iostream>
using namespace std;

class num{
	protected :
		int a;
	public :
		num()
		{
			cout << "Enter A : ";
			cin >> a;
		}
};

class square  : public num{
	public :
		void getsquare()
		{
			cout << "A : " << a*a;
		}
};
class cube  : public num{
	public :
		void getcube()
		{
			cout << "A : " << a*a*a;
		}
};

main()
{
	cube c;
	c.getcube();
	cout << endl;
	square s;
	s.getsquare();
}
