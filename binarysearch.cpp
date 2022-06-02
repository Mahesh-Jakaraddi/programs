// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main() {
  
  int n;
  cout<<"enter n"<<endl;
  cin>>n;
  vector<int> arr;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      arr.push_back(x);
  }
  sort(arr.begin(),arr.end());
  int w=arr.size();
  for(int i=0;i<w;i++)
  {
      cout<<arr[i]<<" ";
  }
  int key,l,r,mid;
  cout<<"enter key to search"<<endl;
  cin>>key;
  l=0;
  r=arr.size()-1;
  while(l<=r)
  {
      mid =l+(r-l)/2;
      
      if(arr[mid]==key)
        {
            cout<<"key found in "<<mid+1<<endl;
            break;
        }
        if(arr[mid]>key)
            r=mid-1;
        if(arr[mid]<key)
            l=mid+1;
        return -1;
  }
  
  

    return 0;
}

int binary_search() {
		cout<<"Mahesh";
}
