#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 10;

    cout << ((a < b ) && (b < 5)); //0
    cout << '\n';
    cout << ((a == 5) || (b == 5)); //1
    cout << '\n';
    cout << (!(a == b)); //1
    cout << '\n';
    cout << (((a < b) && (b > 5)) || (a == 10)); //1
    cout << '\n';
    cout << (!(a == 5) && (b != 10)); //0

    return 0;
}
