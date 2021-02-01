#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		next_permutation(arr, arr+n);
		for(int j=0;j<n;j++){
			cout<<arr[j];
			if(j==n-1)
				cout<<endl;
			else
				cout<<" ";
		}
	}
	return 0;
}
