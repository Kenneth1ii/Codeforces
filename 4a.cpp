#include <iostream>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int w;

    cin >> w;

    int result = (!(w & 1 )  && w != 2) ? true : false;

    if (result) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }

    return 0;
}
