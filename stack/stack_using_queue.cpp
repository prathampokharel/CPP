#include<iostream>
#include<queue>
using namespace std;


class myStack{
    queue<int> q;

    public:
    void push(int x){
        q.push(x);

        int sz= q.size();
        for(int i=0; i< sz-1; i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        if(!q.empty())
        q.pop();
    }

    int top(){
        if(q.empty())
        return -1;
        return q.front();
    }

    int size(){
        return q.size();
    }
    

};
int main(){
    myStack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout<<st.top()<< endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    st.pop();
    cout<<st.top()<<endl;
    cout<<"size: "<<st.size()<<endl;
    return 0;

}