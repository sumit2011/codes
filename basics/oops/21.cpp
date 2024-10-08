#include<iostream>
using namespace std;

class Employee{

    private:
        int a, b , c;

    public:
        void setdata(int a, int b , int c);
        void getdata(){
            cout<<a<<b<<c<<endl;
        }

};

// scope resolution operator
void Employee ::  setdata(int a , int b , int c){
            this->a = a;
            this->b = b;
            this->c = c;
        }


int main(){

    Employee e1;
    e1.setdata(2,4,6);
    e1.getdata();

    return 0;
}