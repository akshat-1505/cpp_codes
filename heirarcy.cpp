#include<iostream>
using namespace std;
class room{
	int l,b,h;
	public:
	room()
	{
		cout<<"enter the parameters:";
		cin>>l>>b>>h;
	}
	int getl()
	{
		return l;
	}
	int getb()
	{
		return b;
	}
	int geth()
	{
		return h;
	}
};
class area:public room
{
	int l=getl();
	int b=getb();
	public:
	void get_area()
		{
			cout<<"area of rectangle="<<l*b;
 		}
	};
 class volume:public room
{
	int l=getl();
	int b=getb();
	int h=geth();
	public:
	void get_volume()
		{
		    cout<<"volume of rectangle="<<l*b*h;
 		}
	
 };
int main()
{
	area a;
	a.get_area();
	volume v;
	v.get_volume();