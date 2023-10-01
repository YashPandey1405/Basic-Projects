#include<iostream>
#include<stdlib.h> //NESSECARRY HEADER FILE FOR USING rand() FUNCTION IN C/C++ ------------>1
#include<time.h>   //NESSECSRRY HEADER FILE TO GET NEW RANDOM VALUE AT EVERY SECOND ------->2
using namespace std;

int snakeWaterGun(int a,int b){
    if(a==b){
        return 0;
    }
    if(a==1 && b==2){
        return -1;
    }
    if(a==2 && b==1){
        return 1;
    }
    if(a==1 && b==3){
        return 1;
    }
    else if(a==3 && b==1){
        return -1;
    }
    if(a==2 && b==3){
        return -1;
    }
    else if(a==3 && b==2){
        return 1;
    }
}

int main(){
    int a,b;
    string x,y;
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"LET'S PLAY GAME OF ROCK-PAPER-SCIZZOR BETWEEN YOU AND COMPUTER AS OPPONENT"<<endl;
    cout<<"ENTER '1' FOR ROCK, '2' FOR PAPER & '3' FOR SCIZZOR ::: ";
    cin>>a;
    cout<<endl;
    if(a==1){
        x="ROCK";
    }
    if(a==2){
        x="PAPER";
    }
    if(a==3){
        x="SCIZZOR";
    }
    srand(time(0)); //WE USE THIS BECAUSE OF 2 WHICH WILL PROVIDE US DIFFERENT RANDOM VALUE AT EVERY NEW SECOND
    int number=rand()%100+1; //WILL GENERATE RANDOM VALUE BETWEEN 1 TO 100 AND NEW VALUE AT EVERY NEW SECOND
    if(number<33){
        b=1;
        y="ROCK";
    }
    else if(number>=33 && number<=66){
        b=2;
        y="PAPER";
    }
    else{
        b=3;
        y="SCIZZOR";
    }
    int result = snakeWaterGun(a,b);
    cout<<"YOU CHOOSE "<<x<<" WHILE COMPUTER CHOOSE "<<y<<endl;
    if(result==0){
        cout<<"GAME DRAW, YOU CAN REMATCH AGAIN"<<endl;
    }
    if(result==1){
        cout<<"CONGRATULATIONS, YOU WON THE MATCH !!! "<<endl;
    }
    if(result==(-1)){
        cout<<"YOU LOST THE MATCH !!!"<<endl;
    }
    // cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    // cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}