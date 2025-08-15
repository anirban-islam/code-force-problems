#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w >= 1 && w <= 100)
        cout << (( w % 2 == 0 && w > 2 )? "YES" : "NO");

    return 0;
}
