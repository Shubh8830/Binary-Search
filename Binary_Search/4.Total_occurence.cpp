#include <iostream>
#include <vector>
using namespace std;
int firstocc(vector<int> &v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}
int lastocc(vector<int> &v, int target)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;
    while (start <= end)
    {
        if (v[mid] == target)
        {
            ans = mid;
            start = mid + 1;
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
    return ans;
}

int totalocc(vector<int> &v, int target)
{
    int ans = lastocc(v, target) - firstocc(v, target) + 1;
    return ans;
}
int main()
{
    vector<int> v{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 7, 8, 9};
    int target = 4;
    int answer = totalocc(v, target);
    cout << "The total occurence of " << target << " is " << answer;
    return 0;
}