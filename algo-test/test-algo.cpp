#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<queue>
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
////背包问题
//vector<int>wei{ 3,6,1,6,8,4 };
//vector<int>val{ 3,5,1,6,10,5 };
//vector<int>choice;
//vector<int>ans;
//int end_ = wei.size();
//int cap = 15;
//int has = 0;
//int most_val = 0;
//void func(int i) {
//	if (cap>=0) {
//		if (most_val < has) {
//			most_val = has;
//			ans = choice;
//		}
//	}
//	else {
//		return;
//	}
//	for (int k = i; k < end_; k++) {
//		if (cap - wei[k] < 0) continue;
//		has += val[k];
//		cap -= wei[k];
//		choice.push_back(wei[k]);
//		func(k + 1);
//		choice.pop_back();
//		cap += wei[k];
//		has -= val[k];
//	}
//}
//int main() {
//	func(0);
//	for (auto u : ans) {
//		cout << u << ' ';
//	}
//	cout << endl;
//	cout << most_val;
//	return 0;
//}
//解空间：排列树
//vector<int>set{ 1,2,3,4,5,6,7,8 };
//
//void swap_(vector<int>&vec, int i, int j) {
//	int tp = vec[i];
//	vec[i] = vec[j];
//	vec[j] = tp;
//}
//void func(int i) {
//	if (i == 8) {
//		for (int a : set) {
//			cout << a << ' ';
//		}
//		cout << endl;
//	}
//	else {
//		for (int k = i; k < 8; k++) {
//			swap_(set, i, k);
//			func(i + 1);
//			swap_(set, i, k);
//		}
//	}
//}
//int main() {
//	func(0);
//	return 0;
//}
//传参test
//void swap_(int arr[]) {
//	arr[1] = 0;
//	arr[0] = 1;
//}
//void swap_(vector<int>arr) {
//	arr[1] = 0;
//	arr[0] = 1;
//}
//int main() {
//	int arr[2] = { 0,1 };
//	vector<int>arr_ = { 0,1 };
//	swap_(arr);
//	for (auto a : arr) {
//		cout << a << ' ';
//	}
//	for (auto a : arr_) {
//		cout << a << ' ';
//	}
//	cout << endl;
//}
//八皇后
//int arr[8] = { 1,2,3,4,5,6,7,8 };
//int len = sizeof(arr) / sizeof(arr[0]);
//static bool judge(int i) {
//	for (int j = 0; j < i; j++) {
//		if ((i - j) != abs(arr[i] - arr[j]))
//			return false;
//	}
//	 return true;
//}
//void swap_(int i, int j) {
//	int tep = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tep;
//}
//void func(int i) {
//	if (i == len) {
//		//cout
//		
//			for (auto num : arr) {
//				cout << num << ' ';
//			}
//			cout << endl;
//		
//	}
//	else {
//		
//		for (int k = i; k < len; k++) {
//			
//				swap_(k, i);
//				if (judge(i)) 
//					func(i + 1);
//					swap_(k, i);
//				}
//		
//	}
//}
//int main() {
//	func(0);
//	return 0;
//}
//全排列的第二种生成方式
//vector<int>vec{ 1,2,3,4 };
//vector<int>state{ 0,0,0,0 };
//vector<int>choice;
//void func(int i);
//int main() {
//	func(0);
//	return 0;
//}
//void func(int i) {
//	if (i == vec.size()) {
//		for (auto v : choice) {
//			cout << v << ' ';
//		}
//		cout << endl;
//	}
//	else {
//		//on the process of selecting;
//		for (int k = 0; k < vec.size(); k++) {
//			if (state[k] == 0) {
//				choice.push_back(vec[k]);
//				state[k] = 1;
//				func(i + 1);
//				state[k] = 0;
//				choice.pop_back();
//			}
//		}
//	}
//}
//分治算法
//二分搜索
//vector<int>vec(100);
//bool jud = 0;
//template<class T>
//void search(T num, vector<T>& vec, int first, int end);
//template<typename T>
//void search(T num,vector<T>&vec) {
//	search(num, vec, 0, vec.size());
//	if (jud == 0) {
//		cout << "not find";
//	}
//}
//template<class T>
//void search(T num, vector<T>& vec, int first, int end) {
//	int mid = (first + end) / 2;
//	int lenth = end - first;
//	if (vec[mid] == num||lenth==1) {
//		if (vec[mid] == num)
//		{
//			cout << "find" << endl;
//			jud = 1;
//		}
//	}
//	else if (num < vec[mid]) {
//		search(num, vec, first, mid);
//	}
//	else search(num, vec,mid, end);
//}
//int main() {
//	srand(time(0));
//	for (auto& num : vec) {
//		num = rand() % 1000;
//	}
//	sort(vec.begin(), vec.end());
//	for (auto num : vec) {
//		cout << num << ' ';
//	}
//	cout << endl;
//	search(17,vec);
//}
//quicksort
//void quicksort(int arr[], int first, int end_);
//void quicksort(int arr[],int end_) {	 
//
//	quicksort(arr, 0, end_);
//}
//void quicksort(int arr[], int first, int end_) {
//	int end_st = end_;
//	int first_st = first;
//	if (first >= end_) {
//		return;
//	}
//	else {
//		int refer = arr[first];
//		while (first < end_) {
//			while (first < end_) {
//				if (arr[end_] < refer) {
//					arr[first] = arr[end_];
//					first++;
//					break;
//				}
//				else {
//					end_--;
//				}
//			}
//			while (first < end_) {
//				if (arr[first] > refer) {
//					arr[end_] = arr[first];
//					end_--;
//					break;
//				}
//				else {
//					first++;
//				}
//			}
//		}
//			if (first == end_) {
//				arr[first] = refer;
//				quicksort(arr, first_st, first - 1);
//				quicksort(arr, first + 1, end_st);
//			}
//		}
//	}
//
//int main() {
//	int arr[15];
//	srand(time(0));
//	for (int& u : arr) {
//		u = rand() % 50;
//	}
//	for (int u : arr) {
//		cout << u << ' ';
//	}
//	cout << endl;
//	int end_ = sizeof(arr) / sizeof(arr[0]) - 1;
//	quicksort(arr,end_);
//	for (int u : arr) {
//		cout << u << ' ';
//	}
//	cout << endl;
//}
//test
//void func(int arr[]) {
//	cout << sizeof(arr) << endl;
//}
//int main() {
//	int arr[10];
//	int* arr_ = nullptr;
//	cout << sizeof(arr_) << endl;
//	cout << sizeof(arr) << endl;
//	func(arr);
//}这里int arr[]经过传参退化为指针，含义发生变化;
////对多个有序链表的合并
//struct Node {
//	int val;
//	Node* next;
//	Node(int val_=0) :val(val_),next(nullptr){}
//	
//};
//Node* init_node(initializer_list<int> arr) {
//	Node* head = nullptr;
//	Node* pointer = nullptr;
//	for (auto v : arr) {
//		if (head == nullptr) {
//			head = new Node(v);
//			pointer = head;
//		}
//		else {
//			pointer->next = new Node(v);
//			pointer = pointer->next;
//		}
//	}
//	return head;
//}
//Node* total(Node* p, Node* q) {
//	if (p == nullptr) {
//		return q;
//	}
//	if (q == nullptr) {
//		return p;
//	}
//	Node* head = nullptr;
//	if (p->val > q->val) {
//		head = q;
//		q = q->next;
//	}
//	else {
//		head = p;
//		p = p->next;
//	}
//	Node* con = head;
//	while (p != nullptr && q != nullptr) {
//		if (p->val > q->val) {
//			con->next = q;
//			q = q->next;
//			con = con->next;
//		}
//		if (p->val <= q->val) {
//			con->next = p;
//			p = p->next;
//			con = con->next;
//		}
//	}
//	if (p != nullptr) {
//		con->next = p;
//	}
//	else {
//		con->next = q;
//	}
//	return head;
//}
//Node* merge_way(vector<Node*>& vec,int first,int end_) {
//	if (first >= end_) {
//		return vec[first];
//	}
//	else {
//		int mid = (first + end_) / 2;
//		Node*p=merge_way(vec, first, mid);
//		Node*q=merge_way(vec, mid+1, end_);
//		return total(p, q);
//	}
//}
//int main() {
//	Node* p1 = init_node({ 1,2,3,4,5,6,8 });
//	Node* p2 = init_node({ 1,2,3,4,5,6,8 });
//	Node* p3 = init_node({ 12,23,34,45,56,67,81 });
//	Node* p4 = init_node({ 11,22,33,44,55,65,82 });
//	Node* p5 = init_node({ 19,28,37,45,51,61,83 });
//	vector<Node*>vec = { p1,p2,p3,p4,p5 };
//	Node*rec=merge_way(vec,0,vec.size()-1);
//	Node* q = rec;
//	while (q != nullptr) {
//		cout << q->val << ' ';
//		q = q->next;
//	}
//
//
//	return 0;
//}
//找出中位数
//double merge(const vector<int>&v1, const vector<int>&v2, int first, int end_);
//bool sit = 0;//奇数还是偶数（0是奇数，1是偶数）
//double merge(vector<int>v1, vector<int>v2) {
//	int len = v1.size() + v2.size();//分情况（奇数还是偶数）
//	if (len % 2 == 0) {
//		sit = 1;
//	}
//	int size = (v1.size()+v2.size()+1)/2;//k pos
//
//	return merge(v1, v2, 0, v1.size() - 1);
//
//}
//double merge(const vector<int>&v1,const vector<int>&v2, int first, int end_) {
//	int i = (first + end_) / 2 ;
//	int j = (v1.size() + v2.size()+1)/2 - i;//i-1 and j-1 are the target to ans
//	if (v1[i - 1] < v2[j] && v2[j - 1] < v1[i]) {
//		if(sit==0)
//		return max(v1[i - 1], v2[j - 1]);
//		if (sit == 1)
//		{
//			int sign = min(v1[i], v2[j]);
//			return (max(v1[i - 1], v2[j - 1]) + sign) / 2.0;
//		}
//	}
//	else {
//		if (v1[i - 1] > v2[j]) {
//			return merge(v1, v2, first, i-1);
//		}
//		else /*if (v2[j - 1] < v1[i])*/ {
//			return merge(v1, v2, i, end_);
//		}
//	}
//
//}
//int main() {
//	srand(time(NULL));
//	vector<int>v1(40);
//	vector<int>v2(100);
//	for (int& n : v1) {
//		n = rand() % 100;
//	}
//	for (int& n : v2) {
//		n = rand() % 100;
//	}
//	sort(v2.begin(), v2.end());
//	sort(v1.begin(), v1.end());
//	for (auto u : v1) {
//		cout << u << ' ';
//	}
//	cout << endl;
//	for (auto u : v2) {
//		cout << u << ' ';
//	}
//	cout << endl;
//	double mid = merge(v1, v2);
//	cout << "mid: " << mid << endl;
//}
// 以下为对原程序“找中位数”部分的重写并附带注释，指出原实现中的逻辑不正确之处并给出修改意见。
// 主要问题（来自原实现）：
// 1) 混淆了“索引 i/元素个数”的含义，导致 j 的计算错误并可能越界（原代码中 j = (total+1)/2 - i，但 i 取值与边界未严格对应）。
// 2) 直接使用 v1[i-1], v1[i], v2[j-1], v2[j]，没有处理 i==0、i==m、j==0、j==n 的边界情况，容易越界访问。
// 3) 递归分支没有在所有路径返回值（有些路径缺少 return），导致未定义行为。
// 4) 使用全局变量 `sit` 表示奇偶性不必要且使逻辑不清晰，应在函数内部计算总长度的奇偶性。
// 5) 函数按值传递 `vector` 会造成大量拷贝（性能问题），应使用 `const vector<int>&`。
// 6) 原递归二分实现区间与终止条件不正确，容易进入无限递归或错误分支。
// 修改建议：采用常见的“在短数组上二分划分（partition）”方法，明确处理边界并返回 double（偶数长度返回平均值）。

//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//using namespace std;
//
//// 修正实现：在较短的数组上二分查找，处理边界（用 INT_MIN/INT_MAX 作为虚拟边界）
//// 返回 double，偶数长度时返回两个中间值的平均值。
//double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
//    // 建议：确保在更短的数组上二分，避免 i 的取值范围复杂导致越界。
//    const vector<int>* Aptr = &nums1, * Bptr = &nums2;
//    int m = (int)nums1.size(), n = (int)nums2.size();
//    if (m > n) {
//        // 交换：保证 m <= n
//        Aptr = &nums2;
//        Bptr = &nums1;
//        m = (int)Aptr->size();
//        n = (int)Bptr->size();
//    }
//    const vector<int>& A = *Aptr;
//    const vector<int>& B = *Bptr;
//
//    int imin = 0, imax = m;
//    int half = (m + n + 1) / 2; // partition 左侧的元素个数（向下取整）
//    while (imin <= imax) {
//        int i = (imin + imax) / 2; // 在 A 中尝试切 i 个元素到左侧
//        int j = half - i;         // 在 B 中切 j 个元素到左侧
//
//        // 边界处理：当 i==0 或 i==m 时，从 A 的左/右分别取虚拟最小/最大值，避免越界访问（修复原程序直接访问 v1[i-1]/v1[i] 的问题）
//        int Aleft = (i == 0) ? INT_MIN : A[i - 1];
//        int Aright = (i == m) ? INT_MAX : A[i];
//        int Bleft = (j == 0) ? INT_MIN : B[j - 1];
//        int Bright = (j == n) ? INT_MAX : B[j];
//
//        // 如果 partition 合法，左侧最大值 <= 右侧最小值，则找到中位数
//        if (Aleft <= Bright && Bleft <= Aright) {
//            if ((m + n) % 2 == 1) {
//                // 奇数个元素：左侧最大值即为中位数
//                return static_cast<double>(max(Aleft, Bleft));
//            }
//            else {
//                // 偶数个元素：中位数为左右中间两个数的平均
//                double leftMax = static_cast<double>(max(Aleft, Bleft));
//                double rightMin = static_cast<double>(min(Aright, Bright));
//                return (leftMax + rightMin) / 2.0;
//            }
//        }
//        else if (Aleft > Bright) {
//            // A 的左侧过大，需要减少 i（移动左边界）
//            imax = i - 1;
//        }
//        else {
//            // Bleft > Aright，A 的左侧太小，需要增大 i
//            imin = i + 1;
//        }
//    }
//
//    // 理论上不会走到这里（如果输入有效），但为了安全返回 0.0
//    return 0.0;
//}
//
//int main() {
//    // 为便于测试，保留原 main 的样式，但调用修正后的函数。
//    srand((unsigned)time(nullptr));
//    vector<int> v1(40);
//    vector<int> v2(30);
//    for (int& n : v1) n = rand() % 100;
//    for (int& n : v2) n = rand() % 100;
//    sort(v1.begin(), v1.end());
//    sort(v2.begin(), v2.end());
//
//    for (auto u : v1) cout << u << ' ';
//    cout << endl;
//    for (auto u : v2) cout << u << ' ';
//    cout << endl;
//
//    double mid = findMedianSortedArrays(v1, v2);
//    cout << "mid: " << mid << endl;
//    return 0;
//}
//
///*
//额外注释（对应原代码逐条指出）：
//- 原代码中声明：`int merge(vector<int>v1, vector<int>v2, int first, int end_);`
//  建议：函数原型应使用 const 引用：`double merge(const vector<int>& v1, const vector<int>& v2, int first, int end_)`
//  并保证返回类型能表示平均值（double），而不是 int（会丢失小数）。
//- 原代码计算 i 和 j 时：
//    int i = (first + end_) / 2 ;
//    int j = (v1.size() + v2.size()+1)/2 - i;
//  问题：`first` 和 `end_` 在这里表示什么不清晰，且 i 取值范围与对 v1 的访问（v1[i-1], v1[i]）会越界。
//  建议：采用上面明确的 i ∈ [0, m] 范围，j = half - i，并在访问时检查 i==0/m, j==0/n。
//- 原代码直接比较 `v1[i - 1] < v2[j] && v2[j - 1] < v1[i]`：
//  问题：没有处理等号情况（应使用 <=），且不会在 i==0 等边界时正确工作。
//- 原代码在部分 else 分支返回 `merge(v1, v2, first, i-1);` 或 `merge(v1, v2, i, end_);`
//  问题：递归终止条件与区间更新不严谨，可能导致死循环或越界。
//  建议：改为迭代二分或确保每次 i 的范围缩小并设置正确的终止条件。
//*/
//dp
//fabnacci fun
//version 1:recursion
//int fabnacci(int n, vector<int>& dp) {
//	if (dp[n] > 0) {
//		return  dp[n];
//	}
//	else if (n == 1 || n == 2) {
//		dp[n] = 1;
//		return dp[n];
//	}
//	else {
//		dp[n]= fabnacci(n-1,dp) + fabnacci(n-2,dp);
//		return dp[n];
//	}
//}
//int main() {
//	int n = 0;
//	cin >> n;
//	vector<int>dp(n + 1) ;
//	for (int& n : dp) {
//		n = 0;
//	}
//	cout<<fabnacci(n, dp);
//}
//version 2:unrecursion
//int main() {
//	const int n = 10;
//	int dp[n + 1]{ 0 };
//	dp[1] = dp[2] = 1;
//	for (int i = 3; i <= n; i++) {
//		dp[i] = dp[i - 1] + dp[i - 2];
//	}
//	cout << dp[10];
//}
//dp part 2:coin_selection
/*
	there are three types of coin:1,3,5;
	you are asked to select the min_num of coins to reach the required amount;
*/
//recurison way
//int func(int val, int dp[]) {
//	if (dp[val]>0) {
//		return dp[val];
//  }
//else if (val == 1 || val == 3 || val == 5) {
//		dp[val] = 1;
//		return dp[val];
//	}
//	else if (val == 2 || val == 4) {
//		dp[val] = 2;
//		return dp[val];
//	}
//	else {
//		int num_1 = func(val - 1,dp) + 1;
//		int num_2 = func(val - 3, dp) + 1;
//		int num_3 = func(val - 5, dp) + 1;
//		dp[val] = min({ num_1,num_2,num_3 });
//		return dp[val];
//	}
//}
//int main() {
//	const int require = 100;
//	int dp[require + 1](0);
//	int min_num = func(require, dp);
//	cout << min_num << endl;
//	return 0;
//}
//unrecursion way
//int main() {
//	const int n = 14;
//	int dp[n + 1](0);
//	for (int i = 1; i <= n;i++) {
//		dp[i] = i;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (i < 3) {
//			continue;
//		}
//		else if (i < 5&&i>=3)
//			for (int j = 1; j <= 3; j++) {
//				dp[i] = min({ 1 + dp[i - 1],1 + dp[i - 3] });
//			}
//		else if(i>=5)
//		for (int j = 1; j <= 3; j++) {
//			dp[i] = min({ 1 + dp[i - 1],1 + dp[i - 3],1 + dp[i - 5] });
//		}
//	}
//	cout << dp[n];
//}
//dp part 3:最大子段和

//int max_ = 0;
//int func(int arr[], int dp[], int i) {
//	if (dp[i]>=0) {
//	return dp[i];
//	}
//	if (i == 1) {
//		dp[i] = arr[i-1];
//		if (dp[i] < 0) {
//			dp[i] = 0;
//		}
//		max_ = dp[i];
//		return dp[i];
//	}
//	else {
//		dp[i] = func(arr, dp, i - 1) + arr[i-1];
//		if (dp[i] < 0) {
//			dp[i] = 0;
//		}
//		if (dp[i] > max_) {
//			max_ = dp[i];
//		}
//		return dp[i];
//	}
//
//}
//int main() {
//	srand(time(NULL));
//	int arr[10] = { 0 };
//	for (int& u : arr) {
//		u = rand() % 20 -10;
//		cout << u << ' ';
//	}
//	cout << endl;
//	int dp[11];
//	for (int i = 0; i <= 10; i++) {
//		dp[i] = -1;
//	}
//	//int dp[11] = { -1 };
//	int sum_max = func(arr, dp, 10);
//	cout << max_;
//}
//select arr_line(dp*
//int jud(const vector<int>& vec, int i) {
//	int sum = vec[i-1] + vec[i - 2] + vec[i - 3];
//	if (sum == 6) {
//		return 0;
//	}
//	else return 1;
//}
//int reasonal_arr(const vector<int>&vec,int i,int dp[]) {
//	if (dp[i] >= 0) {
//		return dp[i];
//	}
//	if (i <= 2) {
//		throw"erro";
//	}
//	else if (i == 3) {
//		int sum = vec[0] + vec[1] + vec[2];
//		if (sum != 6) {
//			dp[3] = 1;
//		}
//		else dp[3] = 0;
//		return dp[3];
//	}
//	else {a
//		dp[i] = reasonal_arr(vec, i - 1, dp) + jud(vec,i);
//		return dp[i];
//	}
//}
//int main() {
//	srand(time(0));
//	vector<int>vec(15);
//	for (auto& n : vec) {
//		n = rand() % 4;
//	}
//	for (auto u : vec) {
//		cout << u << ' ';
//	}
//	cout << endl;
//	int dp[16];
//	for (int p = 0; p < 16;p++) {
//		dp[p] = -1;
//	}
//	int rec = reasonal_arr(vec,15,dp);
//	cout << dp[15] << endl;
//	return 0;
//}
//lis最长非降子序列长度
//int max_le = 1;easy version(连续版)
//int rem = 1;
//int main() {
//	srand(time(0));
//	vector<int>vec(20);
//	for (int& u : vec) {
//		u = rand() % 100;
//		cout << u << ' ';
//	}
//	cout << endl;
//	for (int i = 1; i < 20; i++) {
//		if (vec[i] >= vec[i - 1]) {
//			max_le++;
//			if (max_le > rem) {
//				rem = max_le;
//			}
//		}
//		else {
//			max_le = 1;
//		}
//	}
//	cout << rem << endl;
//}
//不连续version
//子集树实现
//int max_num = 0;
//int max_item_cp=0;
//vector<int>choice;
//vector<int>store;
//void func(int begin, int end_,const vector<int>&vec) {
//	if (begin == end_) {
//		if (choice.size() > max_num) {
//			max_num = choice.size();
//			store = choice;
//		}
//	}
//	else {
//		//begin 不是0的情况
//		if (end_ - begin + 1 + choice.size() <= max_num) {
//			return;
//		}
//		if (begin == 0|| vec[begin] >= max_item_cp) {
//			int tep = max_item_cp;
//			if (begin == 0) {
//				max_item_cp = vec[0];
//			}
//			else {
//				max_item_cp = vec[begin];
//			}
//			choice.push_back(vec[begin]);
//			func(begin + 1, end_, vec);
//			choice.pop_back();
//			max_item_cp = tep;
//			func(begin + 1, end_, vec);
//		}
//		else {
//			func(begin + 1, end_, vec);
//		}
//	}
//}
//int main() {
//	srand(time(0));
//	vector<int>vec(20);
//	for (int& u : vec) {
//	u = rand() % 100;
//	cout << u << ' ';
//		}
//	cout << endl;
//	//5 1 3 6 4 1 5 2
//	func(0,vec.size()-1,vec);
//	cout << "max_num: " << max_num << endl;
//	for (auto num : store) {
//		cout << num << ' ';
//	}
//	cout << endl;
//}
//dp实现version：dp
//int max_size = 1;
//int main() {
//	srand(time(0));
//	vector<int>vec(20);
//	vector<int>store(20);
//	for (int& u : vec) {
//	u = rand() % 100;
//	cout << u << ' ';
//		}
//	cout << endl;
//	int dp[20](0);
//	dp[0] = 1;
//	for (int i = 1; i < vec.size() - 1; i++) {
//		for (int j = 0; j < i; j++) {
//			if (vec[i] >= vec[j]) {
//				store.push_back(dp[j]);
//			}
//		}
//		dp[i] = *max_element(store.begin(), store.end()) + 1;
//		if (dp[i] > max_size) {
//			max_size = dp[i];
//		}
//	}
//	cout << max_size << endl;
//}
//LCS
//recursion version

//string str1 = "helloworld";
//string str2 = "hwewlored";
//int n = str1.size();
//int m = str2.size();
//vector<vector<int>> trace_map(n+1, vector<int>(m+1, 0));
//string ans;
//int func(const string& str1, int n,const string& str2, int m,int**dp) {
//	if (n < 0 || m < 0) {
//		return 0;
//	}
//	if (dp[n][m] >= 0) {
//		return dp[n][m];
//	}
//	if (str1[n] == str2[m]) {
//		dp[n][m] = func(str1, n - 1, str2, m - 1,dp) + 1;
//		trace_map[n][m] = 3;//对角线
//		return dp[n][m];
//	}
//	else {
//		dp[n][m] = max(func(str1, n - 1, str2, m, dp), func(str1, n, str2, m - 1, dp));
//		if (m >= 1 && n >= 1) {
//			if (dp[n - 1][m] > dp[n][m - 1]) {
//				trace_map[n][m] = 1;//向上
//			}
//			else {
//				trace_map[n][m] = 2;//向左
//			}
//		}
//		return dp[n][m];
//	}
//}
//void trace_back(int n,int m,const string& str1) {
//	if (m >= 0 && n >= 0 && trace_map[n][m] == 3) {
//		trace_back(n - 1, m - 1,str1);
//		//ans.push_back(str1[n]);
//		cout << str1[n];
//	}
//	else if (n >= 1 && trace_map[n][m] == 1) {
//		trace_back(n - 1, m,str1);
//	}
//	else if (m >= 1) {
//		trace_back(n, m - 1,str1);
//	}
//	else return;
//}
//
////trace_back:vector ver
//
////string ans;
//int main() {
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			trace_map[i][j] = 0;
//		}
//	}
//	int** dp = new int* [n];
//	for (int i = 0; i < n; i++) {
//		dp[i] = new int[m];
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			dp[i][j] = -1;
//		}
//	}
//	int max_ = func(str1, n-1, str2, m-1,dp);
//	cout << "max_com_size: " << max_ << endl;
//	for (int i = 0; i < n + 1; i++) {
//		for (int j = 0; j < m + 1; j++) {
//			cout << trace_map[i][j]<<' ';
//		}
//		cout << endl;
//	}
//	trace_back(n-1, m-1,str1);
//	cout << ans << endl;
//	
//	for (int i = 0; i < n; i++) {
//		delete []dp[i];
//	}
//	delete []dp;
//}
//unrecursion version
//unfinished
//package problem #dp
/*
0 0 3 4 5 7 8 9 10 12 13 14 15 17 18
0 0 3 4 5 7 8 9 10 12 12 14 15 16 16
0 0 3 4 5 7 8 9 9  12 12 12 13 13 16
0 0 3 4 4 7 7 7 8  8  11 11 11 11 11
0 0 0 4 4 4 4 4 8  8  8  8  8   8  8
0 0 0 4 4 4 4 4 4  4  4  4  4   4  4
*/
//int main() {
//	int weight[] = { 8,6,4,2,5,3 };//5
//	int value[] = { 10,7,5,3,4 ,4};
//	const int capacity = 15;
//	int dp[6][capacity]{ 0 };
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j < capacity; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	for (int j = 0; j < capacity; j++) {
//		if (j < weight[5])
//			dp[5][j] = 0;
//		else {
//			dp[5][j] = value[5];
//		}
//	}
//	for (int i = 4; i >= 0; i--) {
//		for (int j = 0; j < capacity; j++) {
//			//状态转移方程
//			if (j < weight[i]) {
//				dp[i][j] = dp[i + 1][j];
//			}
//			else {
//				dp[i][j] = max(value[i] + dp[i + 1][j - weight[i]], dp[i + 1][j]);
//			}
//		}
//	}
//	for (int i = 0; i < 6; i++) {
//		for (int j = 0; j < capacity; j++) {
//			cout << dp[i][j] << ' ';
//		}
//		cout << endl;
//	}
//}
//三角形最短路径下降
/*
eg:
1
7 2
8 6 3
6 9 8 4
6 1 6 4 10
7 6 10 1 10 6
9 5 2 2 6 6 6
6 2 1 8 2 9 6 9
7 6 8 6 6 1 6 3 9
*/
//int min_(int i, int j, int k) {
//	if (i < j) {
//		if (i < k) {
//			return i;
//		}
//		else return k;
//	}
//	else return j;
//}
//int min_(int i, int j) {
//	if (i < j) {
//		return i;
//	}
//	else return j;
//}
//int main() {
//	srand(time(0));
//	int arr[25][25] = { 0 };
//	int dp[25][25] = { 0 };
//	for (int i = 0; i < 25; i++) {
//		for (int j = 0; j < i+1; j++) {
//			arr[i][j] = rand() % 10 + 1;
//			cout << arr[i][j] << ' ';
//		}
//		cout << endl;
//	}
//	for (int j = 0; j < 25; j++) {
//		dp[24][j] = arr[24][j];
//	}
//	for (int i = 23; i >= 0; i--) {
//		for (int j = 0; j < i + 1; j++) {
//			if (j != 0) {
//				dp[i][j] = min_(dp[i + 1][j - 1], dp[i + 1][j], dp[i + 1][j + 1]) + arr[i][j];
//			}
//			else {
//				//j==0
//				dp[i][j] = min_(dp[i + 1][j], dp[i + 1][j + 1]) + arr[i][j];
//			}
//		}
//	}
//	cout << "shortest path to load: ";
//	cout << dp[0][0] << endl;
//}
//贪心problems
//柜台处理问题
//数学期望法
//template<typename... Args>
//double variance(Args... args) {
//    constexpr size_t n = sizeof...(args);
//    static_assert(n > 0, "variance requires at least one argument");
//
//    // 一次遍历：求和与平方和
//    double sum = (static_cast<double>(args) + ...);
//    double sum_sq = ((static_cast<double>(args) * static_cast<double>(args)) + ...);
//
//    double mean = sum / n;
//    double var = sum_sq / n - mean * mean;
//
//    // 处理可能的微小浮点负数（理论上方差≥0）
//    return var < 0.0 ? 0.0 : var;
//}
//int main() {
//    bool signal = 0;
//    int min_time = 0;
//    int speed[3] = { 2,3,6 };
//    int cums = 15;
//    int cum_i[3] = { 0 };
//    for (int i = 1; i <= 15; i++) {
//        bool signal = 0;
//        int time_1 = speed[0] * (cum_i[0] + 1);
//        for (int j = 1; j < 3; j++) {
//            int time_2 = speed[j] * (cum_i[j] + 1);
//            if (time_2 < time_1) {
//                cum_i[j]++;
//                min_time = time_2;
//                signal = 1;
//                break;
//            }
//        }
//        if (signal == 0) {
//            cum_i[0]++;
//            min_time == time_1;
//        }
//    }
//    cout << "min_time: " << min_time << endl;
//    int i = 1;
//    for (auto num : cum_i) {
//        cout << "front_desk_" << i << " :" << num << endl;
//        i++;
//    }
//    return 0;
//}
//分支限界
//集装箱问题
//int weight[] = { 12,8,15 };
//int c = 27;
//int i = 0;
//int max_cp = 0;
//int depth = sizeof(weight) / sizeof(weight[0]);
//struct Node {
//	int level;
//	int cw;
//	Node(int weight,int i):
//		cw(weight),
//		level(i){}
//};
//int main() {
//	queue<Node>que;
//	que.push(Node(0, 0));
//	while (i < depth) {
//		Node p = que.front();
//		que.pop();
//		//select
//		if (p.cw + weight[i + 1] <= c) {
//			que.push(Node(p.cw + weight[i + 1], i + 1));
//			if (p.cw + weight[i + 1] > max_cp) {
//				max_cp = p.cw + weight[i + 1];
//			}
//		}
//		//unselect
//		que.push(Node(p.cw, i + 1));
//		Node tec = que.front();
//		if (tec.level == i + 1) {
//			i++;
//		}
//	}
//	cout << max_cp;
//}
//分支限界：bagpack
//int cp = 22;
//int most_val = 0;
//int weight[] = { 2,4,5,8,4,1 };
//int value[] = { 2,3,7,10,4,1 };
//int depth = sizeof(weight) / sizeof(weight[0]);
//
//struct Node {
//	int cw;
//	int cv;
//	int level;
//	Node* parent;
//	bool sel;
//	Node(int cw_,int cv_,int level_,Node*parent_,bool sel_):
//		cw(cw_),
//		cv(cv_),
//		level(level_),
//		parent(parent_),
//		sel(sel_)
//	{
//		
//	}
//	
//};
//Node* most_ans = nullptr;
//int res_(int i, int depth) {
//	int res = 0;
//	for (int j = i + 1; j <= depth; j++) {
//		res += value[j];
//	}
//	return res;
//}
//int main() {
//	queue<Node*>que;
//	Node* head = new Node(0, 0, 0, nullptr,0);
//	que.push(head);
//	for (int i = 1; i <= depth; /*i在完成一层遍历后再加1*/) {
//		Node* cur = que.front();
//		que.pop();
//		int res = res_(i, depth);
//		int cur_wei = cur->cw + weight[i];
//		int cur_val = cur->cv + value[i];
//		if (cur_wei <= cp&&cur_val+res>=most_val) {
//			Node* p = new Node(cur_wei, cur_val, i, cur,1);
//			que.push(p);
//			if (most_val <= cur_val) {
//				most_val = cur_val;
//				most_ans = p;
//			}
//		}
//		if (cur->cv + res >= most_val) {
//			Node* q = new Node(cur->cw, cur->cv, i, cur,0);
//			que.push(q);
//		}
//		Node* cur_new = que.front();
//		if (cur_new->level == i) {
//			i++;
//		}
//	}
//	cout << "most_value :" << most_val << endl;
//
//	Node* trace_back = most_ans;
//	
//	while (trace_back->level != 0) {
//		if (trace_back->sel == 1) {
//			cout << weight[trace_back->level] << ' ';
//		}
//		trace_back = trace_back->parent;
//	}
//}
//lambda expression
// test_eg
//int main() {
//	auto f = [](auto i, auto j) {
//		return i + j;
//		};
//	cout << f(1, 2) << endl;
//	struct fun {
//		int self_val;
//		static int fun_(int  a, int b) {
//			return a + b;
//		}
//		void operator+(int a)const {
//			cout << a << ' ' << endl;
//		}
//		int operator*(int j) {
//			return self_val * j;
//		}
//		int operator[](int i) {
//			return 0;
//		}
//	};
//	cout << fun::fun_(1, 2);
//}

//优先级队列实现bagpack
//proity_queue usage
//......
//bf算法
//int main() {
//	string str1 = "hellowuldks";
//	string str2 = "uldx";
//	int i = 0;
//	int j = 0;
//	int len_str1 = str1.size();
//	int len_str2 = str2.size();
//	while (i < len_str1 && j < len_str2) {
//		if (str1[i] == str2[j]) {
//			i++;
//			j++;
//		}
//		else {
//			j = 0;
//			i = i - j + 1;
//		}
//	}
//	if (j == len_str2) {
//		cout << "pos: " << i - j  << endl;
//	}
//	else {
//		cout << "cannot find required string" << endl;
//	}
//}
//kmp 算法
//easy version(还未优化)
//void turn_next_1(const string& str, int next[]) {
//	int len = str.size();
//	next[0] = -1;
//	if (len > 1) {
//		next[1] = 0;
//	}
//	if(len>2)
//	for (int i = 2; i < len; i++) {
//		if (str[i-1] == str[next[i - 1]]) {
//			next[i] = next[i - 1] + 1;
//		}
//		else {
//			//next数组回退对齐;
//			int j = next[i - 1];
//			if (j == 0) {
//				next[i] = 0;
//			}
//			while (j >= 1 && str[j - 1] != str[next[j - 1]]) {
//				j = next[j - 1];
//			}
//			if (j <= 1) {
//				next[i] = 0;
//			}
//			else {
//				next[i] = next[j];
//			}
//		}
//	}
//}
void turn_next_2(const string& str, int next[]) {
	int len = str.size();
	next[0] = -1;
	if (len > 1) {
		next[1] = 0;
	}
	if(len>2)
		for (int i = 2; i < len; i++) {
			if (str[i - 1] == str[next[i - 1]]) {
				next[i] = next[i - 1] + 1;
			}
			else {
				int j = next[i - 1];
				if (j == 0) {
					next[i] = 0;
					continue;
				}
				while (j > 1 && str[j] != str[i - 1]) {
					j = next[j - 1];
				}
				if (j >= 0) {
					next[i] = 0;
				}
				else {
					next[i] = next[j];
				}
			}
		}
}
int main() {
	//kmp_next arr
	string str_kid = "abcabcdaaaaaaaaadad";
	const int len = str_kid.size();
	int* next = new int[len];
	turn_next_2(str_kid, next);
	for (auto a = 0; a < len;a++) {
		cout << next[a] << ' ';
	}
	cout << endl;
	string main_str = "abcbacbaabbcababcabcdacbabcabcaabcabcadbbdaa";
	int i = 0;
	int j = 0;
	while (i < (int)main_str.size() && j < (int)str_kid.size()) {
		if (j==-1||main_str[i] == str_kid[j]) {
			i++;
			j++;	
		}
		else {
			j = next[j];
		}
	}
	if (j == str_kid.size()) {
		cout << "find!" << ' ';
	}
	else {
		cout << "cannot find such str!" << ' ';
	}
}
