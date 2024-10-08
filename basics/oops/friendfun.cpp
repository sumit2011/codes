#include<bits/stdc++.h>
using namespace std;


class complex {
     
     int a ;
     int b;
     
     public:
        void setnumber(int n1 , int n2){
            a = n1;
            b = n2;
        }

        friend complex sumcomplex(complex o1 , complex o2);
    
        void printnumber() {
            cout<<"your number is"<<a <<" + "<<b<<"i"<<endl;
        }

}