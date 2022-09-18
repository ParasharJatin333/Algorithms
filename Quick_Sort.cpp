#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define fr(a,b) for(int i = a; i < b; i++)
#define rep(i,a,b) for(int i = a; i < b; i++)
#define mod 1000000007
#define inf (1LL<<60)
#define all(x) (x).begin(), (x).end()
#define prDouble(x) cout << fixed << setprecision(10) << x
#define triplet pair<ll,pair<ll,ll>>
#define goog(tno) cout << "Case #" << tno <<": "
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define read(x) int x; cin >> x
#define jatin(x) int x;cin>>x;while(x--)

void printer(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return;
}

int partition(int arr[],int low,int high){
    int i,index=low,pivot=high;
    for(int i=low;i<high;i++){
        if(arr[i]<arr[pivot]){
            swap(arr[i],arr[index++]);
        }
    }
    swap(arr[pivot],arr[index]);
    return index;
}
void quick_sort(int arr[],int low,int high){
    int pivot_idx;
    if(low<high){
        pivot_idx=partition(arr,low,high);
        quick_sort(arr,low,pivot_idx-1);
        quick_sort(arr,pivot_idx+1,high);
    }
}


int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	#ifndef ONLINE_JUDGE
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    #endif 
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    

    quick_sort(arr,0,n-1);
    printer(arr,n);
    return 0;
}
