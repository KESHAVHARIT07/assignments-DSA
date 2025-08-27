#include<bits/stdc++.h>
using namespace std;
int main(){
    int r, c, n1, n2;
    cout << "Enter rows and cols of matrices: ";
    cin>>r>>c;
    cout<<"Enter number of non-zero elements in Matrix A: ";
    cin>>n1;

    int A[n1][3];
    cout << "Enter row, col, val for Matrix A:\n";
    for (int i=0;i<n1;i++) {
        cin>>A[i][0]>>A[i][1]>>A[i][2];
    }

    cout<<"Enter number of non-zero elements in Matrix B: ";
    cin>>n2;

    int B[n2][3];
    cout <<"Enter row, col, val for Matrix B:\n";
    for (int i=0;i<n2;i++) {
        cin>>B[i][0]>>B[i][1]>>B[i][2];
    }

    cout<<"Result of Addition (Triplet form):\n";
    cout<<"Row Col Val\n";


    int i=0,j=0;
    while(i<n1 && j<n2){
        if(A[i][0] == B[j][0] && A[i][1] == B[j][1]) {
            cout<<A[i][0]<<" "<<A[i][1]<<" "<<A[i][2]+B[j][2]<<endl;
            i++;
            j++;
        } 
        else if(A[i][0]<B[j][0] || (A[i][0]==B[j][0] && A[i][1]<B[j][1])) {
            cout<<A[i][0]<<" "<<A[i][1]<<" "<<A[i][2]<<endl;
            i++;
        } 
        else{
            cout<<B[j][0]<<" "<<B[j][1]<<" "<<B[j][2]<<endl;
            j++;
        }
    }
    while(i<n1){
        cout<<A[i][0]<<" "<<A[i][1]<<" "<<A[i][2]<<endl;
        i++;
    }
    while(j<n2){
        cout<<B[j][0]<<" "<<B[j][1]<<" "<<B[j][2]<<endl;
        j++;
    }
    return 0;
}