#include <iostream>
#include <vector>
using namespace std;

int trap1(vector<int>& height){
  //using storage to keep left max and right max of data 
  vector<int> lmax;
  vector<int> rmax;
  int n=height.size();
  
  int rightMax=height[n-1];
  int leftMax=height[0];

  for(int i=1; i<n-1; i++){
    lmax.push_back(leftMax);
    if(leftMax<height[i])leftMax=height[i];
  }
  for(int i=n-2; i>0; i--){
    rmax.push_back(rightMax);
    if(rightMax<height[i])rightMax=height[i];
  }

  long long sum=0;
  for(int i=1; i<n-1; i++){
    int mini=min(lmax[i-1],rmax[n-i-2]);
    if(mini>height[i]){
      sum+=mini-height[i];
    }
  }
  return sum;
}


//optimized one
int trap(vector<int>& height){
  int n= height.size();
  int leftPointer = 0;
  int rightPointer = n-1;
  int lMax=height[leftPointer],rMax=height[rightPointer];
  unsigned long long total = 0;
  
  while(leftPointer<rightPointer){
    (height[leftPointer]<=height[rightPointer]) ? (leftPointer++, lMax=max(lMax,height[leftPointer])) : (rightPointer--, rMax=max(rMax, height[rightPointer]));
  int mini=min(height[leftPointer], height[rightPointer]);
    if(mini<lMax && mini<rMax){
      total+=min(lMax,rMax)-mini;
    }
  }
  return total;
}

int trapp(vector<int>& height){
  int n = height.size();
  int lp=0,rp=n-1;
  int lm=0,rm=0;
  long long total=0;
  
  while(lp<rp){
    if(height[lp]<=height[rp]){
      if(height[lp]<lm) total+=lm-height[lp];
      else lm=height[lp];
      lp++;
    }
    else{
      if(height[rp]<rm) total+=rm-height[rp];
      else rm=height[rp];
      rp--;
    }
  }
  return total;
}

int main(){
  vector<int> height={0,1,0,2,1,0,1,3,2,1,2,1};
  cout << trap1(height);
  cout << '\n' << trap(height);
  cout << '\n' << trapp(height);
}
