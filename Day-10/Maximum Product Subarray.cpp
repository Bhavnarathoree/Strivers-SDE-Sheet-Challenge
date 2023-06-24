#include <bits/stdc++.h>
int maximumProduct(vector<int> &arr, int n)
{
    // Write your code here
    int p = 1, s = 1, maxproduct = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (p == 0)
            p = 1;
        if (s == 0)
            s = 1;
        p *= arr[i];
        s *= arr[n - i - 1];
        maxproduct = max(maxproduct, max(p, s));
    }
    return maxproduct;
}
