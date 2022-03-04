	void pushZerosToEnd(int a[], int n) {
	    // code here
	    
	    
	    
	     int count=0;
	     for(int i=0;i<n;i++){
	         
	         
	         if(a[i]!=0){
	             swap(a[i],a[count]);
	             count++;
	         }
	     }
	    
	 
	}
