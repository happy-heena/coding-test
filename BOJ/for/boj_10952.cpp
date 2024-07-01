#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    while(1) {
        // cin >> a >> b;
        // if (a == 0 && b == 0) break;
        // cout << a + b << '\n';
        scanf("%d %d",&a,&b);
        if(!a && !b){
			break;
		}
        printf("%d\n",a+b);
    }
    return 0;
}