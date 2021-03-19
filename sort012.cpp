void sortColors(vector<int>& v) {
		
		// a maps to end of subarray of all zeros
		// b maps to end of subarray of all ones
        int a{-1},b{-1}; 
        for(int i = 0;i<v.size();i++)
        {
            if(v[i] == 0)
            {
                a++; 
                if(v[a] != 0) 
                    swap(v[a],v[i]); 
                b++;
                if((a<b) and (v[b] != 1)) // a has to be less than b because if a > b does not makes sense 
                    swap(v[b],v[i]); // and a=b is the case when no ones are found yet.
            }
            else if(v[i] == 1)
            {
                b++;
                if(v[b] != 1)
                    swap(v[b],v[i]);
            }
        }
    }
