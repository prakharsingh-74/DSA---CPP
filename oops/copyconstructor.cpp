#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        double salary;
    
    public:
        
        //parametrized constructor
        Teacher(string n, string d, string s, double sal){
            name = n;
            dept = d;
            subject = s;
            salary = sal;
        }
        
        string name;
        string dept;
        string subject;

        //copy constructor
        Teacher(Teacher &orgObj){//pass by reference
            cout<<"I'm copy constructor\n";
            this->name = orgObj.name;// this pointer
            this->dept = orgObj.dept;
            this->subject = orgObj.subject;
            this->salary = orgObj.salary;
        }

        void changeDept(string newDept){
            dept = newDept;
        }

        void getInfo(){
            cout<< "name : "<< name << endl;
            cout<< "subject : "<< subject << endl;
        }
};

int main(){
    Teacher t1("Prakhar", "CSE", "C++", 25000);
    //t1.getInfo();

    Teacher t2(t1); // default copy constructor get call/invoke
    t2.getInfo();
    return 0;   
}