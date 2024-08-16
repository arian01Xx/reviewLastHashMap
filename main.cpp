#include "solutionOne.hpp"
#include "print.hpp"

using namespace std;

int main(){

	SolutionOne solution1;
	vector<int> nums1={1,1,3,2};
	vector<int> nums2={2,3};
	vector<int> nums3={3};
	vector<int> out=solution1.twoOutOfThree(nums1,nums2,nums3);
	printVectorInt(out);

	return 0;
}