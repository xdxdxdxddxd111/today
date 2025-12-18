#include <iostream>
using namespace std;

void fillArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sumPositive(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) sum += arr[i];
    }
    return sum;
}

int sumEvenIndices(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

void replaceNegatives(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) arr[i] = 0;
    }
}

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void bubbleSortDesc(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
    }
}

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int sumDiagonal(int arr[5][5]) {
    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += arr[i][i];
    }
    return sum;
}

void maxInRows(int arr[4][4], int maxArr[4]) {
    for (int i = 0; i < 4; ++i) {
        maxArr[i] = arr[i][0];
        for (int j = 1; j < 4; ++j) {
            if (arr[i][j] > maxArr[i]) maxArr[i] = arr[i][j];
        }
    }
}

void counterFunc() {
    static int count = 0;
    count++;
    cout << count << endl;
}

int globalVar = 10;

void scopeTest() {
    int localVar = 20;
    cout << "Global: " << globalVar << ", Local: " << localVar << endl;
}

auto average(int arr[], int size) -> double {
    double sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum / size;
}

void printChars(char ch = '*', int count = 5) {
    for (int i = 0; i < count; ++i) {
        cout << ch;
    }
    cout << endl;
}

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

void print(int val) {
    cout << val << endl;
}

void print(double val) {
    cout << val << endl;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void transpose(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = i + 1; j < 3; ++j) {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

int sum(int a, int b) {
    return a + b;
}

int sum(int arr[], int size, int start = 0) {
    int total = 0;
    for (int i = start; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

int main() {
    const int SIZE = 15;
    int arr[SIZE];

    cout << "Enter 15 elements: ";
    fillArray(arr, SIZE);

    selectionSort(arr, SIZE);
    cout << "Sorted array: ";
    printArray(arr, SIZE);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, SIZE, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
