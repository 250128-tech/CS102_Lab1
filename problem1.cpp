// This is problem 2

#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    int x = 0;
    if ( ( a>b && a<c) || ( a>c && a<b) ) {
        x = a;
    } else if ( ( b>a && b<c) || ( b>c && b<a) ) {
        x = b;
    } else {
        x = c;
    }
    cout << x;
    return 0;
}