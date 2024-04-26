#include<iostream>
using namespace std;
int area()
{
	int a; 
	cout<<"enter value:";
	cin>>a;
	return a*a;
}
int area(int a,int b)
{
	return a*b;
}
double volume()
{
	int a;
	cout<<"enter value:";
	cin>>a;
	return a*a;
}
double volume(int a,int b,int c)
{
	return a*b*c;
}
int main()
{
	cout<<"area of square:"<<area()<<endl;
	cout<<"area of rectangle:"<<area(2,3)<<endl;
	cout<<"vol of square:"<<volume()<<endl;
	cout<<"vol of square:"<<volume(4,3,2)<<endl;
}