#include <bits/stdc++.h>

#define For(a, b, c, d)    for(int a = b; a < c; a += d)
#define Forr(a, b, c, d)   for(int a = b; a >= c; a -= d)
#define ll                 long long
#define trace(args...)     std::string arg_str = #args; std::replace(arg_str.begin(), arg_str.end(), ',', ' '); std::stringstream args_str(arg_str); std::istream_iterator<std::string> it(args_str); track(it, args);

void track(std::istream_iterator<std::string> it) { std::clog << "\b \b\b \b\n"; }

template <typename type, typename... types>

void track(std::istream_iterator<std::string> it, type arg, const types&... args) {
	std::clog << *it << " = " << arg << ", ";
	track(++it, args...);
}

using namespace std;

int main() {
	#ifdef ONLINE_JUDGE
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
	#endif



	return 0;
}
