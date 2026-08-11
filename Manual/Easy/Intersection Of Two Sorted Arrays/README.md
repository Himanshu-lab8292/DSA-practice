# Intersection Of Two Sorted Arrays

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM)

## Solved On
11 Aug 2026 at 03:25 pm

Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N, M <= 10^4
0 <= A[i] <= 10^5
0 <= B[i] <= 10^5

Time Limit: 1 sec
Sample Input 1 :
2
6 4
1 2 2 2 3 4
2 2 3 3
3 2
1 2 3
3 4  
Sample Output 1 :
2 2 3
3   
Explanation for Sample Input 1 :
For the first test case, the common elements are 2 2 3 in both the arrays, so we print it.

For the second test case, only 3 is common so we print 3.
Sample Input 2 :
2
3 3 
1 4 5
3 4 5
1 1
3
6
Sample Output 2 :
4 5
-1

## My Notes / Approach:
ek bahut hi efficient Two-Pointer Approach hai, jo tab kaam aata hai jab dono arrays already sorted 
Iska logic simple hai:

1. Two Pointers: Hum do pointers, i (pehle array ke liye) aur j (dusre array ke liye), dono ko o index par set karte hain.

2. Comparison:
Agar arr1[i] == arr2[j]: Element match ho gaya! Ise result mein daal do aur i aur j dono ko ek step aage badha do (i++, j++).
Agar arr1[i] < arr2[j]: Chunki array sorted hai, iska matlab arr1[i] chota hai aur ye kisi bhi bade element se match nahi hoga. Isliye sirf i ko aage badhao (i++).
Agar arr1[i] > arr2[j]: Isi tarah, j ko aage badhao (j++).

Ye optimized kyun hai?
Brute force mein hum nested loops use karte hain jisse time complexity O(n²) ho jati hai. Ye two-pointer approach poore array ko sirf ek baar scan karta hai, jisse time complexity O(n + m) ho jati hai, jo bahut fast hai.