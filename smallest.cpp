#include <iostream> 
#include <vector> 
using namespace std; 
int findSmallestNumber(const vector<int>& arr)
{   
  // Initialize smallest to the first element of the array 
  int smallest = arr[0];  
// Iterate through the array starting from the second element  
for (int i = 1; i < arr.size();
++i)
{   
if (arr[i] < smallest)
{    
smallest = arr[i];
// Update smallest if a smaller number is found   
} 
  }  
// Return the smallest number 
return smallest; } 
int main()
{  
  // Example array 
  vector<int> arr = {5, 2, 9, 1, 5, 6};
// Call the function and print the result 
int smallest = findSmallestNumber(arr);
cout << "The smallest number in the array is: " << smallest << endl; 
  return 0;
}
