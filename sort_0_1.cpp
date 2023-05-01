#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];
    for(int i = 0; i< 10; i++){
        int temp;
        cin>> temp;
        arr[i] = temp;
    }
    int low = 0; 
    int high = 9;
    while(low<= high){
        while(arr[low]!=1){
            low++;
        }
        while(arr[high]!=0){
            high--;
        }
        if(low< high){
            arr[low] = 0;
        arr[high] = 1;
        low++;
        high--;
        }
        
        

    }
    for(auto x: arr){
            cout<< x<<" ";
        }
    return 0;
}