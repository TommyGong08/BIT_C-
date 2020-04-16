#include<iostream>
using namespace std;
class Tree
{
	int H;
	public:
		Tree(int treeHeight=0)
		{
			H = treeHeight;
			cout << "Tree(): " << H << endl;
		}
		void print()
		{
			cout << H << endl;
		}
		~Tree()
		{
			cout << "~Tree(): " << H << endl;
		}
 } ;
Tree outObj(10);

int main()
{
	Tree inObj(20);
   	static Tree staticObj(30);
   	Tree* t = new Tree(40);
   	cout << "&outObj:    " << &outObj    << endl;//全局变象的地址，存储在静态存储区 
   	cout << "&staticObj: " << &staticObj << endl;//静态对象的地址，存储在静态存储区 
   	cout << "&inObj:     " << &inObj     << endl;//普通的局部对象地址，存储在stack上
   	cout << "t:          " << &t         << endl;//new创建对象的地址，存储在heap上 
   	cout << "&(*t):      " << &(*t)      << endl;//指向t的类指针的地址 
   	delete t;
   	return 0;
} 
