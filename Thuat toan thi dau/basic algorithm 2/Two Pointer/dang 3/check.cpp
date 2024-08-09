#include <bits/stdc++.h>


using namespace std;

// Hàm nhân hai số lớn dưới dạng chuỗi
string multiplyStrings(string num1, string num2) {
    int n1 = num1.size();
    int n2 = num2.size();
    if (num1 == "0" || num2 == "0") return "0";
    
    vector<int> result(n1 + n2, 0);
    
    for (int i = n1 - 1; i >= 0; --i) {
        for (int j = n2 - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }
    
    string product = "";
    for (int i = 0; i < result.size(); ++i) {
        if (!(product.empty() && result[i] == 0)) {
            product.push_back(result[i] + '0');
        }
    }
    
    return product;
}

// Hàm so sánh hai số lớn dưới dạng chuỗi
int compareStrings(const string& str1, const string& str2) {
    if (str1.size() > str2.size()) return 1;
    if (str1.size() < str2.size()) return -1;
    for (int i = 0; i < str1.size(); ++i) {
        if (str1[i] > str2[i]) return 1;
        if (str1[i] < str2[i]) return -1;
    }
    return 0;
}

int main() {
    string P;
    cin >> P;

    for (int X = 1; X <= 100000; ++X) {
        string current_product = to_string(X);

        for (int Y = X; Y <= 100000; ++Y) {
            if (compareStrings(current_product, P) == 0) {
                cout << X << " " << Y << endl;
                return 0;
            }
            
            if (compareStrings(current_product, P) > 0) {
                break;
            }
            
            current_product = multiplyStrings(current_product, to_string(Y + 1));
        }
    }

    return 0;
}
