#include<iostream>
using namespace std;


class shop{
    
    private:
        int product[100];
        int price[100];
        int counter;
    public:
        void setcounter(void){
            counter = 0;
        }
        void setdata(void);
        void displaydata(void);


};

void shop:: setdata(void){
    cout<<"enter item id: ";
    cin>>product[counter];
    cout<<"enter price: ";
    cin>>price[counter];
    counter++;
}

void shop:: displaydata(void){
    for(int i =0; i< counter ;i++){
        cout<<"item id:"<<product[i]<<" price:"<<price[i]<<endl;
    }
}

int main(){

    shop s1;
    s1.setcounter();
    s1.setdata();
    s1.setdata();
    s1.setdata();
    s1.setdata();
    s1.displaydata();
    return 0;
}