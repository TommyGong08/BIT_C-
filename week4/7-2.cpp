#include<iostream>
using namespace std; 

class CSmart
{
	private:
		static int count;
	public:
		CSmart()
		{
			if(count==1||count==0)
			{	
				cout << count << " object" << endl;
				count++;
			}
			else 
			{
				cout << count << " objects" << endl;
				count++;
			}
		}
		~CSmart()
		{
			if(count==1||count==0)
			{	
				cout << count << " object" << endl;
				count--;
			}
			else 
			{
				cout << count << " objects" << endl;
				count--;
			}
		}
}; 

int CSmart::count=0;
   
void DoSomething()
{       
	CSmart s;   
}

CSmart  s1;

int main()	
{
    CSmart  s2;	
    DoSomething();  
    CSmart  *s3 = new CSmart;
    delete s3;
    return 0;
}

