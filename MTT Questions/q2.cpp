#include<iostream>
using namespace std;

void selection_sort(int array[], int SIZE){
    int minimum_index;
    for(int i=0;i<SIZE;i++){
        for(int i=0;i<SIZE;i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
        minimum_index=i;
        for(int j=i+1;j<SIZE;j++){
            if(array[j]<array[minimum_index]){
                minimum_index = j;
            }
        }
        int t;
        t=array[i];
        array[i]=array[minimum_index];
        array[minimum_index]=t;
    }
}

int main(){
    int n;
    cout<<"Enter Number of Elements ?"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<" :";
        cin>>arr[i];
    }
    cout<<"Iterations are ="<<endl;
    selectionSort(arr, n);
    cout<<endl;
    cout<<"Printing Elements of array "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

void selectionSort(int arr[], int size){
    int minIndex;
    for(int i=0;i<size;i++){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        minIndex=i;
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        int temp;
        temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
    }
}
