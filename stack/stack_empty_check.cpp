#include <iostream>
#include<stack>
using namespace std;

int main() {
    stack<int> st;
    if(st.empty()){
        cout<<"Stack is empty"<<endl;

    st.push(10);
    st.push(20);
    if(!st.empty()){
        cout<<"Stack is not empty.\n Top element: "<<st.top();
    }
    }
    return 0;
}