// Virtual functions-->A virtual function is a member function that you expect to be redefined in derived class.
// properties:
//1--> they are dynamic in nature:
//2-->they are called during runtime:
//3-->defined by keyword virtual inside a base class and are always declared with a base class and overrides in achild class:

#include<iostream>
#include<string>
using namespace std;

// create class:
class Parent{
    public:
    // virtual function:
      virtual void hello(){
        cout<<"Hello from the Parent class..\n";
      }
};

class Child:public Parent{
    public:
      //function to override the virtual function:
      virtual void hello(){
        cout<<"Hello from the child class..\n";
      }
};

int main(){
    //create object:
    Child c1;
    c1.hello();  //o/p-->Hello from the child class..

    return 0;
}