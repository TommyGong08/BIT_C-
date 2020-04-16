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
   	cout << "&outObj:    " << &outObj    << endl;//ȫ�ֱ���ĵ�ַ���洢�ھ�̬�洢�� 
   	cout << "&staticObj: " << &staticObj << endl;//��̬����ĵ�ַ���洢�ھ�̬�洢�� 
   	cout << "&inObj:     " << &inObj     << endl;//��ͨ�ľֲ������ַ���洢��stack��
   	cout << "t:          " << &t         << endl;//new��������ĵ�ַ���洢��heap�� 
   	cout << "&(*t):      " << &(*t)      << endl;//ָ��t����ָ��ĵ�ַ 
   	delete t;
   	return 0;
} 
