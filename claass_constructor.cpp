#include<iostream>
using namespace std;
class room{
	int l,b,h;
	public: 
	room(){
		cout<<"enter the parameters of rectangle:";
		cin>>l>>b>>h;
		}
		void ans()
		{
			cout<<"area:"<<(l*b);
			cout<<"volume:"<<(l*b*h);
		}
};
int main()
{
	room obj;
	obj.ans();
}