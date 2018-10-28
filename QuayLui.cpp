#include <iostream>
using namespace std;

const int maxn = 100;
int a[maxn];
bool free[maxn];
int n;

int ghiNhan()
{
	for (int i = 0; i < n - 1; i++) {
		cout << a[i] << "  ";
	}
	cout << endl;
}

int Try(int k)
{
	for (int i = 0; i < n - 1; i++) {
		if (free[i])
		{
			a[k] = i;
			free[i] = false;
			
			if (k == n - 1) {
				ghiNhan();
			}
		}
		else Try(k + 1);
		free[i] = true;
	}
	return 0;
}

int main()
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i; i < n - 1; i++) {
		free[i] = true;
	}
	Try(0);
    return 0;
}


