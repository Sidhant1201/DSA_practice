#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    
    for(int i =1; i< 5; i = i+2){
        int temp = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = temp;
    }
    for(auto x: arr) cout<< x<<" ";
    return 0;
}