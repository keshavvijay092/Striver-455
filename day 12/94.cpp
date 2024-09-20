approach 1:solved using sorting the array 

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
    
    sort(arr.begin(),arr.end());
    
      int ceil = -1;
      int floor = -1;
     
     int n = arr.size();
     int s = 0;
     int e = arr.size()-1;
     
     while(s<=e)
    {
     int mid = s + (e-s)/2;
    
     if(arr[mid] == x)
     {
         return {arr[mid],arr[mid]};
     }
     else if(arr[mid]<x)
     {
        floor = mid;
        s = mid+1;
     }
     else
     {
         ceil = mid;
         e = mid-1;
     }
    }
    
    if(ceil == -1)  return {arr[floor],-1};
    if(floor == -1)  return {-1,arr[ceil]};
    return {arr[floor],arr[ceil]};
      
    }

    approach 2:solve without sorting 

          int floorElement = -1;
      int ceilElement = -1;
      bool flag = true;
      for(int i=0;i<arr.size();i++)
      {
             if(x<=arr[i])
             {
                 if(flag)
                 {
                     ceilElement = arr[i];
                     flag =false;
                 }
                 
                 if(arr[i] <= ceilElement)
                 {
                     ceilElement = arr[i];
                 }
             }
            
            if(x>=arr[i])
             {
                     if(arr[i]>=floorElement)
                     {
                         floorElement = arr[i];
                     }
             }
      }
      return {floorElement,ceilElement};
