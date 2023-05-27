class Solution
{
    
  public:
  
  bool ispossible(int arr[], int n, int k, long long mid){
      long long sum =0;
      int count =1;
      for(int i =0; i<n; i++){
          if(arr[i]>mid){
              return false;
          }
          if(sum+arr[i]>mid){
              count++;
              sum = arr[i];
              if(count>k){
                  return false;
              }
              
              
          }else{
              
              sum+=arr[i];
          }     
      }
      return true;
  }
    long long minTime(int arr[], int n, int k)
    {
        // code here
        // return minimum time
     
        long long start =0;
        long long end = 0;
        for(int i =0; i< n; i++){
            end+=arr[i];
        }
        long long ans =-1;
        while(start<=end){
            long long mid = start+(end-start)/2;
            if(ispossible(arr,n,k,mid)){
                ans = mid;
                end = mid-1;
            }else{
                start =mid+1;
            }
        }
        return ans;
    }
};