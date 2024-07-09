#include<bits/stdc++.h>

using namespace std;

int solve(vector<int> nums) {
int cont=0,cont2=0;
while(nums.size()!=1){
    sort(nums.begin(),nums.end());
    cont = nums[0]+nums[1];
    cont2+=nums[0]+nums[1];
    nums.push_back(cont);
    nums.erase(nums.begin());
    nums.erase(nums.begin());
	}


	return cont2;
}

int main(){

#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif

vector<int> q={ 1 , 2 , 3 , 4 , 5 };

cout<<solve(q);


	return 0;
}

