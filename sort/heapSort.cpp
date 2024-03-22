#include <bits/stdc++.h>
using namespace std;
#define MAX 100
/*
heap sort
*/

void heapify(int arr[], int n, int i) {
    int largest=i;
    int l=i*2+1;
    int r=i*2+2;

    if(l<n && arr[l]>arr[largest])  largest=l;
    if(r<n && arr[r]>arr[largest])  largest=r;

    if(i!=largest) {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void print(int arr[], int n, bool a) {
    if(a) {
        for(int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        for(int i=n-1; i>=0; i--) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

void heapSort(int arr[], int n) {
// build the maxheap
    for(int i=n/2-1; i>=0; i--) {
        heapify(arr, n, i);
    }

    cout << "Max Heap: "; 
    print(arr, n, 1);

    // take out node
    for(int i=n-1; i>=0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}



int main() {
    // Dynamically allocate memory for an array of size 10
    int *arr = new int[10];

    // Assign values to each element of the array
    arr[0] = 35;
    arr[1] = 33;
    arr[2] = 42;
    arr[3] = 10;
    arr[4] = 14;
    arr[5] = 19;
    arr[6] = 27;
    arr[7] = 44;
    arr[8] = 26;
    arr[9] = 31;

    heapSort(arr, 10);

    cout << "Arr after sort: ";
    print(arr, 10, 0);

    // Don't forget to free the allocated memory when you're done with it
    delete[] arr;

    return 0;
}