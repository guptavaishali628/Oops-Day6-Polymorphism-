//compiler time polymorphism--> it is a type of polymorphism in which the output define at the time of compile time it run statically:
// also known as Static Poltmorphism:
// Example --> Constructor Overloading, Function Overloading:

//Function Overloading:--> it is a term used when more than one function occur in the class with the same name having different paarmetrers :

#include<iostream>
#include<string>
using namespace std;

// create class:
class Teacher{
    private:
       double salary;
    public:
      string name;
      string subject;
    
    // function 1-->(for nameand subject)
    void getinfo(string name, string subject){
        cout<<"Name:"<<name<<endl;
        cout<<"Subject:"<<subject<<endl;
    }
    // function 2-->(for salary)
    void getinfo(double sal){
        salary = sal;
        cout<<"Salary:"<<sal;
    }
};

int main(){
    //create object:
    Teacher t1;
    t1.getinfo("vaishali", "ML");  // for name and Subj
    //t1.getinfo(2400); // for salary
    return 0;
}