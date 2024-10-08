#include<iostream>

using namespace std;

// class declaration
class Emplooyee{

} harry, rohan, lovish;


//nexting of member function
class binary{
    string s;

    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display(void);
};

void binary :: read(void){
    cout<<"enter a number ";
    cin>>s;
}

void binary :: chk_bin(void){
    for(int i =0 ; i<s.length() ; i++){
        if(s.at(i) != '0' && s.at(i) != '1'  ){
            cout<<"incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(void){
    chk_bin();   // nexting of member function
    for(int i =0 ; i<s.length() ; i++){
        if(s.at(i) == '0'  ){
            s.at(i) = '1';
        }
        else if(s.at(i) == '1'){
            s.at(i) = '0';
        }
    }
}

void binary :: display(void){
    for(int i =0 ; i<s.length() ; i++){
        cout<<s.at(i);
    }
    cout<<endl;
}


int main(){
    
    binary b;
    b.read();
    // b.chk_bin();
    b.ones_complement();
    b.display();
    return 0;
}