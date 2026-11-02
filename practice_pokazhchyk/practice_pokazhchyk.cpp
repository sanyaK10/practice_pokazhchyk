
#include <iostream>
using namespace std;

void number3(int arr[], int size, int* sum, int* dob);
void number4(int* arr, int size, int* negative, int* positive, int* zero);
int* number5(int* arrA, int sizeA, int* arrB, int sizeB);

int main()
{
    //number 1
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int* p = &a;
    int* p2 = &b;

    if (*p > *p2) {
        cout << "Max = " << *p << '\n';
    }
    else {
        cout << "Max = " << *p2 << '\n';
    }

    //number 2
    //int a, b;
    //cout << "Enter a: ";
    //cin >> a;
    //cout << "Enter b: ";
    //cin >> b;

    //int* p1 = &a;
    //int* p2 = &b;

    //int temp = *p1;
    //*p1 = *p2;
    //*p2 = temp;

    //cout << "a = " << a << '\n';
    //cout << "b = " << b << '\n';


    //number 3
    int arr1[] = { 1,2,3,4,5 };
    int size1 = 5;
    int sum, dob;

    number3(arr1, size1, &sum, &dob);

    cout << "Sum: " << sum << '\n';
    cout << "Dob: " << dob << '\n';


    //number 4
    int arr2[] = { -5, 2, 0, -3, 7, 0, 4, -1 };
    int size2 = 8;
    int negative;
    int positive;
    int zero;

    number4(arr2, size2, &negative, &positive, &zero);

    cout << "Negative: " << negative << '\n';
    cout << "Positive: " << positive << '\n';
    cout << "Zero: " << zero << '\n';


    //number 5
    int arrA[] = { 1, 2, 3, 4, 5, 6, 7 };
    int arrB[] = { 3, 4, 5 };

    int* result = number5(arrA, 7, arrB, 3);

    if (result != 0) {
        cout << "Found: ";
        for (int i = 0; i < 3; i++) {
            cout << result[i] << " ";
        }
    }
    else {
        cout << "Not found";
    }
}

void number3(int arr[], int size, int* sum, int* dob) {
    *sum = 0;
    *dob = 1;

    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *dob *= arr[i];
    }
}

void number4(int* arr, int size, int* negative, int* positive, int* zero)
{
    *negative = 0;
    *positive = 0;
    *zero = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            (*negative)++;
        }
        else if (arr[i] > 0) {
            (*positive)++;
        }
        else {
            (*zero)++;
        }
    }
}

int* number5(int* arrA, int sizeA, int* arrB, int sizeB) {

    for (int i = 0; i <= sizeA - sizeB; i++) {
        int j;

        for (j = 0; j < sizeB; j++) {
            if (arrA[i + j] != arrB[j]) {
                break;
            }
        }

        if (j == sizeB) {
            return &arrA[i];
        }
    }

    return 0;
}
