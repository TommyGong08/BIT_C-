#include <iostream>
using namespace std;

class  CArray
{
	private:
     	char* str;
     	int length; 
     	int size; 
	public:
     	CArray(int i)
     	{
     		size=i;
     		str=new char[size];
	 	}
	 	~CArray()
	 	{
	 		if(!str) delete[] str;
	 	}
		void Copy(char* );
};

void CArray::Copy(char* ch)
{
	int i=0;
	while(ch[i]!='\0')
	{
		str[i]=ch[i];
		i++;
		
	}
	str[i]=ch[i];
	cout << str <<endl;
}

int main()
{
		int n; 
        CArray  arr(10);//数组长度 
        arr.Copy("Hello world!");
        return 0;
}

