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

	// FIRST FOR ARRAYS
	// Syntax same for both upper& lower=  lower_bound(starting address, ending address, ele. to find); gives the address of the finding part so store in Pointer or Iterator; starting & ending address can be changed as per your wish from wherever you want to it to work.      LowerBound finds the same element if present otherwise immediate  greater element present in the stored elements list while UPPERBOUND always gives one greater element & if the element is not found it returns the .end() pointer pointing out of bound fo the storage. 
	int n; cin >> n;
	// int arr[n];
	// forinput	
	// sort(arr, arr+n);
	// foroutput
	// cout << endl;
	// int *ptr = upper_bound(arr, arr+n, 5);
	// cout << (*ptr) << endl;
	// cout << ++(ptr) << " - next pointer after first 5 " << &arr[4] << endl;



	// For VECTORS JUST USE .begin(), .end()  - T.C. for both vector & Array (BOTH SORTED) is O(logn) as binary search is implemented
	// vector<int> arr(n);
	// forinput
	// sort(arr.begin(), arr.end());
	// foroutput
	// cout << endl;
	// auto it = upper_bound(arr.begin()+2, arr.end(), 4);
	// auto it = lower_bound(arr.begin(), arr.end(), 4);
	// cout << (*it) << endl;



	// For Maps & Sets - Trees are used in Lower/Upper bound internal implementation of set/map....  IN maps bounds are implemented in keys
	set<int> st;
	map<int , int>mp;
	while(n--){
		int x; cin >> x;
		st.insert(x);
	}
	// for debugging
	// for(auto & value: st){
	// 	cout << value << " ";
	// }
	auto it = st.lower_bound(7);
	cout << "OUTPUT : " << (*it); 

	return 0;
}