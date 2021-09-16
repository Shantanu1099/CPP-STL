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
	// For array just change .begin(), .end() with arr & arr+n..
	int n; cin >> n;
	vector<int> arr(n);
	forinput
	int minEle = *min_element(arr.begin()+1, arr.end());	
	int maxEle = *max_element(arr.begin(), arr.end());
	int ct = count(arr.begin(), arr.end(), 5);
	int sum = accumulate(arr.begin(), arr.end(), 0);
	auto fd = find(arr.begin(), arr.end(), 23);
	(fd != arr.end() ? "Value Found" : "Value Not Found" );
	reverse(arr.begin(),  arr.end()-2);
	foroutput
	cout << endl;
	string s = "HAHALMAOROFL";
	reverse(s.begin(), s.end());
	for(auto v : s){
		cout << v << " ";
	}
	cout << endl;
	cout << "Min: " << minEle << " - Max: " << maxEle << " - count: " << ct << " - sum " << sum << " - Find " << (fd != arr.end() ? "Value Found" : "Value Not Found" ) << endl; 
	return 0;
}