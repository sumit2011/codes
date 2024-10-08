#include<iostream>
using namespace std;


// array of objects

class Employee {
    int id;
    int salary;

    public:
     void setid(void){
        salary = 122;
        cout<<"enter id"<<endl;
        cin>>id;
     }

     void getid(void){
        cout<<"the id is "<<id<<endl;
     }

};


int main(){

    Employee rohan;
    // rohan.setid();
    // rohan.getid();

    Employee fb[4];
    for(int i =0; i< 4; i++){
        
        fb[i].setid();
        fb[i].getid();
    }

    return 0;
}