#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    if(ch>='A' && ch<='Z'){
        ch = ch+32;
    }
    cout<<"Lowercase Character : "<<ch<<endl;

    return 0;
}