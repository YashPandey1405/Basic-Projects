#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"ENTER THE NUMBER ::: ";
    cin>>a;
    cout<<"ENTER THE NUMBER ::: ";
    cin>>b;
    cout<<"ENTER THE NUMBER ::: ";
    cin>>c;
    cout<<"ENTER THE NUMBER ::: ";
    cin>>d;
    // cout<<"THE GREATEST NUMBER IS ::: "<<a;
    cout<<"ENTERED VALUES ARE ::: {"<<a<<" , "<<b<<" , "<<c<<" , "<<d<<" }"<<endl;
    if(a>b){
        if(a>c){
            if(a>d){
                cout<<"THE GREATEST NUMBER IS ::: "<<a<<endl;
            }
            if(a<d){
                cout<<"THE GREATEST NUMBER IS ::: "<<d;
            }
        }
        if(a<c){
            if(c>d){
                cout<<"THE GREATEST NUMBER IS ::: "<<c;
            }
            if(c<d){
                cout<<"THE GREATEST NUMBER IS ::: "<<d;
            }
        }
    }
    if(a<b){
        if(b>c){
            if(b>d){
                cout<<"THE GREATEST NUMBER IS ::: "<<b;
            }
            if(b<d){
                cout<<"THE GREATEST NUMBER IS ::: "<<d;
            }
        }
        if(b<c){
            if(c>d){
                cout<<"THE GREATEST NUMBER IS ::: "<<c;
            }
            if(c<d){
                cout<<"THE GREATEST NUMBER IS ::: "<<d;
            }
        }
    } 
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl; 
    return 0;
}