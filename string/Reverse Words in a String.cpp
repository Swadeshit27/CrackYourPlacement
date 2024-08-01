class Solution {
public:
    string reverseWords(string s) {
       string word="",ans="";
       for(int i=0;i<s.size();i++){
           if(s[i]==' '){
               if(word!=""){
                   ans=word+" "+ans;
               }
               word="";
           }
           else word+=s[i];
       }
       if(word!="")ans=word+" "+ans;
       ans.pop_back();
       return ans;

    }
};