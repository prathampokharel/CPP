#include <iostream>
#include <stack>

using namespace std;

int main() {
stack<int>st;
    st.push(1);
    st.push(2);
    cout<<"Size of stack: "<<st.size()<<endl;

    st.pop();
    cout<<"Size of stack: "<<st.size()<<endl;

     st.pop();
    cout<<"Size of stack: "<<st.size()<<endl;
    
    
    return 0;
}