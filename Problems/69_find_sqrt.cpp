class Solution {
public:
    int mySqrt(int x) {
        int s = 0; 
        int ans = 1;
        int e = x/2;
        long long mid = s + (e-s)/2;
        while(s<=e){
            mid = s+ (e-s)/2;
            if(mid*mid <=x){
                if(abs(x- (mid*mid))<= abs(x- (ans*ans))){
                    ans= mid;
                }
            }
            if(mid*mid <x){
                s= mid+1;
            }
            else{
                e= mid-1;
            }
        }
        return ans;
    }
};