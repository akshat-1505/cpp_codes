#include<iostream>
using namespcae std;
class teacher{
	string name,address;
	int id,salary;
	teahcer(){
		cout<<"enter your name:";
		cin>>name;
		cout<<"enter your address:";
		cin>>address;
		cout<<"enter your id:";
		cin>>id;
		cout<<"enter your salary:";
		cin>>salary;
	}
	string get_name(){
		return name;
	}
	string get_address(){
		return address; 
	}
	int get_id(){
		return id;
	}
	int get_salary(){
		return salary;
		
	}
};