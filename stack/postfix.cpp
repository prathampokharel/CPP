#include<iostream>
#include<stack>
#include<vector>
#include<cmath>
using namespace std;

int floorDiv(int x, int y){
    if(x*y<0 && x%y !=0)
    return (x/y)-1;
    return x/y;
}
int evaluatePostfix(vector<string>& arr){
    stack<int> st;

    //main logic
    for(string token: arr){
        //isdigit checks if its a number and another condition checks if its a negative number
        if(isdigit(token[0]) || (token.size()>1 && token[0] == '-')){
            st.push(stoi(token)); //stoi means string to integer... converting token from string to integer 
        }

        else{
            int a = st.top(); st.pop();
            int b= st.top(); st.pop();

            if(token=="+") st.push(b+a);
            else if(token=="-") st.push(b-a);
            else if(token=="*") st.push(b*a);
            else if(token=="/") st.push(floorDiv(b,a));
            else if(token=="^") st.push((int)pow(b,a));
        }
    }
    return st.top();
}
int main(){
vector<string> arr={"2","3","1","*","+","9","-"};
cout<<evaluatePostfix(arr);
}
