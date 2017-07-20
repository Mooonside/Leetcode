#include<iostream>
#include<cstring>
using namespace std;
int C(int n, int m) {
    double re = 1;
    int i;
    for (i = 0; i < m; i++) { re *= (n - i); }
    for (i = 1; i <= m; i++) { re /= i; }
    return (int)re;
}

int solve(int n, char *a, int as, int ae, char *b, int bs, int be) {
    if (as == ae&&bs == be)return 1;
    int i, j;
    i = as + 1;
    j = be - 1;
    int num = 0;
    int ans = 1;
    while (i <= ae) {
        for (; a[i] != b[j] && j >= bs; j--) {}
        if (a[i] == b[j]) {
            num++;
            ans *= solve(n, a, i, i + j - bs, b, bs, j);
            i += j - bs + 1;
            bs = j + 1;
            j = be - 1;
        }
    }
    //if(i==ae)num++;
    return C(n, num)*ans;
}

int main() {
    char a[26], b[26];
    int n;
    int alen, blen;
    while (cin >> n && n) {
        cin >> a >> b;
        alen = strlen(a);
        blen = strlen(b);
        cout << solve(n, a, 0, alen - 1, b, 0, blen - 1) << endl;
    }
    return 0;
}