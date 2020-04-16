#include<iostream>
#include<cmath>
using namespace std;

class Equation
{
	public:
		double a,b,c;
		double Q;
		double root1()
		{
			double ans1=(0.5*(-b+sqrt(Q)))/a;
			return ans1;
		}
		double root2()
		{
			double ans2=(0.5*(-b-sqrt(Q)))/a;
			return ans2;
		}
		void GetAnswer()
		{
		 	Q=b*b-4*a*c;
			if(Q<0)	
			{
				cout << "The Equation has no root" << endl;
			}
			else if(Q==0)
			{
				cout << "The root is " << root1() <<endl;
			}
			else 
			{
				cout << "The first root is " << root1() << endl;
				cout << "The second root is " << root2() << endl;
			}	
		}
};
 
int main(int argc, char* argv[])
{
	Equation E;
	cin >> E.a >> E.b >> E.c;
	E.GetAnswer();
	return 0;
}
