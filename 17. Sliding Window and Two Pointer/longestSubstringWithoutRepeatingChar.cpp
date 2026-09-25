#include <iostream>
using namespace std;

int lengthOfLongestSubstring(string s){
  bool arr[255]={0};
  int len = s.length();
  if(len==1) return 1;
  else if(len==0)return 0;
  int i=1,j=0;
  int longestSubstring = 0;
  arr[s[0]]=1;
  while(i<len){
    while(arr[s[i]]==1){
      if(s[j]!=s[i]){
        arr[s[j]]=0;
        j++;
      }else{
        j++;
        break;
      }
    }
    arr[s[i]] = 1;
    if(longestSubstring<i-j+1) longestSubstring=i-j+1;
    i++;
  }
  return longestSubstring;

}

int main(){
  int ans = lengthOfLongestSubstring("abcabcbb");
  cout << ans;
}