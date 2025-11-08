// polymorphism--> poly means multiple & morph means forms.
// it is the ability of objects to take on different form or behave in different ways depending on the context in which they are used:
// example of polymorphism--> constructor overloading:
// constructor overloading is a term used we call more than different constructors in a class:
// if we do not call the constructor then the non-paramaterised constructor run:
// if we call the constructor then the paramaterised constructor run:

//Example = Constructor overloading:

#include<iostream>
#include<string>
using namespace std;

// create class Student:
class Student{
    public:
       string name;

       //----constructor 1(Non-parameteriesed)--->
       Student(){
          cout<<"Non-Parameterised constructor\n";
       }

       //----constructor 1(Non-parameteriesed)--->
       Student(string name){
          this->name=name;
          cout<<"Parameterised constructor\n";
       }
};

int main(){
    //craete object without constructor call then the non parametrised constructor execute bydefault:
    //Student S1;  // o/p-->Non-Parameterised constructor

    //craete object with constructor call then the parametrised constructor execue:
    Student s1("vaishali");  // o/p-->Parameterised constructor
    return 0;
}

