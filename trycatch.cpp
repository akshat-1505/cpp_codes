#include<iostream>
using namespace std;
	void divide(int x,int y,int z)
	{
		cout<<"\n We are inside the function";
		if((x-y)!=0)
		{
			int R=z/(x-y);
			cout<<"result="<<R<<endl;
		}
		else
		{
			throw(x-y);
		}
	}
int main()
{
	try
	{
		cout<<"we are inside the try block\n";
		divide(10,20,30);
		divide(10,10,30);
	}
	catch(int i)
	{
		cout<<"caught the exception \n";
	}
	return 0;
}