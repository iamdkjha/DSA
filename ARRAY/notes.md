# What is Array :
- List of similar items (example : only integers, or only characters, or only strings, or etc similar items)
- collection of elements
- linear data structure
- continuous memory block

# Why Array :
- Arrays help maintain large sets of data under a single variable name to avoid confusion that can occur when using several variables.

# Array Creation and Initialisation:
- data_type array_name [size_of_array] = {elements_of_arary};
- Example: 
    - int arr [5] = {1,2,3,4,5};
    - char arr[4] = {'a','b','c','d'};

# Indexing in Array:
-  Arrays are zero-indexed, meaning the first element of the array is at index 0, the second element is at index 1, and so on. 
- To access an element at a specific index in an array, you use square brackets [] with the index inside. 
- Example:
    ```cpp
    int arr[] = {10, 20, 30, 40, 50};

    // Accessing the first element (index 0)
    int firstElement = arr[0]; // firstElement is now 10

    // Accessing the third element (index 2)
    int thirdElement = arr[2]; // thirdElement is now 30
    ```


# Printing an Array:
- we can print all the elements of an array by using the loops.
- Syntax:
    ```cpp
    for(int i=0; i<arr_size; i++){
            cout<<arr[i]<<" ";
    }
    ```

# Taking Input in an Array:
- we can insert elements in an array by using the loops.
- Syntax:
    ```cpp
    for(int i=0; i<arr_size; i++){
            cin>>arr[i];
    }
    ```
