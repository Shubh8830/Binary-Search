class Solution 
{
    public:
    //Function to find minimum number of pages.
   bool ispossible(int arr[], int N, int M, int mid){
        int studentcount =1;
        int pagesum =0;
        
        for(int i =0; i<N; i++){
          
            if(pagesum+arr[i] <=mid){
                pagesum+=arr[i];
            }else{
                studentcount++;
                if(studentcount>M || arr[i]>mid){
                    return false;
                }
                pagesum = arr[i];
            }
        }
        return true;
        
    }
    int findPages(int arr[], int N, int M) 
    {
        //code here
          if(M>N){
                return -1;
            }
        int start =0;
        int end = accumulate(arr, arr+N, 0);
        int ans =-1;
        
     
        while(start<=end){
         int mid = start+(end-start)/2;
            if(ispossible(arr,N,M,mid)){
                ans =mid;
                end =mid-1;
                
            }else{
                start = mid+1;
            }
        }
        return ans;     
    }
};