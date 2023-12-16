# time-travel-question
Imagine that you have a time machine. You are given an array years. You start in the year years[0]. First, you want to travel to years[1], then to years[2], and so on. Your task is to calculate the time required to visit all the years from the list in order.

The time required to travel from the year A to the year B is calculated as follows:

0 hours if A = B
1 hour if A < B (going forwards in time)
2 hours if A > B (going backwards in time)
Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(years.length3) will fit within the execution time limit.

Example

For years = [2000, 1990, 2005, 2050], the output should be solution(years) = 4.
