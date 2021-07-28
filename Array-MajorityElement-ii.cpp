// 229. Majority Element II

class Solution {
public:
    
    /*  boyer moore voting algorithm
       In this problem we need to find the majority element a majority element is that
       which appear more than n/3  remember one thing is majority elements cannot be
       more than 2  so we need to find only two elements in array it can de done using 
       moore voting algorhitm in this particular algorithm the number of times a element        occur will decrease the possibilites of other element to be occur.
    */
    vector<int> majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int nums1=-1,nums2=-1,cnt1=0,cnt2=0;
        
        for(auto it:nums){
            
            if(nums1==it){     // nums1 is first major element  just count its freq
                cnt1++;
            }
            else if(nums2==it){  // nums2 is second major element just count its freq
                cnt2++;
            }
            else if(cnt1==0){ // if cnt1 becomes 0 it means  current nums1 cannot be major element so we found a new possible element
                nums1=it;
                cnt1=1;
            }
            else if(cnt2==0)//{if cnt2 becomes 0 it means  current nums2 cannot be major element so we found a new possible element
                nums2=it;
                cnt2=1;
            }
            else{
                
                // decrease the possibilities of major element nums1 and nums2
                cnt1--;
                cnt2--;
                
            
            }
        }
        
        
        vector<int>res;
        
          cnt1=0,cnt2=0;
        
        for(auto it:nums){
            if(it==nums1){
                cnt1++;
            }
            else if(it==nums2){
                cnt2++;
            }
        }
        
        if(cnt1>n/3){
            res.push_back(nums1);
        }
        
        if(cnt2>n/3){
            res.push_back(nums2);
        }
        
        return res;
    }
};
