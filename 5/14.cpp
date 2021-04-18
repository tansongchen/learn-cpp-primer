#include <iostream>
#include <string>
using namespace std;

int main() {
    string currentWord, recurringWord, maximallyRecurringWord;
    int times = 0, maximalTimes = 1;
    while (cin >> currentWord) {
        if (currentWord == recurringWord) times += 1;
        else {
            if (times > maximalTimes) {
                maximallyRecurringWord = recurringWord;
                maximalTimes = times;
            }
            times = 1;
            recurringWord = currentWord;
        }
    }
    if (maximalTimes >= 2) cout << maximalTimes << ' ' << maximallyRecurringWord;
    else cout << "no word recurs" << endl;
    return 0;
}
