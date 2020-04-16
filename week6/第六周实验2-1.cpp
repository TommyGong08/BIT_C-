/*在下面类定义的基础上，为类Y添加const、以及静态数据成员，并测试你设计的类Y。*/
#include<iostream>
using namespace std;

class B1 {
    int b;
public:
    B1 (int i) : b(i) {cout<<"Constructor B1:"<<b<<endl;}
    ~B1 () {cout<<"Des B1:"<<b<<endl;}
};
class B2 {
    int b;
public:
    B2 (int i) : b(i) {cout<<"Constructor B2:"<<b<<endl;}
    ~B2 () {cout<<"Des B2:"<<b<<endl;}
};
class Y : public B1, public B2  {
	static B2 x4;
    const B1 x1,x2;
    const B1& x3;
public:
   Y(int i,int j, int m, int n) : x2(i), x1(j), B2(m), B1(n), x3(x2)
        {cout<<"Constructor Y1:" << endl;}
   ~Y () {cout<<"Des Y1:" << endl;}
 };

B2 Y::x4(5);
int main()
{
	Y y(1,2,3,4);
	return 0;
 } 
