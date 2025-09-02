// Ananya Swadia
//24070123012

#include<iostream>
using namespace std;

class Date{
    public:
    int d=28;
    int m=8;
    int y=2025;
    ~Date(){
        cout<<"Destructor called"<<endl;
    }
};
int main(){
    Date d1,d2,d3,d4;
    for(int i=0;i<4;i++);
    {
        Date d1;
    }
}
/* output
Destructor called
Destructor called
Destructor called
Destructor called
Destructor called
*/
