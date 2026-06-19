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

void mulMat(int mat1[NUM][NUM],int mat2[NUM][NUM],int mulMat[NUM][NUM],int row1,int col1,int row2,int col2){
    if (col1==row2){
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                mulMat[i][j]=0;
                for(int k=0;k<col1;k++){
                    mulMat[i][j]+=mat1[i][k]*mat2[k][j];
                }
            }
        }
    }else{
        cout<<"Rows of mat2 is not equal to Columns of mat1. So, multiplication is not possible";
    }
}

int main(){
    int row1,col1,row2,col2;
    int mat1[NUM][NUM], mat2[NUM][NUM];
    int mul[NUM][NUM];

    cout<<"enter no. of row in matrix 1: ";
    cin>>row1;
    cout<<"enter no. of col in matrix 1: ";
    cin>>col1;
    cout<<"enter no. of row in matrix 2: ";
    cin>>row2;
    cout<<"enter no. of col in matrix 2: ";
    cin>>col2;
	
	if(col1==row2){
	    cout<<"enter elements to first matrix:"<<endl;
	    input2DArray(mat1,row1,col1);
	    cout<<"enter elements to second matrix:"<<endl;
	    input2DArray(mat2,row2,col2);
	
	    mulMat(mat1,mat2,mul,row1,col1,row2,col2);
        cout<<"multiplication of matrices is:"<<endl;
        dispaly2DArray(mul,row1,col1);
	}else{
		cout<<"Rows of mat2 is not equal to Columns of mat1. So, multiplication is not possible";
	}
}
