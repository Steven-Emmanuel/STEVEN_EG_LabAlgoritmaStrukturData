////QuickShort
//#include <iostream>
//using namespace std;
//
//void printArray(int arr[], int n) {
//    cout << "[ ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "]" << endl;
//}
//
//int partition(int arr[], int low, int high) {
//    int pivot = arr[high];
//    int i = low - 1;
//
//    for (int j = low; j < high; j++) {
//        if (arr[j] < pivot) {
//            i++;
//            swap(arr[i], arr[j]);
//        }
//    }
//    swap(arr[i + 1], arr[high]);
//    return i + 1;
//}
//
//void quickSort(int arr[], int low, int high, int n) {
//    if (low < high) {
//        cout << "Memproses: ";
//        printArray(arr, n);
//
//        int pi = partition(arr, low, high);
//
//        quickSort(arr, low, pi - 1, n);
//        quickSort(arr, pi + 1, high, n);
//    }
//}
//
//int main() {
//    int n;
//    cout << "Masukkan jumlah datanya: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Masukkan angka pada data yg ada: " << endl;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    cout << "Data pertama: ";
//    printArray(arr, n);
//
//    quickSort(arr, 0, n - 1, n);
//
//    cout << "Hasil akhir dari Data: ";
//    printArray(arr, n);
//}
    
    








////MergeShort
//#include <iostream>
//using namespace std;
//
//void printArray(int arr[], int n) {
//    cout << "[ ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//    cout << "]" << endl;
//}
//
//void merge(int arr[], int left, int mid, int right) {
//    int n1 = mid - left + 1;
//    int n2 = right - mid;
//
//    int L[n1], R[n2];
//
//    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
//    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
//
//    int i = 0, j = 0, k = left;
//
//    while (i < n1 && j < n2) {
//        if (L[i] <= R[j]) arr[k++] = L[i++];
//        else arr[k++] = R[j++];
//    }
//
//    while (i < n1) arr[k++] = L[i++];
//    while (j < n2) arr[k++] = R[j++];
//
//    cout << "diGabung List ";
//    printArray(arr + left, right - left + 1);
//}
//
//void mergeSort(int arr[], int left, int right) {
//    if (left < right) {
//        int mid = left + (right - left) / 2;
//
//        cout << "Mecah ";
//        printArray(arr + left, right - left + 1);
//
//        mergeSort(arr, left, mid);
//        mergeSort(arr, mid + 1, right);
//        merge(arr, left, mid, right);
//    }
//}
//
//int main() {
//    int n;
//    cout << "Masukkan jumlah data: ";
//    cin >> n;
//
//    int arr[n];
//    cout << "Masukkan angka: " << endl;
//    for (int i = 0; i < n; i++) cin >> arr[i];
//
//    cout << "Data pertamanya: ";
//    printArray(arr, n);
//
//    mergeSort(arr, 0, n - 1);
//
//    cout << "Hasil Data akhir: ";
//    printArray(arr, n);
//}
    
