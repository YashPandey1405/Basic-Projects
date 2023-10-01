#include<iostream>
using namespace std;

class yash{
    private:
        int a;
    public:
        int setnumber(int x){
            a=x;
        }
        int printnumber(int x){
            for (int i = 0; i < 10; i++){
                cout<<a<<" X "<<(i+1)<<" = "<<(a*(i+1))<<endl;
            }
        }
};

int main(){
    int a;
    cout<<"ENTER THE NUMBER FOR MULTIPLICATION TABLE ::: ";
    cin>>a;
    cout<<"DISPLAYING MULTIPLICATION TABLE OF "<<a<<" ::: "<<endl;
    yash yashpandey;
    yashpandey.setnumber(a);
    yashpandey.printnumber(a);
    return 0;
}