#include <iostream>
#include <fstream>
#include <cfloat>
#include <algorithm>
using namespace std;

#define MAX 100
int x[MAX], f[MAX][MAX];
int xopt[MAX], n, b, ind;
float w, fopt = __FLT_MIN__, cost = 0, weight = 0, a[MAX], c[MAX];

void init()
{
    ifstream file("caitui.txt");
    if (!file.is_open())
    {
        cout << "Failed to open the file." << endl;
        return;
    }

    file >> n >> b;
    cout << "So luong do vat: " << n << endl;
    cout << "Trong luong toi da: " << b << endl;

    for (int i = 1; i <= n; i++)
    {
        file >> c[i];
    }
    for (int i = 1; i <= n; i++)
    {
        file >> a[i];
    }
    file.close();
}

void result(void)
{
    cout << "Gia tri su dung toi uu: " << fopt << endl;
    cout << "Cau hinh toi uu la: ";
    for (int i = 1; i <= n; i++)
    {
        cout << xopt[i] << " ";
    }
    cout << endl;
    cout << "Vector trong luong: ";
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Vector gia tri su dung: ";
    for (int i = 1; i <= n; i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
}

void swapDonGia()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (c[j] / a[j] > c[i] / a[i])
            {
                swap(a[j], a[i]);
                swap(c[j], c[i]);
            }
        }
    }
}

void update()
{
    int sum = 0;
    if (weight <= b)
    {
        for (int i = 1; i <= n; i++)
        {
            sum += x[i] * c[i];
        }
        if (fopt < sum)
        {
            fopt = sum;
            for (int i = 1; i <= n; i++)
            {
                xopt[i] = x[i];
            }
        }
    }
}

void Branch_And_Bound(int i)
{
    int t = (b - weight) / a[i];
    //  do chi co lay va khong lay thoi
    if (t > 1)
    {
        t = 1;
    }
    for (int j = t; j >= 0; j--)
    {
        x[i] = j;
        weight += a[i] * x[i];
        cost += c[i] * x[i];
        if (i == n)
        {
            update();
        }
        else if (cost + c[i + 1] * (b - weight) / a[i + 1] > fopt)
        {
            Branch_And_Bound(i + 1);
            weight -= a[i] * x[i];
            cost -= c[i] * x[i];
        }
    }
}

int main()
{
    init();
    swapDonGia();
    Branch_And_Bound(1);
    result();
    return 0;
}
