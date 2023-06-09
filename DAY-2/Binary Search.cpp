int search(vector<int>& nums, int target) {
    // Write Your Code Here
    int s=0;
    int e=nums.size()-1;
      int i=0;
    while(s<=e){
      if (nums[s] == target) {
        return i;
      } 
      i++;
    s++;
    }
 
    return -1;
    }
