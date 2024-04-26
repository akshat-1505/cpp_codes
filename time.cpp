#include<iostream>
using namespace std;
class time
{
	int h,m,s;
	public:
		void get_time(){
		    cout<<"enter hours,min,sec:";
		    cin>>h>>m>>s;
		}
		void cal(time t1,time t2)
		{
		this->s=(t1.s+t2.s)%60;
		this->	m=((t1.m+t2.m)%60)+((t1.s+t2.s)/60);
		this->	h=(t1.h+t2.h)+((t1.m+t2.m)/60); 
			cout<<"\nhours: "<<h<<"\nmin: "<<m<<"\n sec: "<<s;
		}
};

int main()
{
	time t1,t2,t3;
	t1.get_time();
	t2.get_time();
	t3.cal(t1,t2);
}