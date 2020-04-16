#include<iostream>
#include<cstdio>
using namespace std;

class  Vehicle
{
	private:
		double Vdis;
		double Vweight;
	public:	
		double Vfee;
		getVdis(){  double VVdis;return VVdis = Vdis;}
		getVfee(){	double VVfee;return VVfee = Vfee;}
		getVweight(){ double VVweight;return VVweight = Vweight;}
		Vehicle(double dis,double weight)
		{
			Vdis=dis;
			Vweight=weight;
		}
		virtual double Fee() = 0;
};

class Plane:public Vehicle
{
	private:
	public:
		Plane(double dis,double weight):Vehicle(dis,weight){}
		virtual double Fee()
		{
			Vfee = getVdis()*1.15*1000+getVweight()*1.05*1000;
		}
};
class Ship:public Vehicle
{
	public:
		Ship(double dis,double weight):Vehicle(dis,weight){}
		virtual double Fee()
		{
			Vfee = getVdis()*1.05*1000+getVweight()*0.9*1000;
		}
};
class Car:public Vehicle
{
	public:
		Car(double dis,double weight):Vehicle(dis,weight){}
		virtual double Fee()
		{
			Vfee = getVdis()*1.2*1000+getVweight()*1.1*1000;
		}
};

int main()
{
	Plane plane(2000,50);//距离2000公里，载重50吨 
    Ship ship(2000,50);//距离2000公里，载重50吨
	Car car(2000,1);//距离2000公里，载重1吨
	cout << "The fee of plane is " << plane.Fee() << endl;
	cout << "The fee of ship is " << ship.Fee() << endl;
	cout << "The fee of car is " << car.Fee() << endl;
	return 0;
}




