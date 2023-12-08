#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[5] = {1,2,1, 3, 3};
    int sum =0;
    for(int x: arr){
        sum ^= x;
        cout<<"x is "<<x<<"sum is" <<sum<<endl;
    }

    return 0;
}