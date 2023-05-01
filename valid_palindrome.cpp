class Solution {
private:
    bool isValid(char ch){
    if( (ch>= 'a'&& ch <='z')||(ch>='A' && ch<= 'Z')||(ch >='0' && ch <='9') )return true;
    
        return false;

}
    bool checkPalindrome(string temp){
        int s = 0;
        int e = temp.size()-1;
        while(s<= e){
            if(temp[s++]!= temp[e--]) return false;

        }
        return true;
    }
public:
    bool isPalindrome(string s) {
       string temp = "";
       for(int i = 0; i< s.size(); i++){
           if(isValid(s[i])){
               temp.push_back(s[i]);
           }
       }
       transform(temp.begin(), temp.end(), temp.begin(), ::tolower);
       return checkPalindrome(temp);
    }
    
        
};