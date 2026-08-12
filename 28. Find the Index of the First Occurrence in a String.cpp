class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            if(haystack[i]==needle[0]&&haystack.length()>=needle.length()){
                for(int j=i;j<i+needle.length();j++){
                    if(haystack[j]!=needle[j-i]){
                        break;
                    }else if(haystack[j]==needle[j-i]&&j==i+needle.length()-1){
                        return i;
                    }
                }
            }
        }
        return -1;
    }
};