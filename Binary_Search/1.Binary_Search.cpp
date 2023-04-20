#include <iostream>
#include <vector>
using namespace std;
int binarySear(vector<int> &v, int target)
{
    int start = 0;
    int end = v.size();
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            start = mid + 1;
        }
        else if (v[mid] > target)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> v{1, 3, 7, 9, 11, 13, 15, 19};
    int target = 11;
    int ans = binarySear(v, target);
    if (ans == -1)
    {
        cout << "Target is not found ";
    }
    else
    {

        cout << "The target " << target << " is present at index " << ans << endl;
    }
    return 0;
}