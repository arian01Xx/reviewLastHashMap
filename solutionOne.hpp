#ifndef SOLUTION_ONE_HPP
#define SOLUTION_ONE_HPP

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

class SolutionOne{
public:
	vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3){
		vector<int> ans;
		map<int,int> ms;
		set<int> s1(nums1.begin(), nums1.end());
		set<int> s2(nums2.begin(), nums2.end()); 
		set<int> s3(nums3.begin(), nums3.end());
		for(int i: s1){
			ms[i]++;
		}
		for(int i: s2){
			ms[i]++;
		}
		for(int i: s3){
			ms[i]++;
		}
		for(auto it: ms){
			if(it.second>=2){
				ans.push_back(it.first);
			}
		}
		return ans;
	}
};

#endif