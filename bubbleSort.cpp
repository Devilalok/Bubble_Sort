#include<iostream>
using namespace std;

int bubblesort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        
        for(int j = 0; j < n-i-1; j++){

            if(arr[j] > arr[j+1]){

                swap(arr[j], arr[j+1]);

            }
        }
    }
}

int main(){

    int n;
    cout<<"Enter the size of an array: ";
    cin>>n;

    int arr[20];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"The unsorted array is: ";
    for(int i = 0; i < n; i++){
        cout<<" [ "<<arr[i]<<" ] ";
    }cout<<"\n";

    bubblesort(arr, n);

    cout<<"The sorted array is: ";
    for(int i = 0; i < n; i++){
        cout<<" [ "<<arr[i]<<" ] ";

    }

}