#include<iostream>
#include <limits>
using namespace std;

// Function prototypes
void getInfo(int &n, int &k) {
do {
    cout << "How many balls (1-12) are in the pool to pick from? ";
    cin >> n;
    if (cin.fail() || n < 1 || n > 12) {
        cout << "Input Error! There must be between 1 and 12 balls .\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    break;
} while (true);

do {
    cout << "How many balls (1-" << n << ") will be drawn? ";
    cin >> k;
    if (cin.fail() || k < 1 || k > n) {
        cout << "Input Error!\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    break;
} while (true);
}
long long factorial(int num) {
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}
double computeWays(int n, int k) {
    return 1.0 / (factorial(n) / (factorial(k) * factorial(n-k)));
}





