//Q.No - 3.
#include <iostream>
using namespace std;

void ddno(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i % 2 != 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int a;
    cout << "Enter First Number : ";
    cin >> a;
    int b;
    cout << "Enter Second Number : ";
    cin >> b;

    cout << "Odd Numbers between " << a << " and " << b << " are: " << endl;
    ddno(min(a,b),max(a,b));
}
