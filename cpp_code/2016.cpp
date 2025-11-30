#include <iostream>
#include<vector>

using namespace std;

int main() {
	int n;
	while (cin >> n && n!=0) {
		vector<int> vec(n);
		for (auto i = vec.begin(); i != vec.end();++i) {
			cin >> *i;
		}
		int min_ = vec[0];
		int target = 0;
		int temp;
		for (int j=1; j<vec.size();++j) {
			if (vec[j]<=min_) {
				min_ = vec[j];
				target = j;
			}
		}
		temp = vec[0];
		vec[0] = min_;
		vec[target] = temp;
		for (auto i = vec.begin(); i != vec.end();++i) {
			cout << *i << " ";
		}
		cout << endl;
	}
}
