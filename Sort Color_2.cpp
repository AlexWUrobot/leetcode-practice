#include<iostream>
#include<vector>
using namespace std;
class solution{
	public: void sortColor(vector<int>& nums){
		int j=0;
		vector<int> count(3);
		for(int num:nums) ++count[num];
		for(int i = 0; i < 3; i++){
			while(count[i]-->0){
				nums[j++] = i;
			}
		} 
	}
};

int main(){
	vector<int> nums = {2,0,2,1,1,0};
	printf("cool! ");
	solution test1;
	test1.sortColor(nums);
	for(int i = 0; i < nums.size(); i++){
		printf(" %d, ", nums[i]);
	}
	
	
} 
