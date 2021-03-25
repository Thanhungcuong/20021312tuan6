#include <iostream>

using namespace std;

int b=0;
void deQuy(int n)
{
    int a[1000];
    b++;
    cout<<b<<endl;
	deQuy(n-1);
}

int main()
{
	int n;
	cin >> n;
	deQuy(n);
	return 0;
}
