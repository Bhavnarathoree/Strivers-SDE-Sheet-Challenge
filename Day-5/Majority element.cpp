#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.
 int count = 0, element = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            count++;
            element = arr[i];
        } else if (arr[i] == element)
            count++;
        else
            count--;
    }
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element)
            count++;
    }
    if (count > n / 2)
        return element;
    return -1;
}






