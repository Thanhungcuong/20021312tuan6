#include <iostream>

using namespace std;
int k=2;
int main() {
	int *element= NULL;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	element= new int[k];
	for(int j = 0; j < k; j++)
        element[j] = j+1;

    cout << "Cac tap con la:\n";
	int index = 0;
	do {
		for(int j = 0; j < k; j++)
			cout << element[j];
            cout <<endl;
		index = k-1;
		while((index >= 0) && (element[index] == n - k + index + 1))
			index--;
