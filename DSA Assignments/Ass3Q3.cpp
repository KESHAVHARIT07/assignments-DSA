#include<bits/stdc++.h>
using namespace std;
int main(){

    string ex;
    cout << "Enter the expression : ";
    cin >> ex;

    stack<char> st;
    bool flag = true;

    for(char ch : ex){
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch==')' || ch=='}' || ch==']'){
            if(st.empty()){
                flag = false;
                break;
            }
            char top = st.top();
            st.pop();

            if((ch==')' && top!='(') || (ch=='}' && top!='{') || (ch==']' && top!='[')){
                flag = false;
                break;
            }
        }
    }

    if(!st.empty()) flag = false;

    if(flag == true){
        cout << "Balanced expression"<< endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }

    return 0;
}