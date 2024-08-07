//Q.No - 1.

#include <iostream>
using namespace std;

void sq(int n) {
    int s;
    for(int i = 1; i<=n; i++){
        s = i * i;
        cout<<s<<endl;  
    }
}

int main() {
    int n;
    cout << "Enter Natural Number : ";
    cin >> n;
    sq(n);
}
