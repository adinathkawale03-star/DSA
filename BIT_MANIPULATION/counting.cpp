#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   vector<int> count(int n){
    vector<int> ans;
    for(int i=0;i<=n;i++){
        int x=i;
        int cnt=0;
        while(x>0){
            cnt+=x&1;
            x=x>>1;
        }
        ans.push_back(cnt);
    }
    return ans;
   }
};
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    solution sol;
    vector<int> arr=sol.count(n);
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}