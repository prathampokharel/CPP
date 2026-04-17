#include<iostream>
#include<vector>
#include<stack>
using namespace std;

bool checkRedundancy(string& s){
stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]==')'){
            char top =st.top();
            st.pop();

        bool flag = true;
    
        while(!st.empty() && top!='('){
            if (top =='+' || top=='-' || top=='*' || top=='/')
            flag= false;
            
            top= st.top();
            st.pop();
}
if(flag==true)
return true;
        }
        else st.push(s[i]);
    }
    return false;
}

int main(){
    string s=" (a+b)";
    cout<<(checkRedundancy(s)?"true":"false");
    return 0;
}