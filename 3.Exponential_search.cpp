#include <bits/stdc++.h>
using namespace std;
int bs(int arr[], int start, int end, int target){

    while (start <= end){
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
       
    }
    return -1;
}
int exponentialsearch(int arr[], int size, int target)
{
    if (arr[0] == target)
    {
        return 0;
    }
    int i = 1;
    while (i < size && arr[i] <= target)
    {
        i = i * 2;
    }
    return bs(arr, i/2, min(i, size - 1), target);
}

int main(){

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int size = sizeof(arr) / sizeof(int);
    int target = 16;
    int ans = exponentialsearch(arr, size, target);
    cout << "The ans is on the index : "<<ans<<endl;
    cout<<"when target is : "<<arr[ans]<<endl;
    return 0;
}
