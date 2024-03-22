//409 Longest Palindrome

class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>higher(26,0);
      for(int i=0;i<s.size();i++){
          if(s[i]>='a'){
              lower[s[i]-'a']++;
          }else{
              higher[s[i]-'A']++;
          }
     }
     int sum=0;
     bool odd=false;
     for(int i=0;i<26;i++){
         if(lower[i]%2==0){
             sum+=lower[i];
         }else{
             sum+=lower[i]-1;
             odd=true;
         }
         if(higher[i]%2==0){
             sum+=higher[i];
         }else{
             sum+=higher[i]-1;
             odd=true;
         }
     }
     if(odd==true){
         return sum+1;
     }else{
         return sum;
     }

    }
};