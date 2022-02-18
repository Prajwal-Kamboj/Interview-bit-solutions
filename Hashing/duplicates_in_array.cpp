class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        bool before = false;
        bool after = false;
        
        for(int i =0 ; i< nums.size(); i++){
            
           
            
            if( i > 0 ){
                if( nums[i]!=nums[i-1]) before = false;
                else return true;
            }
            
            if( i < nums.size() -1 ){
                if( nums[i]!= nums[i+1] )  after = false;
                else return true;
            }
        }
        return false;
        
    }
};


// 2nd solution

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set <int> s(nums.begin(), nums.end());
        return ( s.size() != nums.size());
        
    }
};