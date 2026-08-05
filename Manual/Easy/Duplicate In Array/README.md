# Duplicate In Array

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM)

## Solved On
06 Aug 2026 at 03:07 am

You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <=  T  <= 10
2 <=  N <= 10 ^ 5
1 <=  ARR[i]  <= N - 1

Where 'T' denotes the number of test cases, 'N' denotes the number of elements in the array, and 'ARR[i]' denotes the 'i-th' element of the array 'ARR'.

Time limit: 1 sec
Sample Input 1:
2
5
4 2 1 3 1
7
6 3 1 5 4 3 2
Sample Output 1:
1
3
Explanation of sample input 1:
For the first test case, 
The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.

For the second test case,
The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
Sample Input 2:
2
6 
5 1 2 3 4 2  
9
8 7 2 5 4 7 1 3 6
Sample Output 2:
2
7


Hints:
1. Simply calculate the frequency of each value.
2. Try to optimise the above approach by using an array to store the frequencies.
3. Think of a solution using Floyd’s cycle finding algorithm.
4. Try to think of a solution based on bitwise XOR.

## My Notes / Approach:
Concept aur Approach:
1. XOR ki Property: XOR ka sabse bada fayda ye hai ki agar aap same numbers ka XOR karte ho, toh result 0 aata hai (e.g., a XOR a = 0 ). Aur agar aap kisi number ka 0 ke saath XOR karte ho, toh wahi number wapas mil jaata hai (e.g., a XOR 0 = a ).

2. Logic:
Pehle step mein hum array ke saare elements ka XOR nikalte hain (ans = ans ^ arr[i]).
Dusre step mein hum 1 se lekar (n - 1) tak ke saare numbers ka XOR nikalte hain.
Jab hum in dono results ko aapas mein XOR karte hain, toh saare unique numbers jo do baar aaye hain wo cancel ho kar 0 ho jaate hain, aur sirf duplicate number bachta hai.