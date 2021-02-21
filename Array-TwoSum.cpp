// two sum problem using  hashing and two pointer in c++
// time complexity O(n)
#include <bits/stdc++.h>
using namespace std;


// two pointer approah
vector<int> TwoSum(vector<int> &v, int target)
{

    int n = v.size();
    vector<int> v1, v2 = {};

    int p1 = 0, p2 = n - 1;

    while (p1 < p2)
    {

        int sum = v[p1] + v[p2];
        if (sum == target)
        {
            cout << v[p1] << " " << v[p2] << "\n";
            //  cout<<p1<<" "<<p2<<"\n";
            v1.push_back(p1);
            v1.push_back(p2);
            return v1;
        }
        else if (sum < target)
        {
            p1++;
        }
        else if (sum > target)
        {
            p2--;
        }

      
    }
      return v2;
}

// hashing approach

vector<int> TwoSum_Hashing_Approach(vector<int> &nums, int target){

    vector<int>result;


    unordered_map<int,int>m1;
    for(int i=0;i<nums.size();i++){

        if(m1.find(target-nums[i])!=m1.end()){
            result.push_back(m1[target-nums[i]]);
            result.push_back(i);
            return result;
        }

        m1[nums[i]]=i;
    }
    return result;
}

int main()
{

    // vector<int>v={2,7,11,15};
    vector<int> v = {3, 2, 4};

    // vector<int> result = TwoSum(v, 6);
       vector<int> result =  TwoSum_Hashing_Approach(v, 6);

    for (auto it : result)
    {
        cout << it << " ";
    }
    return 0;
}
