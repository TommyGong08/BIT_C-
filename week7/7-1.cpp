#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class Employee
{		
	public:
		string name;
		int salary;
		Employee(const string s)
		{
			name=s;
		}	
};
class Technician:virtual public Employee
{
	private:
		string T_name;
		int T_salary;
	public:
		Technician(const string s,const int t):Employee(s)
		{
			salary=100*t;
			T_name=name;
			T_salary=salary;
		}
		Show()
		{
			cout << "Technician named " << T_name << endl;
			cout << "Technician's salary is " << T_salary << endl;
		}
	
};
class Manager:virtual public Employee
{
	private:
		string M_name;
		int M_salary;
	public:
		Manager(const string M_n):Employee(M_n)
		{
			M_name=name;
			M_salary=7000;
		}
		Show()
		{
			cout << "Manager named " << M_name << endl;
			cout << "Manager's salary is " << M_salary <<endl;
		}
	
};
class Salesman:virtual public Employee
{
	private:
		string S_name;
		int S_salary;
	public:
		int sale;
		Salesman(const string S_n,const int S_sale):Employee(S_n)
		{
			sale=S_sale;
			salary=S_sale*0.05;
			S_name=name;
			S_salary=salary;
		}
		Show()
		{
			cout << "Salesman named " << S_name << endl;
			cout << "Salesman's salary is " << S_salary << endl;
		}
};
class SalesManager:public Manager,public Salesman
{
	private:
		string SM_name;
		int SM_salary;
	public:
		SalesManager(const string SM_n,const int S_sale):Manager(SM_n),Salesman(SM_n,S_sale),Employee(SM_n)
		{
			SM_name=name;
			SM_salary=0.005*S_sale+4000;
		}
		Show()
		{
			cout << "SalesManager named " << SM_name << endl;
			cout << "SalesManager's salary is " << SM_salary << endl;
		}
};

int main()
{
	Technician T("NAME1",40);//姓名，工作时长
	Manager M("NAME2");//只输入经理姓名,工资固定 
	Salesman S("NAME3",100000);//销售人员姓名及销售额
	SalesManager SM("NAME4",S.sale);//销售经理姓名和销售额 
	T.Show();
	M.Show();
	S.Show();
	SM.Show(); 
	return 0;
}
