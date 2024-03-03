#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool areAnagrams(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    string sortedS = s;
    string sortedT = t;

    // Sort characters in both strings
    sort(sortedS.begin(), sortedS.end());
    sort(sortedT.begin(), sortedT.end());

    // Compare sorted strings
    return sortedS == sortedT;
}

int main() {
    string s1 = "car";
    string t1 = "arc";
    string s2 = "book";
    string t2 = "hook";

    cout << "Input: " << s1 << ", " << t1 << endl;
    cout << "Output: " << (areAnagrams(s1, t1) ? "True" : "False") << endl;

    cout << "Input: " << s2 << ", " << t2 << endl;
    cout << "Output: " << (areAnagrams(s2, t2) ? "True" : "False") << endl;

    return 0;
}
