class Solution {
public:
    string removeOccurrences(string s, string part) {
        int len = part.length();
        while(s.find(part)!= string::npos){
            s.erase(s.find(part), len);
        }
        return s;
    }
};