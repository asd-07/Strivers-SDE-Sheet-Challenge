#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
   int low = 0;
   int mid = 0;
   int high = n-1;
   while(mid <= high){
      if(nums[mid] == 0){
         swap(nums[mid], nums[low]);
         low++;
         mid++;
      }
      else if(nums[mid] == 1){
         mid++;
      }
      else{
         swap(nums[mid],nums[high]);
         high--;
      }
   }
   
}
