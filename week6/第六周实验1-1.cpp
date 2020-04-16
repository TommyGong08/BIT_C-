#include<iostream>
using namespace std;

class Counted
{
	private:
		int id;
		static int count;
	public:
		Counted()
		{
			static int count=1;
			id=count++;
			cout << "Counted: " << id << endl;
		}
		~Counted()
		{
			cout << "~Counted: " << id << endl;
		}
};

int main()
{
	Counted* c =new Counted[3];
	delete [] c;
	return 0;
}
 
