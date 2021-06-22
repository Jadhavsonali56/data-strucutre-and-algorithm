#include<bits/stdc++.h>
using namespace std;
pair<int, int>maxAndMin(int *a, int n)
{
    pair<int, int> p;
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    p.first = max;
    p.second = min;
    return p;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {cin >> a[i];}
    pair<int, int> p = maxAndMin(a, n);
    cout << p.first << " " << p.second;
    return 0;
}