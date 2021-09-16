#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define lli long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define forinput for(int i =0;i<n;i++){cin>>arr[i];}
#define foroutput for(int i = 0;i<n;i++){cout<<arr[i]<<" ";}
#define pb push_back
#define pob pop_back
#define mpis map<int, string>
#define uns unordered_set
#define unm unordered_map
#define ms multiset
// Always Remember Overflow
int main(){
	// For Arrays First
	int n; cin >> n;

	// int arr[n];
	// forinput 

	// sort(arr, arr+n); // any n value can be used at beginning like +2, +3 depends on from where you wanna start.

	// IntroSOrt uses HEAP, QUICK & INSERTION Sorting techniques with T.C -> O(nlog(n)) and takes two parameters which are the starting address and the address of the element after last element.... So in array starting address is array itself as array behaves like a pointer to element in the memory and last address after last element would be '+n' (size) to the first address 'a'. Same works for vector as well..its just the 'begin()' & 'end()' are used for pointing address  

	// foroutput

	// For Vector Operations
	vector <int> v(n);
	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; ++i ){
		cout << v[i] << " ";
	}

	return 0;
}