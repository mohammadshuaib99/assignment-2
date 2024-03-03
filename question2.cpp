#include <iostream>
#include <string>

using namespace std;

char secondLargestDigit(const string& str) {
    char largest = '\0';
    char secondLargest = '\0';
    
    for (char c : str) {
        if (isdigit(c)) {
            int digit = c - '0';
            
            if (digit > largest) {
                secondLargest = largest;
                largest = digit;
            } else if (digit < largest && digit > secondLargest) {
                secondLargest = digit;
            }
        }
    }
    
    return secondLargest;
}

int main() {
    string str1 = "2947578";
    string str2 = "1241";
    
    cout << "Input: " << str1 << endl;
    cout << "Output: " << secondLargestDigit(str1) << endl;
    
    cout << "Input: " << str2 << endl;
    cout << "Output: " << secondLargestDigit(str2) << endl;
    
    return 0;
}
