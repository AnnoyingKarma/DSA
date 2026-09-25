// can use ascii values to do this 
// can use whole ascii chart it contains something around 256 or 257 things 
// if there is something specific thing asked like eg- small alphabets -> a,b,c,d
// then you can also do 'a'-'a' , array[i]-'a' , 'z'-'a' => this will store all the
// value from 0 to 25 in array ,, a will be stored in freq[0];

#include <iostream>
using namespace std;

int main (){
    char arr[8]={'@','@','#','!','^','*','@','%'};
    int freq[257]={0};
    for(int i=0; i<8; i++){
        freq[arr[i]]++;
    }
    string check="@%!#^*";
    for(int i=0; i<check.size(); i++){
        cout << check[i] << "->" << freq[check[i]] << "\n";
    }
    cout << 'z'-'a';
}