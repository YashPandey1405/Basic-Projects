#include<iostream>
using namespace std;

char tictacboard(char arr[10]){
    cout<<"   "<<arr[0]<<"   |   "<<arr[1]<<"   |   "<<arr[2]<<"  "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"   "<<arr[3]<<"   |   "<<arr[4]<<"   |   "<<arr[5]<<"  "<<endl;
    cout<<"------------------------"<<endl;
    cout<<"   "<<arr[6]<<"   |   "<<arr[7]<<"   |   "<<arr[8]<<"  "<<endl;
    cout<<endl;
    return 0;
}

char player1(char arr[10],string x){
    int a;
    cout<<x<<" YOUR TURN, ENTER YOUR ENTRY ::: ";
    cin>>a;
    int i=a-1;
    arr[i]='X';
    tictacboard(arr);
}

char player2(char arr[10],string y){
    int b;
    cout<<y<<" YOUR TURN, ENTER YOUR ENTRY ::: ";
    cin>>b;
    int j=b-1;
    arr[j]='O';
    tictacboard(arr);
}

int main() {
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"LET's PLAY A GAME OF TIC TAC TOE i.e ZERO-KATTA"<<endl;
    int a,b,c;
    string x,y;
    char arr[10]={'1','2','3','4','5','6','7','8','9'};
    cout<<"ENTER THE NAME OF PLAYER 1 ::: ";
    cin>>x;
    cout<<"ENTER THE NAME OF PLAYER 2 ::: ";
    cin>>y;
    cout<<"THE SYMBOL OF "<<x<<" IS ::: 'X' WHILE THE SYMBOL OF "<<y<<" IS ::: 'O'"<<endl;
    cout<<endl;
    tictacboard(arr);
    player1(arr,x);
    player2(arr,y);
    player1(arr,x);
    player2(arr,y);
    player1(arr,x);
    player2(arr,y);
    player1(arr,x);
    player2(arr,y);
    player1(arr,x);
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl; 
    return 0;
}