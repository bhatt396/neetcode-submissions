class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

unordered_set<int>seen;

//so basically {}  for 1  {1,2,}

        for(int num:nums){
if(seen.find(num)!=seen.end()){
    return true;
}
seen.insert(num);
        }     
        return false;   
        
    }
};