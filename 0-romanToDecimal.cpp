# include <iostream>
# include <map>
# include <string>

using namespace std;

int romanToInt(string romanNumber) {

	int decimal = 0;
	map<char, int> romans;

	romans['I'] = 1;
	romans['V'] = 5;
	romans['X'] = 10;
	romans['L'] = 50;
	romans['C'] = 100;
	romans['D'] = 500;
	romans['M'] = 1000;

	for (int i = 0; i < roman.size(); i++) {
		if (s[i] == 'I' && i != roman.size() - 1 && s[i + 1] == 'V') {
			decimal += 4; i++;
		}
		else if (s[i] == 'I' && i != roman.size() - 1 && s[i + 1] == 'X') {
                        decimal += 9; i++;
                }
		else if (s[i] == 'X' && i != roman.size() - 1 && s[i + 1] == 'L') {
                        decimal += 40; i++;
                }
		else if (s[i] == 'X' && i != roman.size() - 1 && s[i + 1] == 'C') {
                        decimal += 90; i++;
                }
		else if (s[i] == 'C' && i != roman.size() - 1 && s[i + 1] == 'D') {
                        decimal += 400; i++;
                }
		else if (s[i] == 'C' && i != roman.size() - 1 && s[i + 1] == 'M') {
                        decimal += 900; i++;
                }
		else
			decimal += romans[roman[i]];
	}

	return decimal;
}
int main() {
	cout << sToInt("MCMXCIV") << endl;
	return 0;
}
