#include<iostream>
using namespace std;

int main(){
    float arr1[]={1,2,3,4};
    float arr2[]={1,3,5,7};
    float arr3[4],arr4[4],arr5[4],arr6[4],arr7[4],arr8[4];  
    for(int i = 0; i<4; i++){
        arr3[i]=arr1[i]+arr2[i];
        arr4[i]=arr1[i]-arr2[i];
        arr7[i]=arr2[i]-arr1[i];
        arr5[i]=arr1[i]*arr2[i];
        arr6[i]=arr1[i]/arr2[i];
        arr8[i]=arr2[i]/arr1[i];
    }
    cout<<"arr1 = {1,2,3,4}"<<endl;
    cout<<"arr2 = {1,3,5,7}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr1 + arr2 ::: {"<<arr3[0]<<","<<arr3[1]<<","<<arr3[2]<<","<<arr3[3]<<"}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr1 - arr2 ::: {"<<arr4[0]<<","<<arr4[1]<<","<<arr4[2]<<","<<arr4[3]<<"}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr2 - arr1 ::: {"<<arr7[0]<<","<<arr7[1]<<","<<arr7[2]<<","<<arr7[3]<<"}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr1 * arr2 ::: {"<<arr5[0]<<","<<arr5[1]<<","<<arr5[2]<<","<<arr5[3]<<"}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr1 / arr2 ::: {"<<arr6[0]<<","<<arr6[1]<<","<<arr6[2]<<","<<arr6[3]<<"}"<<endl;
    cout<<"THE RESULTANT ARRAY OF arr2 / arr2 ::: {"<<arr8[0]<<","<<arr8[1]<<","<<arr8[2]<<","<<arr8[3]<<"}"<<endl;
    return 0;
}