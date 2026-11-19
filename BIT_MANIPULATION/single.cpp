#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   int sins(vector<int> arr){
    int ans=0;
    for(int i:arr) ans=i^ans;
    return ans;
   }
};
int main(){
    int n;
    cout<<"enter the number:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }
    solution sol;
    int ans=sol.sins(arr);
    cout<<"single number in array:"<<ans<<endl;
    return 0;
}