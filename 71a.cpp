#include <bits/stdc++.h>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);


    string s;
    int n;

    cin >> n;

    for ( int i = 0; i < n; i++ ) {

        cin >> s;
        
        if ( s.length() <=  10 )
            cout << s << "\n";
        else {
            cout << s[0] << s.length() - 2 << s.back() << "\n";
        }

    }




    return 0;
}
