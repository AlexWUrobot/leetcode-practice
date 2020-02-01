#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class solution{
public:
	vector<int> twoSum(vector<int>& nums, int target)
	{
		unordered_map<int,int> umap;
		for(int i = 0; i < nums.size(); i++)
		{
			if(umap.find(nums[i])!=umap.end())
			{
				return{umap[nums[i]],i};
			}
			else
			{
				umap[target-nums[i]] = i; 	
			}
			
		}
		return{};

	}	
};


int main(){
	printf("hello wordl !");
	vector<int> str;
	str = {2, 7, 11, 15};
	int target = 9;
	solution test1;
	vector<int> result;
	
	result = test1.twoSum(str,target);
	
	for(int i=0; i<result.size(); i++)
	{
		printf(" %d, ", result[i]);
	}
	
	
	
}


