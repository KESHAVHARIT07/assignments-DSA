#include<bits/stdc++.h>
using namespace std;
int main(){
    int r1,c1,n1,r2,c2,n2;
    cout<<"Enter rows, cols and non-zero count for Matrix A: ";
    cin>>r1>>c1>>n1;
    int A[n1][3];
    cout<<"Enter row col val for Matrix A:\n";
    for(int i=0;i<n1;i++) {
        cin>>A[i][0]>>A[i][1]>>A[i][2];
    }

    cout<<"Enter rows, cols and non-zero count for Matrix B: ";
    cin>>r2>>c2>>n2;
    int B[n2][3];
    cout<<"Enter row col val for Matrix B:\n";
    for(int i=0;i<n2;i++) {
        cin>>B[i][0]>>B[i][1]>>B[i][2];
    }

    if(c1!=r2) {
        cout<<"Multiplication not possible!\n";
        return 0;
    }

    cout<<"Result of Multiplication"<<endl;
    cout<<"Row Col Val\n";

    
    for (int i=0;i<n1;i++) {
        for (int j=0;j<n2;j++) {
            if(A[i][1] == B[j][0]) { 
                cout<<A[i][0]<<" "<<B[j][1]<<" "<<A[i][2]*B[j][2]<<endl;
            }
        }
    }
    return 0;
}