  int findFloor(vector<long long> &v, long long n, long long x) {

       long long int k = -1;
       
       long long int s = 0;
       long long int e = n-1;
       
       while(s<=e)
       {
        int mid = s+(e-s)/2;
        
        if(v[mid] == x)
        {
            return mid;
        }
        else if(v[mid]>x)
        {
            e = mid-1;
        }
        else
        {
            k = mid;
            s = mid+1;
        }
        
       }
       return k;
    }