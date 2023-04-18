class Solution {
public:
    int bitwiseComplement(int n) {

        //edge case
        if(n ==0) return 1;
        
        int mask = 0;
        int temp = n;
        while(temp!=0){
            mask = mask<< 1;
            mask = mask|1;
            temp= temp>>1;
        }
        int ans = mask&(~n);
        return ans;
    }
};