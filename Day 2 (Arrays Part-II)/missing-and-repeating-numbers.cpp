#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findDuplicate(vector<int> arr)
{

    for (auto j : arr)
    {
        int i = abs(j);

        if (arr[i] < 0)
            return i;
        else
            arr[i] = -abs(arr[i]);
    }

    return -1;
}

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{

    const int rep = findDuplicate(arr);
    const int mis = ((n) * (n + 1) / 2) - accumulate(arr.begin(), arr.end(), 0) + rep;

    return {mis, rep};
}
