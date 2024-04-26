#include<iostream>
using namespace std;
class measurement
{
	int i,f;
	public:
		inline void get_measurement(){
		    cout<<"enter foot and inch:";
		    cin>>f>>i;
		}
		inline void cal(measurement m1,measurement m2)
		{
		i=(m1.i+m2.i)%12;
		f=(m1.f+m2.f)+(m1.i+m2.i)/12;
		cout<<"foot:"<<f<<"inch:"<<i;
		}
};

int main()
{
	measurement m1,m2,m3;
	m1.get_measurement();
	m2.get_measurement();
	m3.cal(m1,m2);
}