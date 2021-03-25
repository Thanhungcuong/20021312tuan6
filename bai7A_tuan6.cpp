#include<iostream>
using namespace std;

int n;
int Bool[20] = { 0 };
int A[20];

void xuat() {
    for (int i = 1; i <= n; i++)
        cout << A[i] << " ";
    cout << endl;
}

void hoanvi(int a) {
    for (int i = 1; i <= n; i++) {
        if (!Bool[i]) {
            A[a] = i;
            Bool[i] = 1;
            if (a == n)
                xuat();
            else
                hoanvi(a + 1);
            Bool[i] = 0;
        }
    }
}

int main() {
    cout << "nhap n: ";
    cin >> n;
    hoanvi(1);
}
