//Ananya Swadia
//24070123012

#include<iostream>
using namespace std;
class Constructor{
    int day,month,year;
    public:
    Constructor(int p,int q, int r){
        day=p;
        month=q;
        year=r;
       
        cout<<"Enter date in dd/mm/yy format: ";
        cin>>day;
        cin>>month;
        cin>>year;
    }
    void show(){
        cout<<"Todays date is: "<<day<<"/"<<month<<"/"<<year;
    }
};
int main(){
    Constructor c1(0,0,0);
    c1.show();
    return 0;
}
/* output
Enter date in dd/mm/yy format: 28
8
2025
Todays date is: 28/8/2025
*/
