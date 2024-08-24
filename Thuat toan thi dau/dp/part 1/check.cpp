#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting
{
    Meeting(int aa = 1, int bb = 1, int nn = 1)
    : a(aa), b(bb), num(nn)
    { };
    int a; // Thời điểm bắt đầu cuộc họp
    int b; // Thời điểm kết thúc cuộc họp
    int num; // Số thứ tự của cuộc họp
};

const int N = 1e3 + 10;
int n, f[N], d[N];
Meeting m[N];

// Hàm so sánh để sắp xếp
bool compare(const Meeting& x, const Meeting& y)
{
    return x.a < y.a || (x.a == y.a && x.b < y.b);
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        m[i].num = i;
        cin >> m[i].a >> m[i].b;
    }
    sort(m + 1, m + n + 1, compare);
    // Bước quy hoạch động
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
            if (m[j].b <= m[i].a && f[i] < f[j] + 1)
            {
                f[i] = f[j] + 1;
                d[i] = j;
            }
    }
    // Truy vết
    int t = 1;
    for (int i = 1; i <= n; i++)
        if (f[i] > f[t])
            t = i;
    vector<int> seq;
    while (t)
    {
        seq.push_back(m[t].num);
        t = d[t];
    }
    for (auto i = seq.rbegin(); i != seq.rend(); i++)
        cout << (*i) << ' ';
}