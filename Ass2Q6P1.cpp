#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,n;
    cout<<"Enter rows ,cols and number of non zero elements : ";
    cin>>r>>c>>n;

    int arr[n][3];
    cout<<"Enter rows ,cols and value of non zero elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i][0]>>arr[i][1]>>arr[i][2];
    }

    cout<<"Row Col Value"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i][0]<<"   "<<arr[i][1]<<"   "<<arr[i][2]<<" "<<endl;
    }

    for (int i=0;i<n;i++) {
        int temp = arr[i][0];
        arr[i][0] = arr[i][1];
        arr[i][1] = temp;
    }
    cout<<"Transpose : \n";
     cout<<"Row Col Value"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i][0]<<"   "<<arr[i][1]<<"   "<<arr[i][2]<<" "<<endl;
    }
    return 0;
}