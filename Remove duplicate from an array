//1 .  Remove duplicate from an array

#include <iostream>

void removeDuplicates(int arr[], int &size) {
    // Create a new array to store unique elements
    int unique[size]; // Assuming the size won't exceed the original array size
    int uniqueIndex = 0;

    // Loop through each element in the original array
    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;

        // Check if the current element is already in the unique array
        for (int j = 0; j < uniqueIndex; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true; // Mark as duplicate
                break;
            }
        }

        // If not a duplicate, add to the unique array
        if (!isDuplicate) {
            unique[uniqueIndex] = arr[i];
            uniqueIndex++;
        }
    }

    // Copy unique elements back to the original array
    for (int i = 0; i < uniqueIndex; i++) {
        arr[i] = unique[i];
    }

    // Update the size of the original array
    size = uniqueIndex;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    removeDuplicates(arr, size);

    // Print the unique elements
    std::cout << "Array after removing duplicates: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    
    return 0;
}
