#include<iostream>
using namespace std;
int main(){
    int matrix[10][10],rows,cols;
    cout<<"Enter the no of rows";
    cin>>rows;
    cout<<"Enter the no of cols";
    cin>>cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<rows;i++){
        int rowsum = 0;
        for(int j =0;j<cols;j++){
            rowsum += matrix[i][j];
        }
        cout<<"Row "<<i+1<<" sum "<<rowsum<<endl;
    }
    for(int j=0;j<cols;j++){
        int colsum = 0;
        for(int i=0;i<rows;i++){
            colsum += matrix[i][j];
        }
        cout<<"Column "<<j+1<<" sum "<<colsum<<endl;
    }
    return 0;
}
