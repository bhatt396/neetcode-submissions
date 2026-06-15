 // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int count = 0;

        //     for (int j = 0; j < n; j++) {
        //         if (nums[i] == nums[j]) {
        //             count++;
        //         }
        //     }

        //     if (count > n / 2) {
        //         return nums[i];
        //     }
        // }

//better apprch  using hashmap ans see if it grater thean n/2 that is element 



//optimal approch is moore voting algo
class Solution {
public:
    int majorityElement(vector<int>& nums) {
    

int count=0;

int candidate;


for(auto num:nums){


if(count==0){
    candidate=num;
   
    }

    if(num==candidate){
        count++;
    }


    else{
        count--;
    }

}
return candidate;






    }
};
