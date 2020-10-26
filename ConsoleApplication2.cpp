#include <iostream>
using namespace std;

int n, max_, min_;
int a[101];

int main()
{
	max_ = 0;
	min_ = 1001;

	cin >> n;
	for (int i = 1; i <= n; i += 1) cin >> a[i] ;
	for (int i = 1; i <= n; i += 1)
	{
		if (a[i] > max_) max_ = a[i];
		if (a[i] < min_) min_ = a[i];
	}
	cout << min_ << " ";
	cout << max_;
}