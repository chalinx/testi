#include <iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr,int s,int e){
	int i = s;
	int med=(s+e)/2;
	int j=med+1;
	vector<int> temp;
	while(i<=med and j<=e){
		if(arr[i]<arr[j]) temp.push_back(arr[i++]);
		else temp.push_back(arr[j++]);
	}

	while(i<=med) temp.push_back(arr[i++]);
	
	while(j<=e) temp.push_back(arr[j++]);
	
	j=0;
	for(int i=s;i<=e;i++) arr[i]=temp[j++];

}

void mergSort(vector<int> &arr,int s,int e){
	if(s>=e)return;
	int mid=(s+e)/2;
	mergSort(arr,s,mid);
	mergSort(arr,mid+1,e);
	merge(arr,s,e);
}


int main(){
	vector<int> r={3,2,1,-2,4,0,1,3,2};
		mergSort(r,0,r.size()-1);

		for(auto i:r)
			cout<<i<<" ";

	return 0;
}