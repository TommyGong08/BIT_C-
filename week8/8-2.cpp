#include<iostream>
#include<sstream>
#include<cstring>
using namespace std;

template <class T>
class Array 
{
  	enum { sz = 5 };
  	T i[sz];
	public:
  		Array() { memset(i, 0, sz* sizeof(*i)); }
  		T& operator[](int x) 
		{
    		if(x<0||x>=sz) cout << "Array::operator[] out of range" << endl;
    		return i[x];
  		}
  		friend ostream& operator<<(ostream& os, const Array<T>& ia)
  		{
  			for(int j = 0; j < ia.sz; j++) 
  			{
    			os << ia.i[j];
    			if(j != ia.sz -1)	os << ", ";
  			}
  			os << endl;
  			return os;
		}
  		friend istream& operator>>(istream& is, Array<T>& ia)
  		{
  			for(int j = 0; j < ia.sz; j++)
    		is >> ia.i[j];
  			return is;
		}
};

int main() 
{
	//ÔÚDev-cppÉÏ±àÒë
  	stringstream input("47 34 56 92 103");
 	Array<int>  a;
    input >> a;
    a[4] = -1;           // Use overloaded operator[]
    cout << a;
} 
