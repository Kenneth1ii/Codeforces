#include<bits/stdc++.h>
using namespace std;
int main () {
    

    ios::sync_with_stdio(0);
    cin.tie(0);


    int n,  results = 0;

    scanf("%d",&n);

    for (int i = 0; i < n; i++) {
        int a, b, c; 
        scanf("%d %d %d", &a, &b, &c);

        if ( (a+b+c) > 1 )
            results++;
    }

    printf("%d\n",results);


    return 0;
}
