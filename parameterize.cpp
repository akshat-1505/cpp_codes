#include<iostream>
using namespace std;
class room{
	int l,b,h;
	public:
	room(int l,int b,int h)
	{
		this->l=l;
		this->b=b;
		this->h=h;
	}
	int cal()
	{
		return l*b;
	}
	int cal2()
	{
		return l*b*h;
	}
};
int main()
{
	room r(5,6,7);
	cout<<"l*b="<<r.cal();
	room r1(r);
	cout<<"l*b*h="<<r1.cal2();
}
