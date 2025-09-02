#include <iostream>
#include <string>
using namespace std;

class Teacher{
    private:
        double salary;
    
    public:
        Teacher(){
            cout<<"Hi, I'm a constructor\n";
        }//custom constructor, if you dont create a constructor then compiler will create it by default when you run the program
    
        string name;
        string dept;
        string subject;

        void changeDept(string newDept){
            dept = newDept;
        }

        //setter
        void setSalary(double s){
            salary=s;
        }

        //getter
        double getSalary(){
            return salary;
        }
};

class Account{
private:
    double balance;
    string password; //data hiding 
public:
    string accountId;
    string username;
};

int main(){
    Teacher t1;//constructor call
    t1.name = "Prakhar";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.setSalary(25000);

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;   
}