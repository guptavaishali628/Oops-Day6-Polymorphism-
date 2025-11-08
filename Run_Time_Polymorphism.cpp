// Run Time Polymorphism--> define output at the time of run time:
// also known as dynamically polymorphism:
// Example--> (a)-> Function overriding, (b)--> Virtual Function
//Function overriding--> Parent & child both contain same function with same parameters having different implementation:
// parent class function is overridden by the child class function having priority more than parent function:

// difference between overloading and overridding--> Overloading is define by the single class contain two functions wigth same name but different parameters: 
//overloading -->Overloading is define by the single class contain two functions wigth same name but different parameters: 
//overriding --> parent and child function contain same function with different implementation:

// Example 1--> Function Overriding:

#include<iostream>
#include<string>
using namespace std;

// create parent class:
class Parent {
    public:
    // function
      void getinfo(){
        cout<<"parent Class"<<endl;
      }
};

class Child : public Parent {
    public:
       void getinfo(){
        cout<<"Child function"<<endl;
       }
};

int main(){
    // create class for child:
    Child C1;
    C1.getinfo();   // override the parent class function due to high priority of child here

    // Parent P1;
    // P1.getinfo();
    return 0;
}

//o/p-->Child  Function