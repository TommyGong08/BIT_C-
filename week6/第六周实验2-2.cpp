#include<iostream>
#include<string>
using namespace std;

class Traveler
{
	private:
		string str;
	public:
		Traveler(const string& s):str(s) {}
		Traveler(const Traveler& t):str(t.str) {}
		Traveler& operator=(const Traveler& t)
		{
			if(this!=&t)	str=t.str;
			return *this;
		} 
		string	getString()const
		{
			return str;
		} 
};

class Pager
{
	private:
		string str;
	public:
		Pager(const string& s):str(s){}
		Pager(const Pager& p):str(p.str){}
		Pager& operator=(const Pager& p)
		{
			if(this!=&p)	str=p.str;
			return *this;
		}	
		string getString()const
		{
			return str;
		}
};
class BusinessTraveler:public Traveler
{
	private:
		Pager pager;
	public:
		BusinessTraveler():Traveler("Nothing") ,pager("Pager 0") {}
		BusinessTraveler(const string& t,const string& p):Traveler(t),pager(p){} 
		BusinessTraveler(const BusinessTraveler& b):Traveler(b),pager(b.pager){} 
		BusinessTraveler& operator=(const BusinessTraveler&b)
		{
			if(this!=&b)
			{
				Traveler::operator=(b);
				pager=b.pager;
			}
			return *this;
		}
		friend ostream&operator<<(ostream& os,const BusinessTraveler& b)
		{
			return os << b.getString() << " " << b.pager.getString() << endl; 
		}
};

int main() 
{
    BusinessTraveler b1("Joe BusinessMan","Pager 1");
    cout << b1 << endl;
    BusinessTraveler b2("Jane BusinessWoman","Pager 2");
    cout << b2 << endl;
   	BusinessTraveler b3;
    cout << b3 << endl;
    BusinessTraveler b4(b1);
    cout << b4 << endl;
    b3=b2;
    cout << b3 << endl;
    return 0;
}
