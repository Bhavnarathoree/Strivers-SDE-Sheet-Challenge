#include <bits/stdc++.h>
#include <algorithm>
string fourSum(vector<int> arr, int target, int n) {

    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 3; i++) {
        for (int j = i + 1; j < n - 2; j++) {
            long t = static_cast<long>(target) - static_cast<long>(arr[i]) - static_cast<long>(arr[j]);
            int k = j + 1;
            int l = n - 1;
            while (k < l) {
                long val = static_cast<long>(arr[k]) + static_cast<long>(arr[l]);
                if (val < t)
                    k++;
                else if (val > t)
                    l--;
                else {
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
