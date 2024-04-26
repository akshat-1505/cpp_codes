#include<iostream>
using namespace std;
class school
{
  string name,address;
  int id;
  public:
  school()
  {
  	cout<<"enter name,address,id";
  	cin>>name>>address>>id;
  }
  string getn()
  {
  	return name;
  }
  string geta()
  {
  	return address;
  }
  int getid()
  {
  	return id;
  }
};
class student : public school
{   
    int marks;
    
	public:
	void getmarks()
	{
		cout<<"enter marks";
		cin>>marks;
	 } 
	void display()
	{
		string name=getn();
		cout<<"name:"<<name<<endl;
		cout<<"address:"<<geta()<<endl;
		cout<<"id:"<<getid()<<endl;
		cout<<"marks: "<<marks;
		
	}
};
class teacher : public school
{   
    int salary;
    school t;
	public:
	void getsalary(int salary)
	{
		this->salary=salary;
	 } 
	void display()
	{
		cout<<"name:"<<t.getn()<<endl;
		cout<<"address:"<<t.geta()<<endl;
		cout<<"id:"<<t.getid()<<endl;
		cout<<"salary: "<<salary;
		
	}
};
  int main() {
    int marks, salary;
    
    student s; // Corrected: Remove parentheses
    s.getmarks();
    s.display();
   
    teacher t; // Corrected: Remove parentheses
    cout << "enter salary:";
    cin >> salary;
    t.getsalary(salary);
    t.display();
    
    return 0;
}
