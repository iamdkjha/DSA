#include<iostream>
using namespace std;

// Function to print an array
void print_array(int arr[], int arr_size){
    cout<<endl;
    for(int i=0; i<arr_size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

// Function to inserting elements in an array
void insertion_array(int arr[], int arr_size){
    cout<<endl<<"Enter the elements: "<<endl;
    for(int i=0; i<arr_size; i++){
        cin>>arr[i];
    }
}

// Ques 1: Double all the elemnts of array
void double_elements(int arr[], int arr_size){
    for(int i=0; i<arr_size; i++){
        arr[i] = arr[i] * 2;
    }
    cout<<"After Doubling all the elements of an array: ";
    print_array(arr,arr_size);
}

// Ques 2:
void func_name(int arr[], int size){

}

int main(){

    int arr[] = {0};
    int arr_size = 0;

    cout<<"Enter the size: ";
    cin>>arr_size;

    insertion_array(arr,arr_size);
    print_array(arr,arr_size);


    // // Ques 1: Double all the elemnts of array
    // double_elements(arr,arr_size);
   

    // Ques 2: 
























    cout<<endl<<"Exting the Program"<<endl;

    return 0;
}