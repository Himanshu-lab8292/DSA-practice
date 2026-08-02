# Find Unique (0+ a)

## Difficulty: Easy

## Platform: Manual

## Problem Link
[View Problem](https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM&count=25&search=&sort_entity=order&sort_order=ASC)

## Solved On
03 Aug 2026 at 01:39 am

You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].

Now, in the given array/list, 'M' numbers are present twice and one number is present only once.

You need to find and return that number which is unique in the array/list.

 Note:
Unique element is always present in the array/list according to the given condition.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Explanation: The array is [2, 3, 1, 6, 3, 6, 2]. Here, the numbers 2, 3, and 6 are present twice, and the number 1 is present only once. So, the unique number in this array is 1.
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
Explanation: In the first test case, the array is [2, 4, 7, 2, 7]. Here, the numbers 2 and 7 are present twice, and the number 4 is present only once. So, the unique number in this array is 4.

10
Explanation: In the second test case, the array is [1, 3, 1, 3, 6, 6, 7, 10, 7]. Here, the numbers 1, 3, 6, and 7 are present twice, and the number 10 is present only once. So, the unique number in this array is 10.

## My Notes / Approach:
 'Find Unique Element' problem ko samjhaya gaya hai. Iska main motive ek aise number ko find karna hai jo array mein sirf ek baar aaya hai, jabki baki sabhi numbers do-do baar repeat ho rahe hain.

Approach:

* Isko solve karne ke liye XOR operator ka use kiya gaya hai.
* Logic: Agar aap same numbers ka XOR karte ho (jaise a a), toh result 0 aata hai. Aur agar aap 0 ka kisi     number ke sath XOR karte ho (0+ a), toh result wahi number aata hai.

*Isliye, jab aap pure array ke elements ka XOR nikalte hain, toh saare duplicate pairs आपस में cut kar zero ho jate hain aur sirf unique number bach jata hai.

