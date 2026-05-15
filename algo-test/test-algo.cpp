#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
//vector<int>test_set{ 12,35,23,46,72,16,32,45,76,64,32,13,43 };
//vector<int>anser;
//vector<int>choice;
//int desit = test_set.size();
//int sum = 0;
//int min_ = 9999;
//void select_num(int level, int des, int cur, int res);
//void select_num() {
//	int res = 0;
//	for (auto num : test_set) {
//		res += num;
//	}
//	select_num(0, desit, 0, res);
//}
//void select_num(int level, int des, int cur,int res) {
//	if (level == des) {
//		//找到一个选择方法
//		int ans = abs(res - sum);
//		if (ans < min_) {
//			min_ = ans;
//			anser = choice;
//		}
//	}
//	else {
//		//还在搜索路径中
//		sum += test_set[cur];
//		res -= test_set[cur];
//		choice.push_back(test_set[cur]);
//		select_num(level + 1, desit, cur + 1, res);
//		choice.pop_back();
//		sum -= test_set[cur];
//		res += test_set[cur];
//		select_num(level + 1, desit, cur + 1, res);
//	}
//}
//int main() {
//	select_num();
//	cout << "min: " << min_ << endl;
//	for (auto num : anser) {
//		cout << num << ' ';
//	}
//	cout << "test";
//}

//2n 选 n(剪枝操作使用)
//vector<int>test_set{ 12,35,23,46,72,16,32,45,76,64,32,13,43 };
//vector<int>anser;
//vector<int>choice;
//int des = test_set.size();
//int sum = 0;
//int res = 0;
//int left_ = test_set.size();
//int min_ = 9999;
//int total_level = test_set.size();
//void select_num(int range, int level_cur, int cur);
//void select_num(int range) {
//	if (range > total_level) {
//		throw"erro";
//	}
//	for (auto num : test_set) {
//		res += num;
//	}
//	select_num(range, 0, 0);
//}
//void select_num(int range, int level_cur, int cur) {
//	if (level_cur == range) {
//		//has reached to the ans
//		int ans = abs(res - sum);
//		if (ans < min_) {
//			min_ = ans;
//			anser = choice;
//		}
//	}
//	else {
//		//on the path that keeps choosing
//		left_--;
//		if (choice.size() < range) {
//			sum += test_set[cur];
//			res -= test_set[cur];
//			choice.push_back(test_set[cur]);
//			select_num(range, level_cur + 1, cur + 1);
//			sum -= test_set[cur];
//			res += test_set[cur];
//		}
//		if (left_ + choice.size() > range) {
//			select_num(range, level_cur + 1, cur + 1);
//		}
//		left_++;
//	}
//}
//int main() {
//	select_num(8);
//	cout << "min: " << min_ << endl;
//		for (auto num : anser) {
//			cout << num << ' ';
//		}
//		cout << "test";
//}

//targeted sum
//vector<int>num_set{ 45,25,87,226,132,45,41 };
//vector<int>choice;//only one possible ans required
//unsigned int total = num_set.size();
//int sum = 0;//total_num chosen
//int rest = 0;
//bool control = 0;
//unsigned int times = 0;
//void sele(int target, int level, int total, int cur);
//void sele(int target) {
//	for (auto num : num_set) {
//		rest += num;
//	}
//	sele(target, 0, total, 0);
//	if (control == 0) {
//		cout << "no exist";
//	}
//	cout<<endl;
//}
//void sele(int target, int level, int total, int cur) {
//	if (level == total || target == sum) {
//		times++;
//		if (sum == target) {
//			control = 1;
//			for (auto num : choice) {
//				cout << num << ' ';
//			}
//		}
//	}
//	else if(control==0){
//		//still on selection
//		rest -= num_set[cur];
//		if (sum < target) {
//			sum += num_set[cur];
//			choice.push_back(num_set[cur]);
//			sele(target, level + 1, total, cur + 1);
//			sum -= num_set[cur];
//			choice.pop_back();
//		}
//		if(rest+sum>=target)
//		sele(target, level + 1, total, cur + 1);
//		rest += num_set[cur];
//	}
//}
//int main() {
//	//test
//	sele(88);
//	cout << times;
//}

//排列树问题解决_select_num_sum
//尽可能优化，剪枝
//vector<int>set{ 3,5,6,2,9,8,7 };
//vector<int>choice;
//int sum = 0;
//void func(int i,int target ) {
//	if (sum == target) {
//		//找到了
//		for (auto v : choice) {
//			cout << v << ' ';
//		}
//		cout << endl;
//	}
//	else {
//		for (int k = i; i < set.size(); i++) {
//			choice.push_back(set[i]);
//			sum += set[i];
//			func(i + 1, target);
//			choice.pop_back();
//			sum -= set[i];
//		}
//	}
//}
//int main() {
//	func(0,19);
//}
//背包问题
vector<int>wei{ 3,6,1,6,8,4 };
vector<int>val{ 3,5,1,6,10,5 };
vector<int>choice;
vector<int>ans;
int end_ = wei.size();
int cap = 15;
int has = 0;
int most_val = 0;
void func(int i) {
	if (cap>=0) {
		if (most_val < has) {
			most_val = has;
			ans = choice;
		}
	}
	else {
		return;
	}
	for (int k = i; k < end_; k++) {
		if (cap - wei[k] < 0) continue;
		has += val[k];
		cap -= wei[k];
		choice.push_back(wei[k]);
		func(k + 1);
		choice.pop_back();
		cap += wei[k];
		has -= val[k];
	}
}
int main() {
	func(0);
	for (auto u : ans) {
		cout << u << ' ';
	}
	cout << endl;
	cout << most_val;
	return 0;
}