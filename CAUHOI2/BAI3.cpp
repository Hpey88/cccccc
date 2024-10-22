#include <bits/stdc++.h>
using namespace std;

int x(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            cnt++;
        }
    }
    return cnt;
}

int a[105]; 
int main()
 {
		freopen ("BAI3.INP","r",stdin);
    	freopen ("BAI3.OUT","w",stdout);
    int n;

    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max= 0, maxn= 0;

    for (int i = 0; i < n; ++i) {
        int div = x(a[i]);

        if (div > max) 
		{
            max= div;
            maxn = a[i];
        } else if (div == max && a[i] > maxn) 
		{
            maxn = a[i];
        }
    }

    cout <<maxn << endl;

    return 0;
}

