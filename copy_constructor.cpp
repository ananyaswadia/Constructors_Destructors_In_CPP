// Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

class Student{
    int age;
    string name;
   
    public:
    Student(string n,int a){            //parametric constructor
        name=n;
        age=a;
    }
    Student(const Student &s){        //copy constructor
        name=s.name;
        age=s.age;
        cout<<"Copy constructor called!"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<" , Age: "<<age<<endl;
    }
};

int main(){
    Student s1("Ananya",19);
    Student s2=s1;
   
    cout<<"Original Object: ";
    s1.display();
    cout<<"Copied Object: ";
    s2.display();
   
   
    return 0;
}
/* output
Copy constructor called!
Original Object: Name: Ananya , Age: 19
Copied Object: Name: Ananya , Age: 19
*/
