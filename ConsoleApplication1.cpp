#include <iostream>
using namespace std;

int n, max_, k;
int a[101];

int main()
{
	max_ = 0;
	k = 0;
	cin >> n;
	for (int i = 1; i <= n; i += 1) cin >> a[i];
	for (int i = 1; i <= n; i += 1)	if (a[i] > max_) max_ = a[i];
	for (int i = 1; i <= n; i += 1)	if (a[i] == max_) k += 1;
	cout << max_ << " " << k;
}
