#include <bits/stdc++.h>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr, int n)
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
