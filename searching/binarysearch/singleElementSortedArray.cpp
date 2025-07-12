#include<bits/stdc++.h>
using namespace std;

 int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int st=0,end=nums.size()-1;
        while(st<=end)
        {
            
            int mid=st + (end-st)/2;
            if(mid==0 && nums[mid]!=nums[mid+1]) return nums[mid];
            if(mid==n-1 && nums[mid]!=nums[mid-1]) return nums[mid];

            if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];

            if(mid%2==0){   // even
                if(nums[mid-1]==nums[mid]){
                    end=mid-1;
                }else{
                    st=mid+1;
                }
            }else{
                if(nums[mid-1]==nums[mid]){
                    st=mid+1;
                }else{
                    end=mid-1;
                }
            }
    

        }
            return -1;
    }

int main(){
    
    vector<int>vec = {1,2,2,3,3,4,4};
    cout<<"The the Unique elemnt is: "<<singleNonDuplicate(vec);

    return 0;
}
