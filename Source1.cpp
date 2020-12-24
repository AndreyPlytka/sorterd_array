#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    const int n = 6;
    int A[n];
    int t = 0;
    int k = 0;
    int s = 0;
    int d = 1;
    int B[n];

    for (int i = 0; i < n; i++) {
        cout << "A[" << i << "] = ";
        cin >> A[i];
    }
    printf("Вивід введеного масиву:\n");
    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
    for (int i = 0; i < n; i++) {
        if (A[i] < 0) {
            A[i] = pow(A[i], 2);
        }
    }
    //cout << "Try "<< endl;
    for (int i = 0; i < n; i++) {
        B[i] = A[i];
        //cout<< B[i]<< " ";
    }
    cout << endl;
    cout << "\nСортований масив за зростанням: " << endl;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            if (B[j] < B[i])
            {
                t = B[i];
                B[i] = B[j];
                B[j] = t;
            }
        }
    for (int i = 0; i < n; i++) {
        k++;
        printf("%3i", B[i]);
    }

    printf("\nВивід зміненого масиву:\n");
    for (int i = 0; i < n; i++) {
        if (A[i] == B[i]) {
            s += A[i];
        }
        else {
            d *= A[i];
        }
        cout << A[i] << ' ';
    }


    cout << endl;
    cout << "Добуток" << d << endl;

    cout << "Cума" << s << endl;

    return 0;
}
