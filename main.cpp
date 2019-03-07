// Two Sum problem statement
//Given an array of integers, nums, and an integer, target, return indexes of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution.
//You can return the answer in any order.



#include <iostream>
#include <vector>
using namespace std;


vector<int> twosum(vector<int> nums, int target){

	vector <int> answer;
	int i, j;
	//嵌套loop检查和数是否等于target
	for (i=0; i<nums.size(); i++){
		for (j=i+1; j<nums.size(); j++){
			if (nums[i] + nums[j] == target){
				//Vector函数
				answer.push_back(i);
				answer.push_back(j);
				return answer;
			}
		}
	}

}


int main(int argc, char** argv) {


	vector<int> ans;

	vector<int> input = {3, 3};
	int target = 6;

	ans = twosum(input, target);
	//输出答案
	cout << ans[0] << " " << ans[1] << endl;


	return 0;
}
