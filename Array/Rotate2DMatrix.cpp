	void rotateMatrix(vector<vector<int>>& arr, int n) {
	    // code here 
	    //transpose matrix
	    for(int i=0;i<n;i++){
	        for(int j=i;j<n;j++){
	            swap(arr[i][j],arr[j][i]);
	        }
	    }
	    
	    //reverse row
	    for(int i=0;i<n/2;i++){
	        for(int j=0;j<n;j++){
	           swap(arr[i][j],arr[n-i-1][j]) ;
	        }
	    }
	}