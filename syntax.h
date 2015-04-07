#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>	
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>
#include <numeric>
#include <ctime>

using namespace std;

// Inputs
#define s(n)                        scanf("%d",&n);
#define sc(n)                       scanf("%c",&n);
#define sl(n)                       scanf("%lld",&n);
#define sf(n)                       scanf("%lf",&n);
#define ss(n)                       scanf("%s",n);
#define ip(n)                       cin>>n;

int fastIO(int ret) {
	char c = getchar_unlocked();
  	while(c<'0' || c>'9') c = getchar_unlocked();
  	while(c>='0' && c<='9') {
    		ret = 10 * ret + c - 48;
    		c = getchar_unlocked();
  	}
  	return ret;
}

// Outputs 
#define p(n)	                        printf("%d ",n);
#define pc(n)                       printf("%c ",n);
#define pl(n)                       printf("%lld ",n);
#define pf(n)                       printf("%lf ",n);
#define ps(n)                       printf("%s ",n);
#define op(n)                       cout<<n<<" ";

// Quick sort
int compare(const void *a, const void *b){ return (*(int *)a - *(int*)b); }
#define qs(array,n)                 qsort(array,n,sizeof(int), compare);

//Fibonacci
void fibonacci(int n) {
	int num1=0,num2=1;
	for(int i=0;i<n;i++)
	{
		cout<<num1<<" ";
		num2 = num1+num2;
		num1 = num2 - num1;
	}
	cout<<endl;
}
#define fibo(n)                     fibonacci(n);

// Useful constants
#define INF                         (int)1e9
#define EPS                         1e-9

// Useful hardware instructions
#define bitcount                    __builtin_popcount
#define gcd                         __gcd

// Useful container manipulation / traversal macros
#define REP(i,a,b)                  for(int i=a;i<b;i++)
#define REPE(v, c)                  for( typeof( (c).begin()) v = (c).begin();  v != (c).end(); ++v)
#define all(a)                      a.begin(), a.end()
#define in(a,b)                     ( (b).find(a) != (b).end())
#define pb                          push_back
#define fill(a,v)                    memset(a, v, sizeof a)
#define sz(a)                       ((int)(a.size()))
#define mp                          make_pair

// Some common useful functions
#define maX(a,b)                     ( (a) > (b) ? (a) : (b))
#define miN(a,b)                     ( (a) < (b) ? (a) : (b))
#define checkbit(n,b)                ( (n >> b) & 1)
#define DREP(a)                      sort(all(a)); a.erase(unique(all(a)),a.end())
#define INDEX(arr,ind)               (lower_bound(all(arr),ind)-arr.begin())
