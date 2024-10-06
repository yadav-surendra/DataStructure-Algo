#include <iostream>
using namespace std;

void Tower_of_hanoi(int n, string src, string helper, string dest) {
    // Base case
    if (n == 1) {
        cout << "Transferred disc " << n << " from " << src << " to " << dest << endl;
        return; // Important to return after printing
    }
    // Move n-1 discs from src to helper using dest as a helper
    Tower_of_hanoi(n - 1, src, dest, helper);
    // Move the nth disc from src to dest
    cout << "Transferred disc " << n << " from " << src << " to " << dest << endl;
    // Move the n-1 discs from helper to dest using src as a helper
    Tower_of_hanoi(n - 1, helper, src, dest);
}

int main() {
    int n = 3; // Number of discs
    Tower_of_hanoi(n, "S", "H", "D");
    return 0;
}
