void sort012(int a[], int n)
    {
        // code here 
        int low=0,mid=0,high=n-1;
        while(mid<=high){
       if(a[mid]==0){
           swap(a[low++],a[mid++]);
           
       }
       else if(a[mid]==1){
           a[mid++];
           
       }
       else if(a[mid]==2){
           swap(a[mid],a[high--]);
       }
        }
    }