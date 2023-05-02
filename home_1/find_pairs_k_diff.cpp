//1st approach
  int findPairs(vector<int>& nums, int k) {
        set<pair<int,int> >s;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<size(nums);i++){
            for(int j = i+1; j< size(nums); j++){
                if(abs(nums[i]-nums[j])==k){
                    s.insert({nums[i],nums[j]});
                }
            }
        }
        return s.size();
    }
    