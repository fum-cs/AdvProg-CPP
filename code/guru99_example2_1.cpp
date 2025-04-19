// https://www.guru99.com/cpp-vector-stl.html

#include <iostream>
#include <vector> 

using namespace std;
int main()
{
	// int nums[1'000'000];
	// cout <<  sizeof(nums) << " Bytes of memory is allocated";
	vector<int> nums(1e9); // گرفتن حافظه زیاد
	// nums.push_back(2);
	cout <<  nums.capacity()*sizeof(nums[0]) << " Bytes of memory is allocated";
	cin.get();
	// nums.assign(5, 1);

	// cout << "Vector contents: ";
	// for (int a = 0; a < nums.size(); a++)
	// 	cout << nums[a] << " ";

	// nums.push_back(2);
	// int n = nums.size();
	// cout << "\nLast element: " << nums[n - 1];

	// // nums.pop_back();

	// cout << "\nVector contents: ";
	// for (int a = 0; a < nums.size(); a++)
	// 	cout << nums[a] << " ";

	// nums.insert(nums.begin(), 7);

	// cout << "\nFirst element: " << nums[0];

    // cout << "\nVector contents: ";
	// for (int a = 0; a < nums.size(); a++)
	// 	cout << nums[a] << " ";

	// nums.clear();
	// cout << "\nSize after clear(): " << nums.size();			
}