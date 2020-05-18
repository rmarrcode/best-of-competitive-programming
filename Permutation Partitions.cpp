#include<bits/stdc++.h>
#include <math.h>
using namespace std;
 
typedef long long ll;
typedef long double ld;
# define forn for(ll i = 0;i < n; i++) 
# define pb push_back
# define sethas(set,x) (set.find(x) != set.end())
# define fill_matrix(matrix,size,value) (fill(*matrix, *matrix + size, value)); 
# define maxll(a,b) ((a > b) ? a : b)
# define triangle(n) (n*(n+1)/2)
#define PI 3.14159265
//cout << fixed << setprecision(10)
//string(n,c)

int main() {
	ll n,k;
	cin >> n >> k;
	vector<ll> ins;
	map<ll,ll> pos;
	forn {
		ll temp;
		cin >> temp;
		ins.push_back(temp);
	}
	forn {
		pair<ll,ll> temp;
		temp.first = ins[i];
		temp.second = (i+1);
		pos.insert(temp);
	}
	unsigned long long int a = 0,b = 1;
	sort(ins.begin(), ins.end());
	int i = n-1;
	vector<ll> places;
	while (k > 0) {
		places.push_back(pos[ins[i]]);
		a += (ins[i]);
		i--;
		k--;
	}
	sort(places.begin(), places.end());
	for (int j = 1; j < places.size(); j++) {
		b = (b*(abs(places[j]-places[j-1])) % 998244353);
	}
	
	cout << a << " " << b << endl;
}
