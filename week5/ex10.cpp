#include<iostream>
using namespace std;

class CSet
{
	private:
		int num;
		int p[10];
		int size;//假设空间最多为20 
	public:
		CSet(int s=0)
		{
			num=s;
			size=1;
		}
		CSet(int *q,int s)
		{
			int i=0;
			for(int i=0;i<s;i++)
			{
				p[i]=q[i];
			}
			size=s;
		} 
		friend void IsExist(const CSet &a,int num);
		friend CSet operator+(const CSet &a,int num);
		friend CSet operator-(const CSet &a,int num);
		friend CSet operator+(const CSet &a,const CSet &b);
		friend ostream& operator<<(ostream& os,const CSet &a);
};

//插入一个数字 
CSet operator+(const CSet &a,int num)
{
	int flag=0,i,new_size;
	int r[20];
	for(i=0;i<a.size;i++)
	{
		r[i]=a.p[i];
		if(r[i]==num)	
		{
			flag=1;
		}
	}
	if(flag==0)	
	{
		r[i]=num;
		new_size=a.size+1;
	}
	return CSet(r,new_size);
}

//删去一个元素 
CSet operator-(const CSet &a,int num)
{
	int s[20],s_size=a.size-1,k;
	for(int i=0;i<a.size;i++)
	{
		if(a.p[i]==num)	
		{
			k=i;
			break;
		}
	}
	for(int i=k;i<a.size-1;i++)
	{
		s[i]=a.p[i+1];
	}
	return CSet(s,s_size);
}

//两个集合取交集 
CSet operator+(const CSet &a,const CSet &b) 
{
	int r[20]={0},r_size=0;
	int k=0;
	for(int i=0;i<a.size;i++)
	{
		for(int j=0;j<b.size;j++)
		{
			if(a.p[i]==b.p[j]&&r[k]!=a.p[i])
			{
				r[k]=a.p[i];
				k++;
				r_size++;
			}
		}
	}
	return CSet(r,r_size);
}

//输出流重载
ostream& operator<<(ostream &os,const CSet &a)
{
	for(int i=0;i<a.size;i++)
	{
		cout << a.p[i] << " ";
	}
	cout << endl;
	return os;
} 

//判断整数是否为集合的成员
void IsExist(const CSet &S1,int num)
{
	int flag=1;
	for(int i=0;i<S1.size;i++)
	{
		if(S1.p[i]==num) 
		{
			cout << num << " is a member of the set" << endl;
			flag=1;
			break;
		}
	}
	if(flag==0)	cout << num << " is not a menber of the set" << endl;
} 

int main() 
{
    int a[] = {1, 3, 5, 7, 6, 4, 2};
    CSet S1,S2(a,7);//7是空间大小 
    S1=S2+8;
    IsExist(S1,4);
    CSet  S3=S1+S2;
 	cout << S1 << S2 << endl;
    return 0;
}
