#include<iostream>
#include<cmath> //NESSECARRY HEADER FILE FOR PERFORMING MATH OPERATIONS IN C++ ....... 
using namespace std;

template<class T>
class vector{
    T a,b,c,d,e,f;
    public:
        vector(T u,T v,T w,T x,T y,T z){
            a=u,b=v,c=w,d=x,e=y,f=z; //SIMPLY AMAZING
            T p=(u*x)+(v*y)+(w*z);
            cout<<"THE DOT PRODUCT OF V1 AND V2 IS ::: "<<p<<endl;
            T q=(v*z)-(w*y);
            T r=(u*z)-(x*w);
            T s=(u*y)-(v*x);
            if(r>=0){
                cout<<"THE CROSS PRODUCT OF V1 AND V2 is ::: ("<<q<<")i +("<<(-r)<<")j +("<<s<<")k"<<endl;
            }
            if(r<0){
                cout<<"THE CROSS PRODUCT OF V1 AND V2 is ::: ("<<q<<")i + ("<<(-r)<<")j +("<<s<<")k"<<endl;
            }
        }
};

int main(){
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    long double u,v,w,x,y,z;
    cout<<"ENTER THE X-COMPONENT OF VECTOR 1 ::: ";
    cin>>u;
    cout<<"ENTER THE Y-COMPONENT OF VECTOR 1 ::: ";
    cin>>v;
    cout<<"ENTER THE Z-COMPONENT OF VECTOR 1 ::: ";
    cin>>w;
    cout<<"THE VECTOR V1 IS ::: ("<<u<<")i +("<<v<<")j +("<<w<<")k"<<endl;
    float a1=(u*u)+(v*v)+(w*w);
    cout<<"THE MODOLLUS OF ("<<u<<")i +("<<v<<")j +("<<w<<")k IS ::: "<<sqrt(a1)<<endl<<endl;
    cout<<"ENTER THE X-COMPONENT OF VECTOR 2 ::: ";
    cin>>x;
    cout<<"ENTER THE Y-COMPONENT OF VECTOR 2 ::: ";
    cin>>y;
    cout<<"ENTER THE Z-COMPONENT OF VECTOR 2 ::: ";
    cin>>z;
    cout<<"THE VECTOR V2 IS ::: ("<<x<<")i +("<<y<<")j +("<<z<<")k"<<endl;
    float a2=(x*x)+(y*y)+(z*z);
    cout<<"THE MODOLLUS OF ("<<x<<")i +("<<y<<")j +("<<z<<")k IS ::: "<<sqrt(a2)<<endl<<endl;
    cout<<"THE VALUE OF V1 + V2 IS ::: ("<<u+x<<")i +("<<v+y<<")j +("<<w+z<<")k"<<endl;
    cout<<"THE VALUE OF V1 - V2 IS ::: ("<<u-x<<")i +("<<v-y<<")j +("<<w-z<<")k"<<endl;
    cout<<"THE VALUE OF V2 - V1 IS ::: ("<<x-u<<")i +("<<y-v<<")j +("<<z-w<<")k"<<endl;
    vector<long double> yashpandey(u,v,w,x,y,z);
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}