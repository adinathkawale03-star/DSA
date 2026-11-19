#include<bits/stdc++.h>
using namespace std;
class solution{
public:
   void selection(vector<int>& arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int s=i;
        for(int j=i+1;j<n;j++){
            if(arr[s]>arr[j]){
                s=j;
            }
        }
        if(s!=i) swap(arr[s],arr[i]);
    }
   }
   void insertion(vector<int>& arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
   }
   void bubble_sort(vector<int>& arr){
    int n=arr.size();
    for(int i=n-1;i>0;i--){
        for(int j=1;j<=i;j++){
            if(arr[j-1]>arr[j]){
                swap(arr[j-1],arr[j]);
            }
        }
    }
   }
   void merge(vector<int>& arr,int l,int m,int h){
    int le=l;
    int ri=m+1;
    vector<int> temp;
    while(le<=m && ri<=h){
        if(arr[le]<arr[ri]){
            temp.push_back(arr[le]);
            le++;
        }
        else{
            temp.push_back(arr[ri]);
            ri++;
        }
    }
    while(le<=m){
        temp.push_back(arr[le]);
        le++;
    }
    while(ri<=h){
        temp.push_back(arr[ri]);
        ri++;
    }
    for(int i=l;i<=h;i++){
        arr[i]=temp[i-l];
    }
   }
   void helper(vector<int>& arr,int l,int h){
    if(l>=h) return;
    int m=l+(h-l)/2;
    helper(arr,l,m);
    helper(arr,m+1,h);
    merge(arr,l,m,h);
   }
   void merge_sort(vector<int>& arr){
    int n=arr.size();
    helper(arr,0,n-1);
   }
   int pivot(vector<int>& arr,int l,int h){
    int ele=arr[l];
    int s=l;
    l++;
    return l;
   }
   void quick(vector<int>& arr,int l,int h){
      int n=arr.size();
      int m=pivot(arr,l,h);
      quick(arr,l,m);
      quicl(arr,m+1,h);
   }
   void quick_sort(vector<int>& arr){
    int n=arr.size();
    quick(arr,0,n-1);
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
    sol.insertion(arr);
    cout<<"array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}