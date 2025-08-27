#include<bits/stdc++.h>
using namespace std;

int main(){
    int stack[5], top = -1;
    int choice;
    int x;

    while(true){
        cout<<"-----Stack Menu-----"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. isEmpty"<<endl;
        cout<<"4. isFull"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. Peek"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter the choice : ";
        cin>>choice;
    

    switch(choice){
        case 1: 
        if(top==4){
            cout<<"Stack Overflow \n";
        }
        else{
            cout<<"Enter the element to push : ";
            cin>>x;
            stack[++top]=x;
        }
        break;

        case 2:
        if(top==-1){
            cout<<"Stack Underflow\n";
        }
        else{
            stack[top--];
        }
        break;

        case 3:
        if(top==-1){
            cout<<"stack empty\n";
        }
        else{
            cout<<"stack not empty\n";
        }
        break;

        case 4:
        if(top==4){
            cout<<"Stack is full\n";
        }
        else{
            cout<<"Stack not full\n";
        }

        case 5: 
        if(top==-1){
            cout<<"Stack is empty\n";
        }
        else{
            cout<<"Stack Elements : ";
            for(int i=top;i>=0;i--){
                cout<<stack[i]<<" ";
            }
            cout<<endl;
        }
        break;

        case 6: 
        if(top==-1){
            cout<<"Stack empty\n";
        }
        else{
            cout<<"Top element is : "<<stack[top]<<endl;
        }
        break;

        case 7: 
        cout<<"Exit program ";
        return 0;

        default: 
        cout<<"Invalid\n"<<endl;
    }
}
}