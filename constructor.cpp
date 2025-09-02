// Ananya Swadia
//24070123012

#include<iostream>
#include<string>
using namespace std;

class Student{
    int roll_no;
    string name;
    double fees;
   
    public:
    Student(){                        // initializing a constructor
        cout<<"Enter roll number:";
        cin>>roll_no;
       
        cout<<"Enter name: ";
        cin>>name;
       
        cout<<"Enter fees:";
        cin>>fees;
       
    }
   
    void show(){
        cout<<"Student's roll number is: "<<roll_no<<endl<<"Student's name is: "<<name<<endl<<"Fees the student pays is: "<<fees<<"Rs."<<endl;
    }
};
int main(){
    Student s1;
    s1.show();
    return 0;
}

/*output
Enter roll number:12345
Enter name: Ananya
Enter fees:25000
Student's roll number is: 12345
Student's name is: Ananya
Fees the student pays is: 25000
*/
