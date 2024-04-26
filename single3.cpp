#include<iostream>
#include<string>
using namespace std;

class teacher {
    string name;
    int id;
    string addr;
    int salary;

public:
    void getn() {
        cout << "enter name: ";
        cin >> name;
    }

    void geta() {
        cout << "enter address: ";
        cin >> addr;
    }

    void getid() {
        cout << "enter id: ";
        cin >> id;
    }

    void getsalary() {
        cout << "enter salary: ";
        cin >> salary;
    }

    string setname() {
        return name;
    }

    int setid() {
        return id;
    }

    string setaddr() {
        return addr;
    }

    int setsalary() {
        return salary;
    }

    void tdisplay() {
        cout << "NAME OF TEACHER= " << name << endl;
        cout << "ID OF TEACHER= " << id << endl;
        cout << "ADDRESS OF TEACHER= " << addr << endl;
        cout << "Salary of teacher= " << salary << endl;
    }
};

class student : public teacher {
    string sname;
    int sid;
    string saddr;
    int marks;

public:
    void getmarks() {
        cout << "enter marks: ";
        cin >> marks;
    }

    void getStudentInfo() {
        cout << "enter name: ";
        cin >> sname;
        cout << "enter id: ";
        cin >> sid;
        cout << "enter address: ";
        cin >> saddr;
    }

    void sdisplay() {
        cout << "NAME OF STUDENT= " << sname << endl;
        cout << "ID OF STUDENT= " << sid << endl;
        cout << "ADDRESS OF STUDENT= " << saddr << endl;
        cout << "Marks of student= " << marks << endl;
    }
};

int main() {
    student s;
    s.getStudentInfo();
    s.getmarks();
    s.tdisplay();
    s.sdisplay();

    return 0;
}
