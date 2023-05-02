// #include <iostream>
// #include <vector>
// using namespace std;
// int searchtheele(vector<vector<int>> &arr, int row, int col, int target)
// {
//     int start = 0;
//     int end = row * col - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         int rowindex = mid / col;
//         int colindex = mid % col;
//         if (arr[rowindex][colindex] == target)
//         {
//             return target;
//         }
//         else if (arr[rowindex][colindex] < target)
//         {
//             start = mid + 1;
//         }
//         else
//         {
//             end = mid - 1;
//         }
//         mid = start + (end - start) / 2;
//     }
//     return -1;
// }
// int main()
// {
//     vector<vector<int>> arr{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}, {17, 18, 19, 20}};
//     int row = 5;
//     int col = 4;
//     int target = 122;
//     int answer = searchtheele(arr, row, col, target);
//     if (answer != -1)
//     {
//         cout << "element is present";
//     }
//     else
//     {
//         cout << "element is not present";
//     }
//     return 0;
// }

// <----vector------>

#include <iostream>
#include<vector>
using namespace std;
int binarysearch(vector<vector<int> > &v,int target){
  int rowsize = v.size();
  int colsize = v[0].size();
  int start = 0; 
  int end = rowsize*colsize-1;
  int mid =start+(end-start)/2;
  while(start<=end){
    int rowindex = mid/colsize;
    int colindex = mid%colsize;
    if(v[rowindex][colindex]==target){
      return mid;
    }
    if(v[rowindex][colindex]<target){
      start = mid+1;
    }
    if(v[rowindex][colindex]>target){
      end = mid-1;
    }
    mid = start +(end-start)/2;
  }
  return -1;
}

int main() {
  vector<vector<int>> v{{1,2,3,4},{5,6,7,8},{8,10,11,12},{13,14,15,16},{17,18,19,20}};
  int target = 82;
  int ans = binarysearch(v,target);
  if(ans == -1){
    cout<<" The target is not present in the array so it is invalid";
  }else{
  cout<<"Value found at index : "<<ans<< " when the target is : "<< target <<endl;
  }
  return 0;
}

