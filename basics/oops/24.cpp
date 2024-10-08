#include<iostream>
using namespace std;

class Employee{
    int id;
    static int count;

    public:
        void setdata(void){
            cout<<"enter the id"<<endl;
            cin>>id;
            count++;
        }

        void getdata(void){
            cout<<"the id id"<<id<<" "<<count<<endl;
        }
};


int Employee:: count=1000; // default value 0


int main(){

    Employee e1 , e2, e3;
    e1.setdata();
    e1.getdata();

    e2.setdata();
    e2.getdata();

    e3.setdata();
    e3.getdata();
    return 0;
}