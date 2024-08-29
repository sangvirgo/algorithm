#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        vector<int> v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());
        bool found=false;
        do {
            int a=v[2];
            int b=v[3];
            if((a+b==v[0]&& a-b==v[1]) || (a-b==v[0]&& a+b==v[1])){
                found=true;
                cout<< a << " " << b << endl;
                break;
            }
        } while(next_permutation(v.begin(), v.end()));

        if (!found) {
            cout << -1 << endl;
        }
    }

    return 0;
}
