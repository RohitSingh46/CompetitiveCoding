#include<bits/stdc++.h>
using namespace std;


/*=> Macros <===================================================================>*/

#define 	fo(i,n) for(i=0; i<n; i++)
#define 	Fo(i,n) for(i=k; k<n?i<n:i>n:k<n?i+=1:i-=1) //itrts i->k && k->i
#define 	ll long long
#define 	si(x) scanf("%d", &x)
#define 	sl(x) scanf("%lld", %x)
#define 	ss(x) scanf("%s", s)
#define 	pi(x) printf("%d\n", x)
#define 	pl(s) printf("%lld\n", s)
#define 	pb push_back
#define 	mp make_pair
#define 	all(x) s.begin(), x.end()
#define 	tr(it, a) for(auto it = a.begin(): it != a.end(): it++) //toIterateOverSet
#define 	sortall(x) sort(all(x))
#define 	deb(x) cout << #x << "=" << x << endl //#x-> variable name
#define 	deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define 	clr(x) memset(s, 0, sixeof(x)) //used to clear
#define 	PI 3.1415926535897932384626

/*<=================================================================================>*/
typedef 	pair<int, int> pii;
typedef 	pair<ll, ll> pl;
typedef 	vector<int> vi;
typedef 	vector<ll> vl;
typedef 	vector<pii> vpii; //vector of pairs
typedef 	vector<pl> vpl;
typedef 	vector<vi> vvi; //vector of vector
typedef 	vector<vl> vvl;


/*<==> FuntionsAndGlobalStuff <=========================================================>*/

void fastscan(int &number);//Function for even faster IO (for ICPC, CodeJam etc)
void inputOutputFile(); //Takes input from input.txt and prints output to output.txt
const int mod = 1'000'000'007;
const int N = 3e5, M=N;

/*<====================================================================================>*/

vector<int> r;
int a[N];

void solve()
{//solveHere
    int i, j, n, m;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);//for faster IO

	inputOutputFile();
    int t=1; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


/*<==> FunctionImplementations <=======================================================*/

void fastscan(int &number)
{//Function for even faster IO (for ICPC, CodeJam etc)

    //variable to indicate sign of input number
    bool negative = false;
    register int c;

    number = 0;

    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;

        // extract the next character from the buffer
        c = getchar();
    }

    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;

    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void inputOutputFile()
{
#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
}
