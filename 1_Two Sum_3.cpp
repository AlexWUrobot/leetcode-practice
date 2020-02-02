#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution{
	public:
		vector<int> twoSum(vector<int> &nums, int target){
			unordered_map<int,int> umap;
			for(int i = 0; i < nums.size(); i++){
				if(umap.find(nums[i])!=umap.end()){
					return{ umap[nums[i]] , i};
				}
				else{
					umap[target - nums[i]] = i;
				}
				
			}
			return{};			
		}
};

int main(){
	vector<int> nums = {7,1,11,5,10,2}, ans; 
	int target = 9;
	printf("coool!");
	solution test1;
	ans = test1.twoSum(nums,target);
	
	for(int i =0; i<ans.size();i++){
		printf("%d, ", ans[i]);
	}
	
	
}
