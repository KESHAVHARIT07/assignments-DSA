#include<bits/stdc++.h>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter the string : ";
    cin>>str;

    char result[100];
    int x=1;
    for(int i=0;str[i]!='0';i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i]+32;    
        }

        if(str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u'){
            result[x] = str[i];
            x++;
        }
    }
    cout<<"String without vowels : "<<result<<endl;
    return 0;
}