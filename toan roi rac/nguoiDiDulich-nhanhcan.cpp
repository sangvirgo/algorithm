#include <iostream>
#include <fstream>
#include <climits>

using namespace std;
#define MAX 20
int n, p[MAX], check[MAX], c[MAX][MAX], count = 0;
int a[MAX], xopt[MAX];
int can, cmin, fopt;
int Min_Matrix();

void init()
{
    ifstream file("nguoidulich1.txt");
    if (!file.is_open())
    {
        cout << "Cannot open file!" << endl;
        return;
    }
    file >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            file >> c[i][j];
        }
    }

    cmin = Min_Matrix();
    fopt = INT_MAX;
    can = 0;
    a[1] = 1;
    for (int i = 1; i <= n; i++)
    {
        check[i] = 1;
    }
}

int Min_Matrix()
{
    int min = c[1][2];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i != j && min > c[i][j])
            {
                min = c[i][j];
            }
        }
    }
    return min;
}

void result()
{
    cout << "So thanh pho: " << n << endl;
    cout << "Ma tran chi phi" << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Chi phi toi uu: " << fopt << endl;
    cout << "Hanh trinh: ";
    for (int i = 1; i <= n; i++)
    {
        cout << xopt[i] << " ";
    }
    cout << endl;
    cout << "So lan ham chay: " << count << endl;
}

void Swap()
{
    for (int i = 1; i <= n; i++)
    {
        xopt[i] = a[i];
    }
}

void update()
{
    int sum = can + c[a[n]][a[1]]; // important
    if (sum < fopt)
    {
        Swap();
        fopt = sum;
    }
}

void Try(int i)
{
    for (int j = 2; j <= n; j++)
    {
        if (check[j])
        {
            a[i] = j;
            check[j] = 0;
            can += c[a[i - 1]][a[i]];
            if (i == n)
            {
                update();
            }
            else if (can + (n - i + 1) * cmin < fopt)
            {
                count++;
                Try(i + 1);
            }
            check[j] = 1;
            can = can - c[a[i - 1]][a[i]];
        }
    }
}

int main()
{
    init();
    Try(2);
    result();
    return 0;
}
