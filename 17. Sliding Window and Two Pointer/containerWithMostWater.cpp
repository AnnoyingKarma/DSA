#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int>& height){
  int len = height.size();
  int l=0,r=len-1;
  int mostWater = (r-l)*min(height[l],height[r]);

  while(l<r){
    if(height[l]<height[r])++l;
    else --r;
    int temp=(r-l)*min(height[l],height[r]);
    mostWater=max(mostWater,temp);
  }
  return mostWater;
}

int main(){
  vector<int> height={1,8,6,2,5,4,8,3,7};
  cout << maxArea(height);
}