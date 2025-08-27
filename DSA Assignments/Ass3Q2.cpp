#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){

    string str = "Datastructure";
    stack<char> st;

    for(char ch : str){
        st.push(ch);
    }

    cout<<"Original String : "<<str<<endl;
    string rev = "";

    while(!st.empty()){
        rev = rev + st.top();
        st.pop();
    }

    cout<<"Reversed String : "<<rev<<endl;
    return 0;
}