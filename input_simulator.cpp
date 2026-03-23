#include <iostream>
#include <sstream>
using namespace std;

int main() {
    // Fake input
    string input = "10 20";

    stringstream ss(input);
    int a, b;
    ss >> a >> b;

    cout << a + b << endl; // 30
    return 0;
}