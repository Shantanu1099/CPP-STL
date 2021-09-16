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

bool sort_the_name_marks(pair<string, int> a, pair<string, int> b){
	if(a.second != b.second){
		return a.second > b.second;
	}
	return a.first < b.first;
}

int main(){
	int n; cin >> n;
	vector<pair<string, int>> n_m(n);
	for(int i = 0; i < n; ++i){
		cin >> n_m[i].first >> n_m[i].second;
	}
	sort(n_m.begin(), n_m.end(), sort_the_name_marks);
	for(int i = 0; i < n; ++i){
		cout << n_m[i].first << " " << n_m[i].second << endl;
	}

	return 0;
}