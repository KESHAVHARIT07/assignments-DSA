#include<iostream>
using namespace std;

void removeduplicates(int arr[],int &n){
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;){
            if(arr[i]==arr[j]){
                for(int k = j;k<n;k++){
                    arr[k] = arr[k+1];
                }
                n--;
                
            }
            else j++;
        }
    }
}
void displayarray(int arr[],int n){
    cout<<"Array without duplicates"<<endl;
    for(int i=0;i<n;i++){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
int main(){
    int n;
    int arr[100];
    cout<<"Enter the no of elements : ";
    cin >> n;
    cout<<"Enter "<<n<<" Elements";
    for(int i =0;i<n;i++){
        cin>>arr[i];
    } 
    
    removeduplicates(arr,n);
    displayarray(arr,n);
    return 0;
}