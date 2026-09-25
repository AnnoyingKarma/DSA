#include <iostream>
#include <unordered_map>
using namespace std;
long long int atMostKDistinct(string s, int k) {
    int n = s.size();
    int start = 0, end = 0;
    long long cnt = 0;
    unordered_map<char, int> umap;

    while (end < n) {
        umap[s[end]]++;
        while (umap.size() > k) {
            umap[s[start]]--;
            if (umap[s[start]] == 0) {
                umap.erase(s[start]);
            }
            start++;
        }
        cnt += end - start + 1;
        end++;
    }
    return cnt;
}

// Main function to count substrings with exactly k distinct characters
long long int kDistinctChar(string s, int k) {
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main(){
  cout << kDistinctChar("aba",2); 

}