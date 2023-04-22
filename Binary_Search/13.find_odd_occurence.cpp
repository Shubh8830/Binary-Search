#include <iostream>
#include <vector>
using namespace std;
int oddocc(vector<int> &v)
{
    int start = 0;
    int end = v.size() - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (start == end)
        {
            return start;
        }
        if (mid % 2 == 0)
        {
            if (v[mid] == v[mid + 1])
            {
                start = mid + 2;
            }
            else
            {
                end = mid;
            }
        }
        else
        {
            if (v[mid] == v[mid - 1])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    vector<int> v{1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9};
    int ans = oddocc(v);
    if (ans == -1)
    {
        cout << "Ans not found Sorry ";
    }
    else
    {
        cout << "the odd occurence at index : " << ans << " and the element is : " << v[ans];
    }

    return 0;
}