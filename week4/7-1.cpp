#include<iostream>
using namespace std;


void Sort(int* p)
{
	int temp;
	for(int i=0;i<=9;i++)
	{
		for(int j=i;j<10;j++)
		{
			if(*(p+i)>*(p+j))	
			{
				temp=*(p+j);
				*(p+j)=*(p+i);
				*(p+i)=temp;	
			}	
		}
	}
}

void Show(int *p)
{
	for(int i=0;i<10;i++)
	{
		cout << *(p+i) << " " ;
	}
	cout << endl; 
}

void Show(int *p,int k)
{
	for(int i=k-1;i>=0;i--)
	{
		cout << *(p+i) << " ";
	}
	cout << endl; 

}

int main()
{
	int num[10]={1,2,5,7,9,3,8,4,6,10};
	Sort(num); 
	Show(num);
	Show(num,10);
	return 0;
}
