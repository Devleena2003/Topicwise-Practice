 int search(int a[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
     while(l<=h){
            int mid=(l+h)/2;
            if(a[mid]==key) return mid;
            if(a[l]<=a[mid]){
                if(key>a[mid] || a[l]>key)
                l=mid+1;
                else
                h=mid-1;
            }
            else{
                if(key<a[mid] || a[h]<key)
                h=mid-1;
                else l=mid+1;
            }
        }
        return -1;
    }