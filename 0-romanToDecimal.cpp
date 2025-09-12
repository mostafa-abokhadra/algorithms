# include <iostream>
# include <map>
# include <string>

using namespace std;

int sToInt(string s) {

	int decimal = 0;
	map<char, int> ss;

	ss['I'] = 1;
	ss['V'] = 5;
	ss['X'] = 10;
	ss['L'] = 50;
	ss['C'] = 100;
	ss['D'] = 500;
	ss['M'] = 1000;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'I' && i != s.size() - 1 && s[i + 1] == 'V') {
			decimal += 4; i++;
		}
		else if (s[i] == 'I' && i != s.size() - 1 && s[i + 1] == 'X') {
                        decimal += 9; i++;
                }
		else if (s[i] == 'X' && i != s.size() - 1 && s[i + 1] == 'L') {
                        decimal += 40; i++;
                }
		else if (s[i] == 'X' && i != s.size() - 1 && s[i + 1] == 'C') {
                        decimal += 90; i++;
                }
		else if (s[i] == 'C' && i != s.size() - 1 && s[i + 1] == 'D') {
                        decimal += 400; i++;
                }
		else if (s[i] == 'C' && i != s.size() - 1 && s[i + 1] == 'M') {
                        decimal += 900; i++;
                }
		else
			decimal += ss[s[i]];
	}

	return decimal;
}
int main() {
	cout << sToInt("MCMXCIV") << endl;
	return 0;
}
