#include<iostream>
#include<cmath> //NESSECARRY HEADER FILE FOR PERFORMING MATH OPERATIONS IN C++ ....... 
using namespace std;

int factorial(int n){ 
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);
}

class simplecalculator{
    protected:
        int a;
    public:
        void simplemaths(void){
            cout<<"SIMPLE_CALCULATOR ENABLED"<<endl;
            cout<<"TYPE '1' FOR ADD, '2' FOR SUB, '3' FOR PRODUCT, '4' FOR DIVIDE AND 5 FOR ALL ::: ";
            cin>>a;
            cout<<endl;
            float m,n;
            cout<<"ENTER THE FIRST NUMBER ::: ";
            cin>>m;
            cout<<"ENTER THE SECOND NUMBER ::: ";
            cin>>n;
            cout<<endl;
            if((a==1) || (a==5)){
                cout<<"USING SIMPLE_CALCULATOR FOR ADDITION OF 2 NUMBERS"<<endl;
                float o=m+n;
                cout<<"THE ADDITION OF "<<m<<" WITH "<<n<<" is "<<o<<endl;
                cout<<endl;
            }

            if((a==2) || (a==5)){
                cout<<"USING SIMPLE_CALCULATOR FOR SUBTRACTION OF 2 NUMBERS"<<endl;
                float o=m-n;
                float p=n-m;
                cout<<"THE SUBTRACTION OF "<<m<<" BY "<<n<<" is "<<o<<endl;
                cout<<"THE SUBTRACTION OF "<<n<<" BY "<<m<<" is "<<p<<endl;
                cout<<endl;
            }

            if((a==3) || (a==5)){
                cout<<"USING SIMPLE_CALCULATOR FOR PRODUCT OF 2 NUMBERS"<<endl;
                float o=m*n;
                cout<<"THE PRODUCT OF "<<m<<" WITH "<<n<<" is "<<o<<endl;
                cout<<endl;
            }

            if((a==4) || (a==5)){
                cout<<"USING SIMPLE_CALCULATOR FOR DIVISION OF 2 NUMBERS"<<endl;
                float o=m/n;
                float p=n/m;
                cout<<"THE DIVISION OF "<<m<<" BY "<<n<<" is "<<o<<endl;
                cout<<"THE DIVISION OF "<<n<<" BY "<<m<<" is "<<p<<endl;
                cout<<endl;
            }
        }
};

class scientificcalculator{
    protected:
        int a;
    public:
        void scientificmaths(void){
            cout<<"SCIENTIFIC_CALCULATOR ENABLED"<<endl;
            cout<<"TYPE '1' FOR FACTORIAL, '2' FOR POWER OF NUMBER, '3' FOR POWER OF INVERSE AND '4' FOR TRIGONOMETRY ";
            cout<<"AND \n '5' FOR SQUARE ROOT OF A NUMBER ::: ";
            cin>>a;
            if(a==1){
                cout<<"SCIENTIFIC_CALCULATOR FOR FACTORIAL ENABLED"<<endl;
                int n;
                cout<<"ENTER THE NUMBER FOR FACTORIAL CALCULATION ::: ";
                cin>>n;
                factorial(n);
                cout<<"THE FACTORIAL OF "<<n<<" IS ::: "<<factorial(n)<<endl;
                cout<<endl;
            }    

            if(a==2){
                cout<<"SCIENTIFIC_CALCULATOR FOR POWER OF NUMBER ENABLED"<<endl;
                int m,n;
                cout<<"ENTER THE VALUE OF BASE ::: ";
                cin>>m;
                cout<<"ENTER THE VALUE OF POWER ::: ";
                cin>>n;
                int i=1;
                int j=1;
                while(i<=n){
                    j=j*m;
                    i++;    
                }
                cout<<"THE VALUE OF "<<m<<" RAISED TO POWER "<<n<<" IS ::: "<<j<<endl;
                cout<<endl;
            }

            if(a==3){
                cout<<"SCIENTIFIC_CALCULATOR FOR POWER OF INVERSE ENABLED"<<endl;
                long double m,n;
                int o;
                cout<<"ENTER THE NUMBER FOR INVERSE CALCULATION ::: ";
                cin>>m;
                cout<<"ENTER THE VALUE OF POWER OF INVERSE (ONLY INTEGER VALUES) ::: ";
                cin>>o;
                int i=1;
                long double j=1;
                while(i<=o){
                    j=j*m;
                    i++;  
                }  
                n=1.0/j;
                cout<<"THE INVERSE OF "<<m<<" RAISED TO POWER "<<o<<" IS ::: "<<n<<endl;
                cout<<endl;
            }

            if(a==4){
                cout<<"SCIENTIFIC_CALCULATOR FOR TRIGONOMETRY ENABLED"<<endl;
                cout<<endl;
                cout<<"ENTER THE ARGUMENT IN TERMS OF PIE VALUES ONLY i.e. pie=3.14, (pie/2)=1.57 etc."<<endl;                
                float a;
                cout<<"ENTER THE AGRUMENT IN RADIANS ::: ";
                cin>>a;
                float w=a/3.14;
                cout<<"ANGLE ENTERED BY YOU IN TERMS OF RADIANS(PIE) IS ::: "<<w<<" pie "<<endl;
                float b=w*180;
                cout<<"ANGLE ENTERED BY YOU IN TERMS OF DEGREE IS ::: "<<round(b)<<" degree "<<endl;
                cout<<endl;
                cout << "The value of sin("<<a<<") is ::: " <<sin(a)<<" (APPROX)"<<endl;
                cout << "The value of cos("<<a<<") is ::: " <<cos(a)<<" (APPROX)"<<endl;
                cout << "The value of tan("<<a<<") is ::: " <<tan(a)<<" (APPROX)"<<endl;
                cout << "The value of cosec("<<a<<") is ::: "<<(1.0/sin(a))<<" (APPROX)"<<endl; 
                cout << "The value of sec("<<a<<") is ::: " <<(1.0/cos(a))<<" (APPROX)"<<endl; 
                cout << "The value of cot("<<a<<") is ::: " <<(1.0/tan(a))<<" (APPROX)"<<endl;
                cout<<endl;
            }
            
            if(a==5){
                cout<<"SCIENTIFIC_CALCULATOR FOR SQUARE ROOT OF A NUMBER ENABLED"<<endl;
                int a;
                cout<<"ENTER THE NUMBER ::: ";
                cin>>a;
                cout<<"THE SQUARE ROOT OF "<<a<<" IS ::: "<<sqrt(a)<<endl;
                cout<<endl;
            }
        }
};

int main(){
    int j;
    simplecalculator simple;
    scientificcalculator scientific;
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"DO YOU WANT TO USE SIMPLE_CALCULATOR OR SCIENTIFIC_CALCULATOR"<<endl;
    cout<<endl;
    cout<<"TYPE '1' FOR SIMPLE_CALCULATOR AND '2' FOR SCIENTIFIC_CALCULATOR ::: ";
    cin>>j;
    if (j==1){
        simple.simplemaths();
    }
    if(j==2){
        scientific.scientificmaths();
    }
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}