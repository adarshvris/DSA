/*
Given an array containing n integers. The problem is to find the sum of the elements of the contiguous subarray having the smallest(minimum) sum.

It's a variation to the problem of finding the largest sum contiguous subarray based on the idea of Kadane’s algorithm.

smallestSumSubarr(arr, n)
    Initialize min_ending_here = INT_MAX
    Initialize min_so_far = INT_MAX
    
    for i = 0 to n-1
        if min_ending_here > 0
            min_ending_here = arr[i]        
        else
            min_ending_here += arr[i]
        min_so_far = min(min_so_far, min_ending_here)

    return min_so_far
    
Time Complexity: O(n), Space Complexity: O(1)
*/

// function to find the smallest sum contiguous subarray
int smallestSumSubarr(int arr[], int n)
{
    // to store the minimum value that is ending
    // up to the current index
    int min_ending_here = INT_MAX;
      
    // to store the minimum value encountered so far
    int min_so_far = INT_MAX;
      
    // traverse the array elements
    for (int i=0; i<n; i++)
    {
        // if min_ending_here > 0, then it could not possibly
        // contribute to the minimum sum further
        if (min_ending_here > 0)
            min_ending_here = arr[i];
          
        // else add the value arr[i] to min_ending_here    
        else
            min_ending_here += arr[i];
          
        // update min_so_far
        min_so_far = min(min_so_far, min_ending_here);            
    }
      
    // required smallest sum contiguous subarray value
    return min_so_far;
}
