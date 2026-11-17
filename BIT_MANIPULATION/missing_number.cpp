#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   int mis(vector<int> nums){
    int n=nums.size(),sum1=0,sum2=0;
    for(int i=0;i<=n;i++){
        if(i==n){
            sum2=sum2^i;
            break;
        }
        sum2=sum2^i;
        sum1=sum1^nums[i];
    }
    return sum1^sum2;
   }
};
int main(){
    int n;
    cout<<"enter the number of elements in the array:";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"enter the element:";
        cin>>arr[i];
    }
    solution sol;
    cout<<"missing number:"<<sol.mis(arr)<<endl;
    return 0;
}