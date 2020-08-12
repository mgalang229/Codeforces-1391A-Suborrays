#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		int a[100];
		for(int i = 0; i < n; i++)
			a[i] = i + 1;

		random_shuffle(a, a + n);

		for (size_t i = 0; i < n; i++) {
			cout << a[i] << " ";
		}

		cout << "\n";
	}

	return 0;
}
