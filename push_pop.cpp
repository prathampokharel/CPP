#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);  //stack push to enter values in stack
    st.push(2);
    st.push(3);
    st.push(4);     //---top---
    st.push(5);
    //Accessing top element
    cout<<"Top element: "<<st.top()<<endl;
    
    /*Popping an element
    st.pop();
    cout<<"Top element after pop: "<<st.top()<<endl;
    */

    //popping element until stack empty
    st.pop();

    while(!st.empty()){
        cout<< st.top()<<" ";
        st.pop();
    }

    return 0;
}
