#include<iostream>
using namespace std;

// Function to print an array
void print_array(int arr[], int arr_size){
    for(int i=0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// Function to inserting elements in an array
void insertion_array(int arr[], int arr_size){
    for(int i=0; i<arr_size; i++){
        cin>>arr[i];
    }
}

int main(){

    int arr[] = {0};
    int arr_size = 0;

    cout<<"Enter the size: ";
    cin>>arr_size;

    insertion_array(arr,arr_size);

    print_array(arr,arr_size);

    return 0;
}