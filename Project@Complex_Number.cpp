#include<iostream>
using namespace std;

class yash{
    int a,b;
    friend class complexnumber;
    public:
        int complex(int x,int y){
            a=x;
            b=y;
            if(y>=0){
                cout<<"YOUR FIRST COMPLEX NUMBER IS ::: "<<x<<" + "<<y<<"i"<<endl;
            }
            if(y<0){
                cout<<"YOUR FIRST COMPLEX NUMBER IS ::: "<<x<<" - "<<(-y)<<"i"<<endl;
            }
        }
};

class coding{
    int c,d;
    friend class complexnumber;
    public:
        int complex(int x,int y){
            c=x;
            d=y;
            if(y>=0){
                cout<<"YOUR SECOND COMPLEX NUMBER IS ::: "<<x<<" + "<<y<<"i"<<endl;
            }
            if(y<0){
                cout<<"YOUR SECOND COMPLEX NUMBER IS ::: "<<x<<" - "<<(-y)<<"i"<<endl;
            }
        }
};

class complexnumber{
    public:
        int p,q,r,s;  
        int sum(int p,int q,int r,int s){
            int m=p+r;
            int n=q+s;
            cout<<endl;
            if(n>=0){
                cout<<"THE SUM OF ABOVE 2 COMPLEX NUMBER IS ::: "<<m<<" + "<<n<<"i"<<endl;
            }
            if(n<0){
                cout<<"THE SUM OF ABOVE 2 COMPLEX NUMBER IS ::: "<<m<<" - "<<(-n)<<"i"<<endl;
            }
        }

        int diff(int p,int q,int r,int s){
            int m=p-r;
            int n=q-s;
            if (n>=0){
                cout<<"THE DIFF OF ABOVE 2 COMPLEX NUMBER IS ::: "<<m<<" + "<<n<<"i"<<endl;
            }
            if (n<0){
                cout<<"THE DIFF OF ABOVE 2 COMPLEX NUMBER IS ::: "<<m<<" - "<<(-n)<<"i"<<endl;
            }
        }

        int multiply(int p,int q,int r,int s){
            int e=(p*r)-(q*s);
            int f=(p*s)+(q*r);
            if(f>=0){
                cout<<"THE PRODUCT OF ABOVE 2 COMPLEX NUMBER IS ::: "<<e<<" + "<<f<<"i"<<endl;
            }
            if(f<0){
                cout<<"THE PRODUCT OF ABOVE 2 COMPLEX NUMBER IS ::: "<<e<<" - "<<(-f)<<"i"<<endl;
            }
        }

        int divide(int p,int q,int r,int s){ 
            float m=(p*r)+(s*q);
            float n=(q*r)-(p*s);
            float o=(r*r)+(s*s);
            float x=(m/o);
            float y=(n/o);
            float z=x+y;
            if (y>=0){
                cout<<"THE VALUE OF DIVIDE OF COMPLEX NUMBER 1 BY 2 IS ::: "<<x<<" + "<<y<<"i"<<endl;
            }
            if (y<0){
                cout<<"THE VALUE OF DIVIDE OF COMPLEX NUMBER 1 BY 2 IS ::: "<<x<<" - "<<(-y)<<"i"<<endl;
            }
        }

        int compliment(int p,int q,int r,int s){
            if(q>=0){
                cout<<"THE COMPLIMENT OF 1st COMPLEX NUMBER IS ::: "<<p<<" - "<<q<<"i"<<endl;
            }
            if(q<0){
                cout<<"THE COMPLIMENT OF 1st COMPLEX NUMBER IS ::: "<<p<<" + "<<(-q)<<"i"<<endl;
            }
            if(s>=0){
                cout<<"THE COMPLIMENT OF 2nd COMPLEX NUMBER IS ::: "<<r<<" - "<<s<<"i"<<endl;
            }
            if(s<0){
                cout<<"THE COMPLIMENT OF 2nd COMPLEX NUMBER IS ::: "<<r<<" + "<<(-s)<<"i"<<endl;
            }
        }
};

int main(){
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    int a,b,c,d;
    cout<<"ENTER THE REAL PART OF YOUR 1st COMPLEX NUMBER : ";
    cin>>a;
    cout<<"ENTER THE IMAGINARY PART OF YOUR 1st COMPLEX NUMBER : ";
    cin>>b;
    yash z1;
    z1.complex(a,b);
    cout<<"ENTER THE REAL PART OF YOUR 2nd COMPLEX NUMBER : ";
    cin>>c;
    cout<<"ENTER THE IMAGINARY PART OF YOUR 2nd COMPLEX NUMBER : ";
    cin>>d; 
    coding z2;
    z2.complex(c,d);
    complexnumber p;
    p.sum(a,b,c,d);
    p.diff(a,b,c,d);
    p.multiply(a,b,c,d);   
    p.divide(a,b,c,d);
    p.compliment(a,b,c,d);
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}