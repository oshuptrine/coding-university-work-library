#include <algorithm>
#include <iostream> // Header file for input/output stream
#include <string>
#include <vector>
using namespace std; // Standard namespace

// February 21st, 2025
// Array Practice

int findLargest(int nums[], int n){
// Return the maximum element in the array using max_element from algorithm library
    return *max_element(nums, nums + n);
}

int findSmallest(int nums[], int n){
    return *min_element(nums, nums + n);
}

void getUserInput(std::vector<int>& nums) {
    int input;
    std::cout << "Enter an integer: ";
    std::cin >> input;
    nums.push_back(input);
}



int main(){

    // // Array Initialization 
    // int nums[]={1,3,5,7,9,11,22,46,81,-21};

    // // Find the number of elements in the array
    // int n = sizeof(nums) / sizeof(nums[0]);

    std::vector<int> numbers;
    getUserInput(numbers);
    std::cout << "You entered: " << numbers.back() << std::endl;

    //Array Practice Code for Smallest and Largest Element Below
    // cout << "Original Array:";
    // for(int i = 0; i < n; i++)
    //     cout << nums[i] << " ";
    //     // Prints the largest element of the array 
    //     cout << "\n The largest element in the array is:" << findLargest(nums, n);

    //     for(int i = 0; i < n; i++)
    //     cout << nums[i] << " ";
    //     cout << "\n The smallest element in the array is:" << findSmallest(nums, n);
    
    // terminates program after succesful run.



    return 0;

}