#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int arr[n] = {10, 20, 30, 40, 50};

    cout << "Elements massiva:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    int sum = 0;

    cout << "Elements massiv: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
        sum += arr[i];
    }
    cout << endl;
    
    cout << "Sum massiva: " << sum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int arr[SIZE] = {15, 3, 42, 7, 21, 9, 33, 12};
    
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i]; 
        }
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    
    cout << "Massiv: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    cout << "Min element: " << min << endl;
    cout << "Max element: " << max << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 6;
    int arr[SIZE] = {12, 7, 4, 9, 16, 3};
    
    cout << "Odd elements massiv: ";
    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 12;
    int arr[SIZE] = {-5, 3, -2, 0, 8, -7, 1, -4, 6, -9, 2, -1};
    
    int countNegative = 0; 
    
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 0) {
            countNegative++;
        }
    }
    
    cout << "Kol-vo odd elements: " << countNegative << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 3;
    int arr[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Elements of the main diagonal: ";
    
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i][i] << " ";
    }
    
    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 4;
    int arr[SIZE][SIZE] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };

    int sum = 0;


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            sum += arr[i][j];
        }
    }

    cout << "Sum of all elements of an array: " << sum << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {12, 22, 32, 42}
    };

    cout << "Elements of the last column:" << endl;

    for (int i = 0; i < ROWS; i++) {
        cout << arr[i][COLS - 1] << " ";
    }

    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 3, 8, 3, 9, 1, 3, 7, 2, 6};
    
    int target;
    int index = -1;

    cout << "Enter a number to search: ";
    cin >> target;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "The first element is equal to " << target << ", is in position " << index << endl;
    } else {
        cout << "Element equal " << target << ", not found in array" << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 15;
    int arr[SIZE] = {7, 2, 9, 1, 5, 8, 3, 6, 4, 10, 12, 11, 14, 13, 15};
    
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    int temp = arr[minIndex];
    arr[minIndex] = arr[maxIndex];
    arr[maxIndex] = temp;

    cout << "Array after swapping min and max:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int matrix[SIZE][SIZE];
    int sum = 0;

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = i * SIZE + j + 1;
        }
    }

    cout << "Massiv 5x5:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < SIZE; i++) {
        for (int j = i + 1; j < SIZE; j++) {
            sum += matrix[i][j];
        }
    }

    cout << "Sum of elements above the main diagonal: " << sum << endl;

    return 0;
}

  
