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

// better solution
int romanToIntEnhanced(string roman) {

	int total = 0;
    unordered_map<char, int> romans = {
        {'I', 1}, {'V', 5}, {'X', 10},
        {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}
    };
	
	int total = 0;
    int prev = 0;

    for (int i = roman.size() - 1; i >= 0; i--) {
        int curr = romans[roman[i]];
        if (curr < prev)
            total -= curr;   // subtract if smaller before larger (e.g., IV, IX)
        else
            total += curr;   // otherwise, just add
        prev = curr;
    }
    return total;
}

int main() {
	cout << romanToIntEnhanced("MCMXCIV") << endl;
	return 0;
}
