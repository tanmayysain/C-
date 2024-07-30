#include<bits/stdc++.h>
using namespace std;
 
int main(){
    cout << "enter value of N and D\n";
	int n, d;
	cin >> n >> d;

	int cnt = 0, ans = 0, d2 = d * d, d3 = d2 * d, p2 = d2, p3 = d3;

	while (cnt < n) {

		int j = 0;
		while (j < 3 && cnt < n) {
			ans += p2;
			p2 *= d2;
			j++;
			cnt++;
		}
		j = 0;
		while (j < 2 && cnt < n) {
			ans += p3;
			p3 *= d3;
			j++;
			cnt++;
		}
		j = 0;
		while (j < 1 && cnt < n) {
			ans += p2;
			p2 *= d2;
			j++;
			cnt++;
		}
		j = 0;
		while (j < 2 && cnt < n) {
			ans += p3;
			p3 *= d3;
			j++;
			cnt++;
		}
	}
	cout << ans << endl;
 
return 0;
 
}