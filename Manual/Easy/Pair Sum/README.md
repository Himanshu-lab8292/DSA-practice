# Pair Sum

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM)

## Solved On
21 Aug 2026 at 11:10 am

Problem statement
You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

Note:

Each pair should be sorted i.e the first value should be less than or equals to the second value. 

Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10^3
-10^5 <= ARR[i] <= 10^5
-2 * 10^5 <= S <= 2 * 10^5

Time Limit: 1 sec
Sample Input 1:
5 5
1 2 3 4 5
Sample Output 1:
1 4
2 3
Explaination For Sample Output 1:
Here, 1 + 4 = 5
      2 + 3 = 5
Hence the output will be, (1,4) , (2,3).
Sample Input 2:
5 0
2 -3 3 3 -2
Sample Output 2:
-3 3
-3 3
-2 2

## My Notes / Approach:
Approach (Brute Force - Recommended)
Kyunki N <= 1000 hai, O(N²) bilkul acceptable hai.
Steps:
1. Array ko sort kar do.
2. Do nested loops chalao:
Outer loop i → 0 se n-1
Inner loop j → i+1 se n-1
3. Agar arr[i] + arr[j] S ho, toh pair {arr[i], arr[j]} answer mein daal do.
4. Answer return kar do.

Why j = i + 1 ?
Same element do baar use nahi hoga.
Reverse pairs (4,1) nahi aayenge.
Pair already sorted rahega (kyunki array sorted hai).

Time & Space Complexity
Time: O(N2) (sorting O(N log N) + nested loops O(N2))
Space: O(1) extra (answer ko chhod ke)

Important Points (Yaad rakhne layak)
1. Array sort kyun kiya?
Pairs already sorted order mein aajaye.
2. j = i + 1 kyun?
Duplicate & reverse pairs avoid karne ke liye
3. N = 1000
O(N2) safely chal sakta hai.
4. Negative numbers
Sort ki wajah se handle ho jaate hain.
5. Duplicate pairs
Problem allow karti hai (Sample 2).