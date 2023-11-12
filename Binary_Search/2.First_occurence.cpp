#include <iostream>
#include <vector>
using namespace std;
int firstocc(vector<int> &arr, int target)
{

    int start = 0;
    
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    int ans;

    
    
    
    while (start <= end)
    {

        if (arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 3, 4, 4, 4, 4, 4, 6, 7, 9};
    int target = 4;
    int answer = firstocc(arr, target);
    cout << "The index of target " << target << " is " << answer << endl;

    return 0;
}