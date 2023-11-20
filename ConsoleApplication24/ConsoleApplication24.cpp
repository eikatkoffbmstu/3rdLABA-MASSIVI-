/*1.
#include <iostream>
#include <random>
using namespace std;
int main() {

	int a = 0;
	cin >> a;
	int b[10]{};
	for (int i = 0; i <= 9; i++) {
		b[i] = rand() % 1000;
	}
	for (int i = 0; i <= 9; i++) {
		b[i] = ((b[i] * 2) - a) / b[0];
		cout << b[i] << endl;
	}
}
2.
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long s, s2, s6, sk, k1, k2, srarfm, srarfm1;
	long s1, s22, s221;
	cin >> k1 >> k2;
	cin >> s1 >> s2;
	int b[]{ 2,3,4,5,6,7,8 };
	for (int i = 0; i <= 6; i++) {
		s += b[i];
	}
	for (int i = 0; i <= 6; i++) {
		s2 += b[i] * b[i];
	}
	for (int i = 0; i <= 5; i++) {
		s6 += b[i];
	}
	for (int i = k1; i <= k2; i++) {
		sk += b[i];
	}
	srarfm = s / (sizeof(b) / sizeof(*b));
	for (int j = s1; j <= s22; j++) {
		s221 += b[j];
	}
	srarfm1 = s221 / (sizeof(b) / sizeof(*b) - s1 - s22 + 2);
	cout << s << " " << s2 << " " << s6 << " " << sk << " " << s221 << " " << srarfm << " " << srarfm1 << ".";
}

3.
#include <iostream>
#include <cmath>
#include <random>
using namespace std;
int main() {
	int s[20]{};
	for (int i = 0; i <= 19; i++) {
		s[i] = rand() % 100;
	}
	int a, b, c;
	int a1, b1, c1;
	a = s[0];
	b = s[1];
	c = s[2];
	a1 = s[17];
	b1 = s[18];
	c1 = s[19];
	s[0] = a1;
	s[1] = b1;
	s[2] = c1;
	s[17] = a;
	s[18] = b;
	s[19] = c;
	for (int i = 0; i <= 18; i++) {
		cout << s[i] << ",";
	}
	cout << s[19];
}

4.
#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> mas2 = { 1,2,3,-4,5,6,-7,8,9,11 };
	for (int i = 0; i < mas2.size(); i++) {
		if (mas2[i] < 0) {
			mas2.erase(mas2.cbegin() + i);
			break;
		}
	}
	int kk = 0;
	for (int i = mas2.size() - 1; i > 0; i -= 1) {
		kk += 1;
		if (mas2[i] % 2 == 0) {
			mas2.erase(mas2.cend() - kk);
			break;
		}
	}
	for (int i = 0; i < mas2.size(); i++) {
		cout << mas2[i] << " ";
	}
}


5.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string city = "";
	cin >> city;
	if (city.length() % 2 == 0) {
		cout << "div by 2";
	}
	else {
		cout << "no div by 2";
	}
}

6.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main() {
	string nam1 = "";
	string nam2 = "";
	cin >> nam1 >> nam2;
	if (nam1.length() > nam2.length()) {
		return true;
	}
}

7.
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
	string city1 = "";
	string city2 = "";
	string city3 = "";
	string the_longest = "";
	string the_shortest = "";
	cin >> city1 >> city2 >> city3;
	int c1 = city1.length();
	int mini1, maxi1;
	int c2 = city2.length();
	int c3 = city3.length();
	mini1 = min(c1, c2, c3);
	maxi1 = max(c1, c2, c3);
	if (mini1 == c1) {
		the_shortest = city1;
	}
	if (mini1 == c2) {
		the_shortest = city2;
	}
	if (mini1 == c3) {
		the_shortest = city3;
	}
	if (maxi1 == c1) {
		the_longest = city1;
	}
	if (maxi1 == c2) {
		the_longest = city2;

	}
	if (maxi1 == c3) {
		the_longest = city3;
	}
	cout << the_longest << " " << the_shortest;
}
8.
#include <iostream>
#include <string>
using namespace std;
int main() {
	string s1 = "";
	cin >> s1;
	string s2;
	for (int i = 0; i <= s1.length(); i++) {
		s2 += "*";
	}
	cout << s2 << s1 << s2;
}

9.
#include <iostream>
using namespace std;

int main() {
	string sent = "";
	double vol_a = 0;
	long double perc = 0.0;
	cin >> sent;
	int b = sent.length();
	for (int i = 0; i <= sent.length(); i++) {
		if (sent[i] == 'a') {
			vol_a++;
		}
	}

	cout << (vol_a / b) * 100 << "%";

}
*/