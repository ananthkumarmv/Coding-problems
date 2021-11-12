#include<iostream>
#include<vector>
using namespace std;

int firstMissingPositive(vector<int>& nums){
	
	for(int i=0; i<nums.size(); i++){
		while(nums[i] >= 1 && nums[i] <= nums.size()-1 && nums[i] != nums[nums[i]-1])
			swap(nums[i], nums[nums[i]-1]);
	}
	
	for(int i=0; i<nums.size(); i++){
		if(nums[i] != i+1)
			return i+1;
	}
	
	return nums.size()+1;
		
}


int main(){
	
	vector<int> arr{3, 4, 7, 1};
	
	cout<<firstMissingPositive(arr);


    return 0;
}


