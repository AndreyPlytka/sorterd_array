// Arraysorted.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    const int n = 6;
    int A[n];
    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
    
    int M2[n]{};
    int M3[n]{};
    int r = 0;
    int s = 0;



    for (int i = 0; i < n; i++) {
        if (A[i] % 2 == 0) {
            M2[r] = A[i];
            r++;
        }
        else {
            M3[s] = A[i];
            s++;
        }
    }
    cout << endl;
    cout << "M2 are " << endl;
    for (int i = 0; i < n; i++) {
        cout << M2[i] << ' ';
    }
    cout << endl;
    cout << "M3 are " << endl;
    for (int i = 0; i < n; i++) {
        cout << M3[i] << ' ';
    }
}
