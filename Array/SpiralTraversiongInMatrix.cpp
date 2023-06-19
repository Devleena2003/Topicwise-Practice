 vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) 
    {
        // code here 
        vector<int>v;
        int top=0,left=0,right=c-1,bottom=r-1;
        
        while(top<=bottom and left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                v.push_back(arr[top][i]);
            }
            top++;
            
            for(int i=top;i<=bottom;i++)
            {
                v.push_back(arr[i][right]);
            }
            right--;
            
            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(arr[bottom][i]);
                }
                bottom--;
            }
            
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    v.push_back(arr[i][left]);
                }
                left++;
            }
            
        }
        return v;