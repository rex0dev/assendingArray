#include<iostream>
using namespace std;

void assendingArray(int a[], int size){
    for(int j = 1; j < size; j++){
        for(int i = 0; i < size - j; i++){
                if(a[i] > a[i + 1]){
                swap(a[i] , a[i + 1]);
                }
        }
    }
}

int main(){
    int a[1000], size;
    cout<<"Enter the size of array";
    cin>>size;
    for(int i = 0; i < size; i++){
        cin>>a[i];
    }
    assendingArray(a, size);
    for(int i = 0; i < size; i++){
        cout<<a[i]<<" ";
    }
}
