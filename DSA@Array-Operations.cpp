//CODE TO SET-CREATE-INSERSION-DELETION-DISPLAY OF AN ARRAY CREATED BY YASH PANDEY..........
#include<iostream>
using namespace std;

class myArray{   
    private:
        int total_size;
        int used_size;
        int *ptr; 
        int elementvalue;
        int indexvalue;
    public:
        myArray(int totalSize, int usedSize){ //THIS FUNCTION WILL CREATE AN ARRAY AND SET THE DATA INTO IT....
            total_size = totalSize;  
            used_size = usedSize;   
            ptr =(int *)malloc(totalSize*sizeof(int));  //THIS WILL CREATE AN DYNAMIC ARRAY FOR US.....
        }

        void setVal(void){ //FUNCTION TO INPUT ELEMENTS OF ARRAY FROM THE USER.....
            int n;
            for (int i =0; i<used_size; i++){
                cout<<"ENTER ELEMENT NUMBER "<<(i+1)<<" ::: ";
                cin>>n;
                (ptr)[i] = n; //THIS WILL SET THE NUMBER ENTERED BY THE USER TO THAT INDEX OF THE DYNAMIC ARRAY
            }   
        }

        int display(int usedsize){ //FUNCTION TO DISPLAY THE ELEMENTS OF ARRAY IN FORM OF ARRAY.......
            used_size=usedsize;
            cout<<endl;
            cout<<"YOUR ARRAY OF ELEMENT IS ::: {";
            for (int i = 0; i<used_size; i++){
                int r=used_size-1;
                if(i<r){
                    cout<<ptr[i]<<",";
                }
                if(i==r){
                    cout<<ptr[r]<<"}"<<endl;
                }
            }
        }
        
        int insertelement(int e,int f,int g){ //FUNCTION TO INSERT ELEMENT AT INDEX VALUE ENTERED BY THE USER...
            elementvalue = e;
            indexvalue = f;
            total_size =g; 
            if(used_size==total_size){ //IF ARRAY IS ALREADY FULL,THEN, NO INSERSION IS POSSIBLE..... 
                return 0;
            }
            if(used_size<total_size){ //IF ARRAY IS NOT FULL,THEN, INSERSION IS POSSIBLE..... 
                for (int i =total_size-1; i>=indexvalue; i--){
                    ptr[i+1]=ptr[i];
                }
                ptr[indexvalue]=elementvalue;
                return 1;
            }
        }
        
        int deleteelement(int x){
            indexvalue=x;
            if(used_size==0){
                return 0;
            }
            if(used_size>0){
                for (int i=indexvalue; i<total_size-1; i++){
                    ptr[i] = ptr[i + 1];
                } 
            }
        }
};

int main(){
    int a,b,c,d,e;
    cout<<"HELLO I AM YASH PANDEY"<<endl;
    cout<<"ENTER THE SIZE OF YOUR ARRAY ::: ";
    cin>>a;
    cout<<"HOW MANY ELEMENTS WILL YOU WILL ADD IN YOUR ARRAY ::: ";
    cin>>b;
    class myArray marks(a,b);
    marks.setVal(); 
    marks.display(b);
    cout<<"ENTER THE ELEMENT YOU WANT TO ADD IN ABOVE ARRAY ::: ";
    cin>>c;
    cout<<"ENTER THE INDEX OF THE ELEMENT WHERE YOU WANT TO ADD ELEMENT IN ABOVE ARRAY ::: ";
    cin>>d;
    int result=marks.insertelement(c,d,a);
    if(result==0){  
        cout<<"ARRAY IS FULL , NO INSERSION POSSIBLE"<<endl;
    }
    if(result==1){  
        b++;
        marks.display(b);
    }
    cout<<"ENTER THE INDEX OF THE ELEMENT WHERE YOU WANT TO REMOVE ELEMENT IN ABOVE ARRAY ::: ";
    cin>>e;
    int result1=marks.deleteelement(e);
    if(result==0){  
        cout<<"ARRAY IS EMPTY , NO DELETION POSSIBLE"<<endl;
    }
    if(result==1){  
        b--;
        marks.display(b);
    }
    cout<<endl;
    cout<<"HOPE YOU UNDERSTOOD THE CONCEPT"<<endl;
    cout<<"THANKYOU FOR USING ME"<<endl;
    return 0;
}