#include <iostream>
#include <Windows.h>

using namespace std;
//void rev(int* arr, int size) {
//    int* start = arr;
//    int* end = arr + size - 1;
//
//    while (start < end) {
//        
//        int temp = *start;
//        *start = *end;
//        *end = temp;
//
//        start++;
//        end--;
//    }
//}
//
//void revcop(int* arr, int* arr1, int sizee) {
//    int* src = arr + sizee - 1;
//    int* dest = arr1;
//
//   
//    while (src >= arr) {
//        *dest = *src;   
//        src--;          
//        dest++;
//    }
//}

//bool Arr(int* arr, int size, int value) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == value) {
//            return true;
//        }
//    }
//    return false;
//}

//bool Arr(int* arr, int size, int value) {
//    for (int i = 0; i < size; ++i) {
//        if (arr[i] == value) {
//            return true;
//        }
//    }
//    return false;
//}

void print(int* arr, int size) {
    cout << "Масив: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void delet(int* arr, int& size) {
    int Size = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 != 0) {
            arr[Size++] = arr[i];
        }
    }
    size = Size;
}

void Odd(int* arr, int& size) {
    int Size = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            arr[Size++] = arr[i];
        }
    }
    size = Size;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //1,2
    /*int arr[] = { 1, 2, 3, 4, 5 };
    int sizee = size(arr);
    int arr1[sizee];

    cout << "Початковий масив: ";
    for (int i = 0; i < sizee; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    rev(arr, sizee);
    revcop(arr, arr1, sizee);

    cout << "Масив зі зміненим порядком: ";
    for (int i = 0; i < sizee; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Масив з копією у зворотному порядку: ";
    for (int i = 0; i < sizee; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;*/

    //3
    /*int M, N;

    cout << "Введіть розмір масиву A: ";
    cin >> M;
    cout << "Введіть розмір масиву B: ";
    cin >> N;

    int A[M], B[N];

    cout << "Введіть елементи масиву A: ";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Введіть елементи масиву B: ";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int C[M];
    int count = 0; 

    for (int i = 0; i < M; ++i) {
        
        if (!Arr(B, N, A[i])) {
            
            if (!Arr(C, count, A[i])) {
                
                C[count++] = A[i];
            }
        }
    }
    cout << "Елементи масиву C (без повторень): ";
    for (int i = 0; i < count; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;*/

    //4

    /*int M, N;

    cout << "Введіть розмір масиву A: ";
    cin >> M;
    cout << "Введіть розмір масиву B: ";
    cin >> N;

    int A[M], B[N];

    cout << "Введіть елементи масиву A:\n";
    for (int i = 0; i < M; ++i) {
        cin >> A[i];
    }

    cout << "Введіть елементи масиву B:\n";
    for (int i = 0; i < N; ++i) {
        cin >> B[i];
    }

    int C[M + N];
    int count = 0; 

    for (int i = 0; i < M; ++i) {
        if (!Arr(B, N, A[i])) {
            if (!Arr(C, count, A[i])) {
                C[count++] = A[i];
            }
        }
    }

    for (int i = 0; i < N; ++i) {
        if (!Arr(A, M, B[i])) {
            if (!Arr(C, count, B[i])) {
                C[count++] = B[i];
            }
        }
    }

    cout << "Елементи масиву C (без повторень): ";
    for (int i = 0; i < count; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;*/

//5

int M;
cout << "Введіть розмір масиву A: ";
cin >> M;

int A[M];
cout << "Введіть елементи масиву A:\n";
for (int i = 0; i < M; ++i) {
    cin >> A[i];
}

print(A, M);

int choice;
cout << "Оберіть операцію:\n";
cout << "1. Видалити парні числа\n";
cout << "2. Видалити непарні числа\n";
cout << "Ваш вибір: ";
cin >> choice;

if (choice == 1) {
    delet(A, M);
    cout << "Масив після видалення парних чисел:\n";
    print(A, M);
}
else if (choice == 2) {
    Odd(A, M);
    cout << "Масив після видалення непарних чисел:\n";
    print(A, M);
}
else cout << "Неправильно";

    return 0;
}