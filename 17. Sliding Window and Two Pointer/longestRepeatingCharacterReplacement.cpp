#include <iostream>
#include <algorithm>

using namespace std;

// int characterReplacement(string s, int k){
//   int len = s.length();
//   int kcopy = k , re=0;
//   for(int i='A'; i<='Z'; i++){
//     int lp=0,ans=0;
//     kcopy=k;
//     for(int rp=0; rp<len; rp++){
//       while(kcopy==0 && s[rp]!=i){
//         if(s[lp]!=i) kcopy++;
//         lp++;
//       }
//       if(s[rp]!=i) kcopy--;
//       if(ans<rp-lp+1) ans=rp-lp+1;
//     }
//     if(re<ans) re=ans;
//   }
//   return re;
// }

int characterReplacement(string s, int k){
  int len=s.length();
  int arr[26]={0};
  int l=0,r=0,maxlen=0,ans=0;

  while(r<len){
    arr[s[r]-'A']++;
    maxlen=max(maxlen,arr[s[r]-'A']);
    if ((r-l+1-maxlen)>k){
      arr[s[l]-'A']--;
      l++;
    }
    ans=max(r-l+1,ans);
    r++;
  }

  return ans;
}

int main(){
  string s = "AABABBA";
  int k=1;
  int ans = characterReplacement(s,k);
  cout << ans << "\n";
}