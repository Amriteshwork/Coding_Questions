**Find two numbers with maximum sum formed by array digits**

Given an integer array between 0 and 9, find two numbers with maximum sum formed using all the array digits. The difference in the number of digits of the two numbers should be ± 1.

For example,
Input:  `{ 4, 6, 2, 7, 9, 8 }`
Output: The two numbers with maximum sum are `974` and `862`
 
 
Input:  `{ 9, 2, 5, 6, 0, 4 }`
Output: The two numbers with maximum sum are `952` and `640` 


# Approach
We know that a maximum number can be formed from the given digits `0–9` when the largest digit appears first, the second-largest digit appears second, and so on… finally, the smallest digit appears at the end. We can easily extend this logic to solve this problem.

 
The idea is to sort the given array in descending order and construct two numbers `x` and `y` by picking alternate digits from the array, where x is filled with digits at the odd indices, `y` is filled with digits at the even index of the sorted array.