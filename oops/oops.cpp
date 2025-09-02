#include <iostream>
#include <string>
using namespace std;

class Teacher {
    public: //if you not give this access modifier you're going to get error known as private member is not there 
    //properties //attributes
        string name;
        string dept;
        string subject;
        float salary;
    //methods also known as member functions
        void changeDept( string newDept ){
            dept = newDept;
        }
};

int main(){
    Teacher t1;
    t1.name = "prakhar";
    t1.subject = "C++";
    t1.dept = "CSE";
    t1.salary = 25000;

    cout<<t1.name<<endl;
    return 0;
};