#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowelSubstrings(const string& str) {
    int count = 0;
    int n = str.length();

    // Iterate through all possible substrings
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            bool isSubstringVowel = true;

            // Check if the substring contains only vowels
            for (int k = i; k <= j; ++k) {
                if (!isVowel(str[k])) {
                    isSubstringVowel = false;
                    break;
                }
            }

            if (isSubstringVowel) {
                ++count;
            }
        }
    }

    return count;
}

int main() {
    string str1 = "abjkoe";
    string str2 = "hgdhpw";

    cout << "Input: " << str1 << endl;
    cout << "Output: " << countVowelSubstrings(str1) << endl;

    cout << "Input: " << str2 << endl;
    cout << "Output: " << countVowelSubstrings(str2) << endl;

    return 0;
}
