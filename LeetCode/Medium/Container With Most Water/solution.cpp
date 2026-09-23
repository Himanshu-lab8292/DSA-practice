class Solution {
public:
    int maxArea(vector<int>& height) {
//         int n = height.size();
//         int maxWater=0;

//         for (int i=0; i<n;i++){
//             for(int j=i+1; j<n;j++){
//                 int h=min(height[i],height[j]);
//                 int width=j-i;
//                 int area = h*width;

//                 maxWater = max(maxWater,area);
//             }
//         }
//         return maxWater;
//     }
// };

// yee Brute Force tha.

int left =0;
int right=height.size()-1;
int maxWater =0;

while (left<right){
    int h = min (height[left],height[right]);
    int width =right - left;
    int area = h*width;


    maxWater = max(maxWater, area);

    if(height[left]<height[right]){
        left++;
    }
    else
    {
        right--;
    }
}
   return maxWater; 
    }

};