#include<iostream>
#include<stack>
using namespace std;

void reverseStack(stack<int> &st){
    stack<int> aux;

    while(!st.empty()){
        aux.push(st.top());   // aux takes all the values of top iteratively 
        st.pop();               // and it keeps popping iteratively
        }
        swap(st, aux);
    }

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverseStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}