// Ananya Swadia
//24070123012

#include<iostream>
using namespace std;
int count=0;

class Destruct{
   
    public:
    Destruct(){
        count++;
        cout<<"No. of objects created: "<<count<<endl;
    }
    ~Destruct(){
        count--;
        cout<<"No. of objects destroyed: "<<count<<endl;
    }
};
int main(){
    Destruct a,b,c,d,e;
    return 0;
}
/* output
No. of objects created: 1
No. of objects created: 2
No. of objects created: 3
No. of objects created: 4
No. of objects created: 5
No. of objects destroyed: 4
No. of objects destroyed: 3
No. of objects destroyed: 2
No. of objects destroyed: 1
No. of objects destroyed: 0
*/
