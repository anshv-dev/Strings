
//1859 Sorting the Sentence

class Solution {
public:
    string sortSentence(string s) {
        vector<string>v(10);
        string temp="";
        int count=0;
        int i=0;
        while(i<s.size()){
            if(s[i]==' '){
               int pos=temp[temp.size()-1]-'0';
               temp.pop_back();
               v[pos]=temp;
               temp.clear();
               count++;
            }else{
                temp+=s[i];
            }
            i++;
            
        }
        int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        v[pos]=temp;
        temp.clear();
        count++;
        for(int i=1;i<=count;i++){
            temp+=v[i];
            temp+=' ';
        }
        temp.pop_back();
        return temp;
    }
};