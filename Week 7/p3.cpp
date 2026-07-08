// Write a C++ program using pointers to compute the sum, mean, and standard deviation of all elements stored in an array of n real numbers.

#include <iostream>
#include<cmath>
using namespace std;

class Array{
    private:
    int size;
    int arr[100];

    public:
    void setSize(){
        cout<<"enter size of array: ";
        cin>>size;
    }
    int getSize(){
        return size;
    }
    void setArray() {
        int* ptr = arr;
        int i=0;
        while (i<size) {
            cin>>*ptr;                       
            ptr++;
            i++;
        }           
    }
    int* getArray(){
        return arr;
    }
    void displayArray() {
        int* ptr=arr;
        int i=0;
        while (i<size) {
            cout<<*ptr<<" ";                       
            ptr++;
            i++;
        }  
        cout << endl;
    }
    int sumArray(){
        int* ptr=arr;
        int i=0;
        int sum=0;
        while(i<size){
            sum+=*ptr;
            ptr++;
            i++;
        }
        return sum;
    }
    float meanArray(){
        int* ptr=arr;
        int i=0;
        float sum=0;
        while(i<size){
            sum+=*ptr;
            ptr++;
            i++;
        }
        return sum/(i);
    }
    float sdArray(){
        int* ptr=arr;
        float mean = meanArray();
        float variance=0;
        for(int i=0;i<size;i++){
            variance+=((*ptr-mean)*(*ptr-mean))/size;
            ptr++;
        }
        return sqrt(variance);
    }

};

int main() {
    Array arr;

    arr.setSize();
    cout << "Enter a array: ";
    arr.setArray();
    cout << "Array is: ";  
    arr.displayArray();

    cout<<"sum of array is: "<<arr.sumArray()<<endl;
    cout<<"mean of array is: "<<arr.meanArray()<<endl;
    cout<<"Standard Deviation of array is: "<<arr.sdArray()<<endl;
    return 0;
}
