//inheritance 
#include<iostream>
#include<string>
using namespace std;
class teacher
{
	string name;
	int id;
	string addr;
	int salary;
	public:
	void getn()
	{
		cout<<"enter name";
		cin>>name;
		}
	void geta()
	{
		cout<<"enter address";
		cin>>addr;
		}	
	void getid()
	{
		cout<<"enter id";
		cin>>id;
		}	
	void getsalary()
	{
		cout<<"enter salary";
		cin>>salary;
		}	
	string setname()
        {
	        return name;
     	}
	int setid()
    	{
	    	return id;
	    }
	string setaddr()
	    {
		    return addr;
		}    
	int setsalary()
	    {
            return salary;		
		}	
	void tdisplay()
	{
		cout<<"NAME OF STUDENT="<<name;
		cout<<"ID OF STUDENT="<<id;
		cout<<"ADDRESS OF STUDENT=<<"<<addr;
		cout<<"Marks of student "<<salary;
	}
};
class student: public parents
{
	string name=setname();
	int id=setid();
	string addr=setaddr();
	 int marks;
	 void getmarks()
	 {
	 	cout<<"enter marks";
	 	cin>>marks;
	 }
	public:
	void sdisplay()
	{
		cout<<"NAME OF STUDENT="<<name;
		cout<<"ID OF STUDENT="<<id;
		cout<<"ADDRESS OF STUDENT=<<"<<addr;
		cout<<"Marks of student "<<marks;
	}
};
int main()
{
	student s;
	s.getid();
	s.getsalary();
	s.tdisplay();
	s.sdisplay();
}