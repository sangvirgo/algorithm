    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define MAX 1000000
    const int MOD = 1e9 + 7;
    /*
    BÀI 1H: ƯỚC CHUNG LỚN NHẤT

    Cho dãy số A[] có N phần tử. Nhiệm vụ của bạn là hãy tìm 2 số nguyên trong dãy số sao cho UCLN của chúng là lớn nhất có thể.

    Input:

    Dòng đầu tiên là số lượng bộ test T (T ≤ 20).

    Mỗi test bắt đầu bởi số nguyên dương N (1 ≤ N ≤ 100 000).

    Dòng tiếp theo gồm N số nguyên A[i] (1 ≤ A[i] ≤ 106).

    Output: 

    Với mỗi test, in ra UCLN chung lớn nhất tìm được trên một dòng.

    Test ví dụ:

    Input

    Output

    2

    5

    4 14 15 7 9

    4

    1 6 9 2

    7

    3

    Giới hạn thời gian: 1s

    Giới hạn bộ nhớ: 524288 Kb
    */
    int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    while(t--) {
        int n; cin >>n;
        vector<int> a(n);
        vector<int> cnt(MAX+1, 0);
        for(int i=0; i<n; i++) cin >> a[i], cnt[a[i]]++;
        int res=0;

        for(int x=MAX; x>0; x--) {
            int count=0;
            for(int j=x; j<=MAX; j+=x) {
                count+=cnt[j];
            }
            if(count>=2) {
                cout << x << endl;
                break;
            }
        }
    }
    return 0;
    }