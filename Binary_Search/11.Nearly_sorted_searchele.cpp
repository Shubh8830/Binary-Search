#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int> &v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        if (mid - 1 >= 0 && v[mid - 1] == target)
        {
            return mid - 1;
        }
        if (mid + 1 <= v.size()-1 && v[mid + 1] == target)
        {
            return mid + 1;
        }
        if (v[mid] < target)
        {
            start = mid + 2;
        }
        if (v[mid] > target)
        {
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> v{10, 3, 40, 20, 50, 80, 70};
    int target = 70;
    int ans = binarysearch(v, target);
    if (ans == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element fount at index : " << ans << endl;
    }
    return 0;
}