#include<iostream>
#include<string>
using namespace std;

class KeepString
{
	private:
		char s[20];
		char* p;
	public:
		KeepString(char* q)
		{
			int i=0;
			while(q[i]!='\0')
			{
				s[i]=q[i];
				i++;
			}
			//cout << s << endl;  
		}
		const char* GetString()
		{
			return p=s;
		}
};

int main()
{
    KeepString  KS("Internal String"); 
    const char *p = KS.GetString(); 
    cout << p << endl;    // Output is:  Internal String
	return 0;
}

