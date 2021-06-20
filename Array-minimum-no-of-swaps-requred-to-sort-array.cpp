
// Minimum Swaps to Sort 

	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    
	    int n=nums.size();
	    vector<pair<int,int>>v(n);
	    
	    for(int i=0;i<n;i++){
	        
	        v[i]={nums[i],i};
	    }
	    sort(v.begin(),v.end());
	    int swap_need=0;
	    
	    for(int i=0;i<n;i++){
	        
	        if(v[i].second==i) continue;
	        else{
                   swap_need++;
                   swap(v[i],v[v[i].second]);
                   i--;
	        }
	    }
	    
	    return swap_need;
	    
	    
	}
