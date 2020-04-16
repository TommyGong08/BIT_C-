#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class Employee
{		
	private:
		string E_name;
		int E_salary;
	public:
		virtual void pay(const string name,const int salary)
		{
			E_name=name;
			E_salary=salary;
		}
};
class Technician: public Employee
{
	private:
		string T_name;
		int	T_salary,hour;
	public:
		virtual void pay(const string name,const int hour)
		{
			T_name=name;
			T_salary=hour*100;
			cout << "Technician named " << T_name << endl;
			cout << "Technician's' salary is " << T_salary << endl;
		}
};
class Manager: public Employee
{
	private:
		string M_name;
		int	M_salary;
	public:
		virtual void pay(const string name,const int salary)
		{
			M_name=name;
			M_salary=salary;
			cout << "Manager named " << M_name << endl;
			cout << "Manager's' salary is " << M_salary <<endl;
		}
};

class Salesman: public Employee
{
	private:
		string S_name;
		int	S_salary;
	public:
		virtual void pay(const string name,const int scale)
		{
			S_name=name;
			S_salary=scale*0.05;
			cout << "Salesman named " << S_name << endl;
			cout << "Salesman's salary is " << S_salary << endl;
		}
};
class SalesManager:public Manager
{
	private:
		string SM_name;
		int	SM_salary;
	public:
		virtual void pay(const string name,const int scale)
		{
			SM_name=name;
			SM_salary=4000+scale*0.005;
			cout << "SalesManager named " << SM_name << endl;
			cout << "SalesManager's salary is " << SM_salary << endl;
		}
};

int main()
{
	Employee* T=new Technician();
	Employee* M=new Manager();
	Employee* S=new Salesman();
	Employee* SM=new SalesManager();
	T->pay("NAME1",40);//������Ա���������ֺ͹���ʱ�� 
	M->pay("NAME2",7000);//�����������ֺ͹̶����� 
	S->pay("NAME3",100000);// ������Ա���������ֺ����۶� 
	SM->pay("NAME4",100000);//���۾����������ֺ����۶� 
	delete T,M,S,SM;
	return 0;
}
