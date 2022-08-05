using namespace std;
#include <bits/stdc++.h>
int GetPivot(vector<int>& nums)
{
    int n=nums.size();
  int s=0, e = n-1;
  int mid= s + (e-s)/2;
  while(s<e)
  {
      if(nums[mid] >= nums[0])
      {
          s = mid+1;
      }
      else {
           e = mid;
      }
      mid = s + (e-s)/2;
  }
  return nums[s] ;
}
int main()
{
    vector<int> nums({11,15,13,17});
    cout<<"Pivot element is "<<GetPivot(nums);
}