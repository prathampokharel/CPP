#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    
    //Accessing top element
    cout<<"Top element: "<<st.top()<<endl;
    
    //Popping an element
    st.pop();
    cout<<"Top element after pop: "<<st.top()<<endl;
    
    return 0;
}
