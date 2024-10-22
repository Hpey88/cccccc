#include <bits/stdc++.h>
using namespace std;
int main() {
	freopen ("BAI4.INP","r",stdin);
	freopen ("BAI4.OUT","w",stdout);
    int n;
	 int tong=0;
    cin >> n;
    for(int i=n; i>0; i/=10) {
        tong+= i%10;
    }
    cout<<tong;
    return 0;
}
