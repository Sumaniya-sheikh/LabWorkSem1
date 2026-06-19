// Write a C++ program to perform the following:
// a. Addition of two matrices
// b. Multiplication of two matrices

#include<iostream>
const int NUM=100;
using namespace std;

void input2DArray(int arr[NUM][NUM],int row,int col){
    cout<<"enter "<<row*col<<" elements to matrix:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}

void dispaly2DArray(int arr[NUM][NUM],int row,int col){
    for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}

void addMat(int mat1[NUM][NUM],int mat2[NUM][NUM],int sumMat[NUM][NUM],int row1,int col1,int row2,int col2){
    if (row1==row2 && col1==col2){
        for(int i=0;i<row1;i++){
            for(int j=0;j<col1;j++){
                sumMat[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }else{
        cout<<"Rows or Columns of both matrices is not same. So, addition is not possible";
    }
}

int main(){
    int row1,col1,row2,col2;
    int mat1[NUM][NUM], mat2[NUM][NUM];
    int sum[NUM][NUM];

    cout<<"enter no. of row in matrix 1: ";
    cin>>row1;
    cout<<"enter no. of col in matrix 1: ";
    cin>>col1;
    cout<<"enter no. of row in matrix 2: ";
    cin>>row2;
    cout<<"enter no. of col in matrix 2: ";
    cin>>col2;

    cout<<"enter elements to first matrix:"<<endl;
    input2DArray(mat1,row1,col1);
    cout<<"enter elements to second matrix:"<<endl;
    input2DArray(mat2,row2,col2);

    addMat(mat1,mat2,sum,row1,col1,row2,col2);
    
    if(row1==row2 && col1==col2){
        cout<<"Sum of matrices is:"<<endl;
        dispaly2DArray(sum,row1,col1);
    }
}