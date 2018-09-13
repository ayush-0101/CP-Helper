#include <bits/stdc++.h>
#define iter(container,typename,name) for(container<typename>::iterator i=name.begin();i!=name.end();i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define ull unsigned long long
#define ll long long
#define ld long double
#define mod 1000000007
#define pi 3.141592653589
#define untie() cin.tie(NULL)
#define endl "\n"
using namespace std;

int main(){
	#ifdef ONLINE_JUDGE
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#endif
	
	#ifdef LOCAL_TEST
	freopen("testfile.txt","r",stdin);
	freopen("Aoutput.txt","w",stdout);
	#endif
	clock_t start = clock();

	int t; cin>>t;
	while(t--){
		
	}

	clock_t stop = clock();
	#ifdef LOCAL_TEST
	double runtime = (double)(stop-start)/CLOCKS_PER_SEC;
	freopen("time.txt","w",stdout);
	printf("\n%sExecution time : %lf\n%s","\x1B[34m",runtime,"\x1B[0m");
	#endif
	return 0;
}
