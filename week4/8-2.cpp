#include<iostream>
#include<cmath>
using namespace std;

class CCircle
{
	public:
		double X,Y,R;
		CCircle(double x,double y,double r)
		{
			X=x;
			Y=y;
			R=r;
		}
		double GetDistance2(double x1,double y1,double x2,double y2)
		{
			double dis;
			dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
			return dis;
		}
		void Relationship(double r1,double r2,double dis)
		{
		//	cout << r1+r2 <<endl;
			if(r1+r2==dis||abs(r1-r2)==dis)
			{
				cout << "The relationship is tangent." <<endl;
			}
			else if(dis>(r1+r2))
			{
				cout << "The relationship is seperation." << endl;
			}
			else if(dis<(r1+r2))
			{
				cout << "The relationship is intersection." << endl;
			}
		}
};

inline double GetDistance1(double x1,double y1,double x2,double y2)
{
	double dis;
	dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
	return dis;
}

int main()
{
	CCircle c1(1,2,4),c2(4,8,3);
	cout << GetDistance1(c1.X,c2.X,c1.Y,c2.Y) << endl;//非成员函数 
	cout << c2.GetDistance2(c1.X,c2.X,c1.Y,c2.Y) << endl;//成员函数 
	c2.Relationship(c1.R,c2.R,c2.GetDistance2(c1.X,c2.X,c1.Y,c2.Y));//判断两圆关系 
	return 0;	
}
