#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {5, 2, 9, 1, 3, 6, 8, 7, 4, 0};
    int n = 10;

    // Bubble sort algorithm to sort array in ascending order
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    cout << "Sorted Array (in ascending order): ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
