#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll a, b;
	cin >> a >> b;
	ll x, y, z;
	cin >> x >> y >> z;
	ll yellow=2*x+y;
	ll blue=3*z+y;
	ll n1=(yellow-a>0?yellow-a:0);
	ll n2=(blue-b>0?blue-b:0);
	cout << n1+n2 << "\n";
}
