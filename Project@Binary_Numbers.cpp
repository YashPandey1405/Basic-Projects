#include<iostream>
#include<string>
using namespace std;

class binary{
    public:
        string s;              //void is just used to tell our program that we are declaring an function
        void read(void);       //we can make this function private as well which will't allow us to change this..
        void check_bin(void);  //we can make this function private as well which will't allow us to change this..
        void compliment(void); //we can make this function private as well which will't allow us to change this..
        void display(void);    //we can make this function private as well which will't allow us to change this..
};

void binary :: read(void){ //function created by us to read/intake the input binary number
    cout<<"ENTER AN BINARY NUMBER ::: ";
    cin>>s;
    cout<<endl;
}

void binary :: check_bin(void){ //function created by us to check the input binary number is correct or not
    for (int i = 0; i < s.length(); i++){
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout<<"ENTERED NUMBER "<<s<<" IS NOT AN BINARY NUMBER"<<endl;
            exit(0); //used to break program at that stage end exit from the program
        }
    }
}

//if our number gets wrong by check_bin function, then this function will also not work
void binary :: compliment(void){
    check_bin(); 
    for (int i = 0; i < s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        else
            s.at(i)='0';
    }
}

//if our number gets wrong by check_bin function, then compliment function and display function will't work
void binary :: display(void){ 
    cout<<"SHOWING THE COMPLIMENT BINARY NUMBER OF YOUR INPUT VALUE ::: ";
    for (int i = 0; i < s.length(); i++){
        cout<<s.at(i);
    }
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
}

int main(){
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    binary b;
    b.read();
    b.check_bin();
    b.compliment();
    b.display();
    return 0;
}