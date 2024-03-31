// By extra space

void reverseArrayExtraArray(int arr[], int size) {
    int reversedArr[size];
    for (int i = 0; i < size; i++) {
        reversedArr[i] = arr[size - i - 1];
    }
 
    // Print reversed array
    cout << "Reversed Array: ";
    for (int i = 0; i < size; i++) {
        std::cout << reversedArr[i] << " ";
    }
}


//By swapping
void rvereseArray(int arr[], int start, int end) 
{ 
    while (start < end) 
    { 
        int temp = arr[start]; 
        arr[start] = arr[end]; 
        arr[end] = temp; 
        start++; 
        end--; 
    } 
}  

// swapping by recursion
void rvereseArray(int arr[], int start, int end) 
{ 
    if (start >= end) 
    return; 
     
    int temp = arr[start]; 
    arr[start] = arr[end]; 
    arr[end] = temp; 
     
    // Recursive Function calling 
    rvereseArray(arr, start + 1, end - 1); 
} 


//stl inbuild function
reverse(Array, Array + length);