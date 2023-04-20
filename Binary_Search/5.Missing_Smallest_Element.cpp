#include <iostream>
#include <vector>
using namespace std;
int missingele(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while (start < end)
    {

        if (mid + 1 == arr.size() - 1)
        {
            return arr.size();
        }
        if (arr[mid] == mid)
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return end;
}
int main()
{
    vector<int> arr{0, 1, 2, 3, 4, 5, 6, 7, 8};
    int answer = missingele(arr);
    cout << "The smallest missing number is " << answer;
    return 0;
}