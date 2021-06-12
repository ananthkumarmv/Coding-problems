/* You are given an array A of size N. You need to find all pairs in the array that sum to a number K. If no such pair exists then output will be -1. The elements of the array are distinct and are in sorted order.
Note: (a,b) and (b,a) are considered same. Also, an element cannot pair with itself, i.e., (a,a) is invalid.

Example 1:

Input:
N = 7
A[] = 1 2 3 4 5 6 7
K = 98
Output: 
-1
Explanation:
We cannot find any pair that sums to 98
Example 2:

Input:
N = 7
A[] = 1 2 3 4 5 6 7
K = 8
Output:
1 7 8
2 6 8
3 5 8
Explanation:
We find 3 such pairs that sum to 8 (1, 7) (2, 6) (3, 5) */













//User function Template for C++

/* Function to find pairs with different sum
* arr[] : array containing elements
* n : size of array
* sum : given sum to find pairs with sum equal to given sum
*/
void findPairs(int arr[], int n, int sum){

        // Your code here
        int k = n - 1;
    int j = 0;
    bool flag = false;
    while(arr[j] < sum && j < k)
    {
        if(arr[j] + arr[k] < sum)
            j++;
        else if(arr[j] + arr[k] > sum)
            k--;
        else{
            cout << arr[j] << " " << arr[k] << " " << sum << endl;
            flag = true;
            j++;
            k--;
        }
    }
    if(flag == false)
        cout << -1 << endl;
        

}
