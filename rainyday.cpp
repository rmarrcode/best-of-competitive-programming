#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int days,x,y;
	cin >> days >> x >> y;
	
	int rain[days];
	for (int i = 0; i < days; i++) {
		int temp;
		cin >> temp;
		rain[i] = temp;
	}
	
	for (int i = 0; i < days; i++) {
	
			int sol = 0;
			if ((i - x) >= 0) {
				for (int j = 1; j <= x; j++) {
					if (rain[i] >= rain[i-j]) {
						sol--;
						break;
					}
				}
			}
			else {
				sol--;
			}
			
		
	}

}
