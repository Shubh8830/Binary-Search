#include <iostream>
#include <vector>
using namespace std;
int lastocc(vector<int> &arr, int target)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start);
    int ans;
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, 4, 4, 4, 4, 6, 7, 11, 12};
    int target = 4;
    int ans = lastocc(arr, target);
    cout << "The last occercence of " << target << " is " << ans << endl;

    return 0;
}