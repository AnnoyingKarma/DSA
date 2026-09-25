#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string str1="Hello";
    string str2="World";
    string str3="Hello";
    string str4="hello";
 
 // you can compare the strings 
 // they wont be equal if there is a difference of a lowercase or uppercase

    if(str1==str2) cout << "Equal\n";
    else cout << "Not equal\n";
    if(str1==str3) cout << "Equal\n";
    else cout << "Not equal\n";
    if(str1==str4) cout << "Equal\n";
    else cout << "Not equal\n";

// you can also add string with each other
// you can also add spaces in b/w
    string str5 = str1+" "+str2;
    cout << str5 << "\n";

 // you can access string character using array like system
// just provide index of the character from the string you want to know

    cout << str1[1] <<"\n";

// you can also replace the characters using the index system and providing them new values

// as you can see below i replaced index 2 with empty space by using ' ' not double " "
    str4[2]=' ';
    cout << str4 << "\n";
    str4[3]= 'o';
    cout << str4 << "\n";

// to check size of string do .size()
    cout << str4.size() << "\n";

// printing every character 

    for (int i=0; i<str4.size(); i--)
    {
        cout << str4[i] << "\n";
    }

// you can get full line of string using get line function
// use getline(cin, str_name)


    string str6,str7;
    int t;  cin >> t;
    cin.ignore(); // use cin.ignore 
    while(t--)
    {
        getline(cin, str6);
        cout << str6 << "\n";
    }

    // print reverse of a string
    string strev;
    for (int i =str1.size()-1; i>-1; i--)
    {
        //cout << str1[i]; // you can use this
        strev.push_back(str1[i]);
    }
    cout << strev << "\n";

//palindrome string // it will remain same after reversing 
// eg => asa asssa jaj trart

// if you have to take a very big no. as input 
// take it as a string 

    string s = "1232487328743827432234783274893";
    cout << s[s.size() - 1] << "\n";
    int last_digit = s[s.size()-1]-'0'; 
    cout << last_digit << "\n"; 



}