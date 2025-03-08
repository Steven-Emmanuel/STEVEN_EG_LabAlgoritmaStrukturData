#include <iostream>
using namespace std;

void bubbleSort (int arr[], int n) {
    int i, j, tmp;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i- 1; i++) {
            if(arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main() {
    int array[100], n, i, j;
    cout << "masukan banyak elemen: ";
    cin >> n;
    cout << "masukan nilai: \n";
    for (i =0; i < n, i, j; ) {
        cin >> array[i];
    }
    bubbleSort (array, n);
    cout << "hasil pengurutan dengan algoritma bubbleshort:\n";
    for (i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

/*
void selectionSort (int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr [minIndex]) {
                minIndex = j;
            }
        }

        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
        cout << "literasi ke-" << i+1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
    */

/*
int main() {
    int n, i;
    cout << "masukan jumlah elemen: ";
    cin << n;
    int arr[n];
    cout << "masukan nilai elemen: ";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "data sebelum sorting: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionSort (arr, n);
    cout << "data setelah sorting: ";
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}*/
