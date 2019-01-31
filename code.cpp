#include <bits/stdc++.h>

#define For(a,b,c,d)  for(int a = b; a < c; a += d)
#define Forr(a,b,c,d) for(int a = b; a >= c; a -= d)
#define Fill(A,x)     memset(A,x,sizeof(A))
#define ll            long long
#define ull           unsigned long long
#define ld            long double
#define pb            push_back
#define mp            make_pair

using namespace std;

const ll mod = 1e9 + 7;

int main(){
	#ifdef ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#endif
	
	#ifdef LOCAL_TEST
	freopen("testfile.txt","r",stdin);
	freopen("Aoutput.txt","w",stdout);
	freopen("debug.txt","w",stderr);
	clock_t start = clock();
	#endif

	

	#ifdef LOCAL_TEST
	clock_t stop = clock();
	double runtime = (double)(stop-start)/CLOCKS_PER_SEC;
	freopen("time.txt","w",stdout);
	printf("\n%sExecution time : %lf\n%s","\x1B[34m",runtime,"\x1B[0m");
	#endif
	return 0;
}
