//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	string removeDuplicates(string str) {
	    string s="";
	   vector<char>temp(123, true);
	   for(int i=0;i<str.size();i++){
	       if(temp[str[i]]){
	           s+=str[i];
	           temp[str[i]]=false;
	       }
	   }
	   return s;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends