#include <iostream>
using namespace std;
class  CPointer
{
	private:
		int *p;
	public:
		CPointer(int x)
		{
			p=new int (x); 
		//	cout << &x << endl;
		};
		~CPointer()
		{
			delete this->p;
		//	cout << "delete" << endl;
		};
		int Copy(CPointer& s)
		{
			*p=*s.p;
			return *p;
		};
};

int main()
{
    CPointer p(10);
	CPointer q(20);
    printf("%d\n",q.Copy(p)); 
   	return 0;
}

