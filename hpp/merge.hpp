#ifndef MERGE
#define MERGE

#include <vector>
using namespace std;

namespace sorting {

template <typename T> void merge (T left,T mid,T right) {
	vector<long double> target;
	auto l = left,t = mid + 1,r = right;
	while (l <= mid && t <= right) {
		if (*l <= *t) {
			target.push_back(*l);
			++l;
		}
		else {
			target.push_back(*t);
			++t;
		}
	}
	if (l == mid + 1) {
		while (t <= r) {
			target.push_back(*t);
			++t;
		}
	}
	else {
		while (l <= mid) {
			target.push_back(*l);
			++l;
		}
	}
	l = left;
	for (auto& ele : target) {
		*left = ele;
		++left;
	}
}
}
#endif // MERGE
