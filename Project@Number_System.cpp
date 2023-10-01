#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

char hexadecimaltobinary(char m);

class binary{
    int a,b;
    public:
        void Binary_TO_Decimal(void){
            float n;
            cout<<"ENTER THE BINARY NUMBER ::: ";
            cin>>n;
            float a=n;
            int b=n;
            float c=a-b;
            int s=0,t=-1;
            float sum=0;
            while (b>0){
                int m=b%10;
                sum=sum+(m*pow(2,s));
                s++;
                b=b/10;
            }
            cout<<a<<" IN DECIMAL NUMBER SYSTEM IS ::: "<<sum<<endl;
        }
};

class octel{
    int a,b;
    public:
        void Octel_TO_Decimal(void){
            float n;
            cout<<"ENTER THE OCTEL NUMBER ::: ";
            cin>>n;
            float a=n;
            int b=n;
            float c=a-b;
            int s=0,t=-1;
            float sum=0;
            while (b>0){
                int m=b%10;
                sum=sum+(m*pow(8,s));
                s++;
                b=b/10;
            }
            cout<<a<<" IN DECIMAL NUMBER SYSTEM IS ::: "<<sum<<endl;
        }
};

class hexadecimal{
    int a,b;
    public:
        void Hexadecimal_TO_Binary(void){
            char arr[10];
            cout<<"ENTER THE HEXADECIMAL NUMBER ::: ";
            cin>>arr;
            int n=strlen(arr);
            cout<<arr<<" IN BINARY NUMBER SYSTEM IS ::: ";
            for(int i=0;i<n;i++){
                hexadecimaltobinary(arr[i]);
            }
        }
};

int main(){
    int a,b;
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"PLEASE TELL THE TYPE OF YOUR INPUT NUMBER"<<endl;
    cout<<"TYPE '1' FOR BINARY , '2' FOR OCTEL , '3' FOR DECIMAL , '4' FOR HEXADECIMAL"<<endl;
    cout<<"ENTER THE TYPE OF YOUR INPUT NUMBER ::: ";
    cin>>a;
    cout<<endl;
    if(a==1){
        binary binarynumber;
        cout<<"PLEASE TELL THE TYPE OF YOUR OUTPUT NUMBER"<<endl;
        cout<<"'1' FOR OCTEL , '2' FOR DECIMAL , '3' FOR HEXADECIMAL"<<endl;
        cout<<"ENTER THE TYPE OF YOUR OUTPUT NUMBER ::: ";
        cin>>b;
        cout<<endl;
        if(b==2){
            binarynumber.Binary_TO_Decimal();
        }
    }
    if(a==2){
        octel octelnumber;
        cout<<"PLEASE TELL THE TYPE OF YOUR OUTPUT NUMBER"<<endl;
        cout<<"'1' FOR BINARY , '2' FOR DECIMAL , '3' FOR HEXADECIMAL"<<endl;
        cout<<"ENTER THE TYPE OF YOUR OUTPUT NUMBER ::: ";
        cin>>b;
        cout<<endl;
        if(b==2){
            octelnumber.Octel_TO_Decimal();
        }
    }
    if(a==4){
        hexadecimal hexadecimalnumber;;
        cout<<"PLEASE TELL THE TYPE OF YOUR OUTPUT NUMBER"<<endl;
        cout<<"'1' FOR BINARY , '2' FOR OCTEL , '3' FOR DECIMAL"<<endl;
        cout<<"ENTER THE TYPE OF YOUR OUTPUT NUMBER ::: ";
        cin>>b;
        cout<<endl;
        if(b==1){
            hexadecimalnumber.Hexadecimal_TO_Binary();
        }
    }
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}

char hexadecimaltobinary(char m){
    switch (m){
    case '1':
        cout<<"0001 ";
        break;
    case '2':
        cout<<"0010 ";
        break;
    case '3':
        cout<<"0011 ";
        break;
    case '4':
        cout<<"0100 ";
        break;
    case '5':
        cout<<"0101 ";
        break;
    case '6':
        cout<<"0110 ";
        break;
    case '7':
        cout<<"0111 ";
        break;
    case '8':
        cout<<"1000 ";
        break;
    case '9':
        cout<<"1001 ";
        break;
    case 'A':
        cout<<"1010 ";
        break;
    case 'B':
        cout<<"1011 ";
        break;
    case 'C':
        cout<<"1100 ";
        break;
    case 'D':
        cout<<"1101 ";
        break;
    case 'E':
        cout<<"1110 ";
        break;
    case 'F':
        cout<<"1111 ";
        break;
    case '.':
        cout<<". ";
        break;
    }
}