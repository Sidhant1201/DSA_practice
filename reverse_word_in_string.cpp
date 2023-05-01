class Solution {
public:
    string reverseWords(string s) {
        int count = 0;
        for(int i =0; i< s.size(); i++){
            if(s[i]==' '){
                reverse(s.begin()+ i- count, s.begin()+i);
                count = 0;
                continue;
            }
            count++;

        }
        reverse(s.end()- count, s.end());
        return s;
    }
};