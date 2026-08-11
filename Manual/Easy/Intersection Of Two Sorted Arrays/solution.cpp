#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0, j=0;              // 1. Do pointers banaye (i ? arr1, j ? arr2)
	vector<int>ans;            // 2. Answer store karne ke liye
	while(i<n && j<m){         // 3. Jab tak dono arrays mein elements hain

	if (arr1[i]==arr2[j])      // 4. Agar dono equal hain ? common mil gaya
    {
		ans.push_back(arr1[i]);//    Answer mein daal do
		i++;                   //    Dono pointers aage badhao
		j++;
	}
	else if(arr1[i]<arr2[j]){  // 5. Agar arr1 ka element chhota hai
		i++;                   //    Sirf i aage badhao
    }
	} 
	else                       // 6. Agar arr2 ka element chhota hai
	{
		j++;                   //    Sirf j aage badhao
	}
    
    }
	return ans;                // 7. Answer return kar do
}