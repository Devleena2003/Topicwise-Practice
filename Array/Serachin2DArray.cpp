	int matSearch (vector <vector <int>> &arr, int n, int m, int k)
	{
	    // your code here
	    int j = m-1,i = 0;
       while(i < n and j >= 0)
       {
           if(arr[i][j] == k) return 1;
           else if(arr[i][j] < k) i++;
           else j--;
       }
       return 0;
	}