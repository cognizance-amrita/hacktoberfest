#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s) {
    stack<char> st;
    for(auto c:s){
        switch (c){
            case '(':
            case '{':
            case '[':
                  st.push(c);
                   break;
            case '}':
                if(st.empty() || st.top()!='{' )
                    return "false";
                st.pop();
                break;
            case ']':
                if(st.empty() || st.top()!='[')
                    return "false";
                st.pop();
                break;
            case ')':
                if(st.empty() || st.top()!='(')
                    return "false";
                st.pop();
                break;
            default: break;
        }
    }
    return st.empty() ? "true":"false";

}
int main(){
   int t;
   cin>>t;
   while(t--){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;
   }
   return 0;
}
