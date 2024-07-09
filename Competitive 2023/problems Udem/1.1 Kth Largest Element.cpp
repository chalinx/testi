/*Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.*/

#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
 
 sort(nums.begin(),nums.end());
 reverse(nums.begin(),nums.end());
 int r=nums[k-1];
 return r;
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int q;
	vector<int> r={3,2,3,1,2,4,5,5,6};
	cin>>q;
	int e=findKthLargest(r,q);
	cout<<e;


	return 0;
}