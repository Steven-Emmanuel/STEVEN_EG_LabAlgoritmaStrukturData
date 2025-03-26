#include <iostream>
using namespace std;

// Menukar dua elemen dalam array
void swap(int arr[], int pos1, int pos2) {
    int temp = arr[pos1];
    arr[pos1] = arr[pos2];
    arr[pos2] = temp;
}

// Memisahkan array berdasarkan pivot
int partition(int arr[], int low, int high, int pivot) {
    int i = low, j = low;
    while (i <= high) {
        if (arr[i] <= pivot) {
            swap(arr, i, j);
            j++;
        }
        i++;
    }
    return j - 1;
}

// Algoritma QuickSort
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];  
        int pos = partition(arr, low, high, pivot);
        quicksort(arr, low, pos - 1);
        quicksort(arr, pos + 1, high);
    }
}

int main() 
{
    int n;
    cout << "Tentukan panjang array = ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {  
        cin >> arr[i];  // Input elemen array
    }

    quicksort(arr, 0, n - 1);  

    cout << "Array yang telah diurutkan = ";
    for (int i = 0; i < n; i++) {  
        cout << arr[i] << "\t";  // Cetak hasil
    }
}
