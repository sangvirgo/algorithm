#include <iostream>
#include <fstream>

#define MAX 100

int A[MAX], C[MAX], XOPT[MAX], X[MAX];
int n, b;
float W, FOPT = -32000, cost, weight = 0;

void Update_Kyluc() {
    if (cost > FOPT) {
        FOPT = cost;
        for (int i = 1; i <= n; i++) {
            XOPT[i] = X[i];
        }
    }
}

void Branch_And_Bound(int i) {
    if (weight <= b && cost > FOPT) {
        Update_Kyluc();
    }
    if (i > n || weight >= b) {
        return;
    }

    X[i] = 1;
    weight += A[i];
    cost += C[i];
    Branch_And_Bound(i + 1);
    weight -= A[i];
    cost -= C[i];

    X[i] = 0;
    Branch_And_Bound(i + 1);
}

int main() {
    std::ifstream fp("caitui.txt");
    if (!fp.is_open()) {
        std::cout << "Failed to open the file.\n";
        return 1;
    }

    fp >> n >> b;
    std::cout << "So luong do vat: " << n << std::endl;
    std::cout << "Trong luong tui: " << b << std::endl;

    for (int i = 1; i <= n; i++) {
        fp >> A[i] >> C[i];
    }

    fp.close();

    Branch_And_Bound(1);

    std::cout << "Ket qua toi uu: " << FOPT << std::endl;
    std::cout << "Phuong an toi uu: ";
    for (int i = 1; i <= n; i++) {
        std::cout << XOPT[i] << " ";
    }

    return 0;
}
