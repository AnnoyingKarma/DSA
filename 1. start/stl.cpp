#include<bits/stdc++.h>
using namespace std;

int main()
{
    // pair can only store two data type //
    // but it can be nested pair too to add more values
    // to store multiple data like string int or double
    
    pair <int, int> a = {3, 6};
    cout << a.first << "  " << a.second << endl;    
    
    // nested pair
    pair<int, pair<int, int>> p = {2, {4 , 5}};
    cout << p.first << "  " << p.second.first << "  "<< p.second.second << endl;

    // pair array
    pair <int , int> arr[] ={{1,2}, {2,5}};
    cout << arr[1].first << endl;

    // vectors is a container that is dynamic in nature and can change array size
    vector<int> ok; // this contains a empty container 

    ok.push_back(2); // added 2 value to ok array on 0th INDEX
    ok.emplace_back(4); // added 4 value to ok array on 1st index
    cout << ok[0] << endl;
    cout << ok[1] << endl;

    // you can define vector of pair data type
    vector<pair<int, int>> pairvec;
    pairvec.push_back({1,4});
    pairvec.emplace_back(3,6);
    // printing pair vector
    cout << pairvec[1].first << endl;
    cout << pairvec[0].second << endl;

    vector <int> al(5);// 5 defines the index it will have 0-4 index will be present in it you can still modify later on this value 
    
    vector<int> alde(/*this defines how many element will be in array*/5,/* this defines all the values that will be present in all the spaces defines earlier*/99 /*for eg. there will be 99 in 0,1,2,3,4 index cause we provided 5 space for 99 (5,99)*/);
    vector<int> ald (5,99);
    for(int i=0; i<5; i++)
    {
        cout << ald[i] << " ";
    }
    cout << endl;

    // you can copy vector like this
    vector<int> copi (ald); // this is exact copy of above vector
    for(int i=0; i<5; i++)
    {
        // other way to use copi[i] --> copi.at(i)
        cout << copi.at(i) << " ";
    }
    cout << endl;

    // you can use iterator to access stuff in vector
    vector<int> abc = {1,2,3,4,5};
    abc.push_back(8);
    abc.emplace_back(22);
    vector<int>::iterator it = abc.begin();
    // it is now at 0th index
    // to access the memory in vector use iterator name you gave and then *(given-name)
    cout << *(it) << endl;
    it++;
    cout << *(it) << endl;
    // .end access the memory after last index so you have to do it-- to access last index
    vector<int>::iterator itend = abc.end();
    cout << *(itend)  << endl; // it will give garbage value cause its getting the value next to last index which doesn't exist
    cout << *(--itend) << endl; // last index

    // reverse end -> it.rend();
    // reverse begin -> it.rbegin();
    for(vector<int>::iterator itloop =abc.begin(); itloop != abc.end(); itloop++)
    {
        cout << *(itloop) << "  ";
    }
    cout << endl;

    // another short way to write above iterator line
    // can use auto to autodefine data type
    for(auto itauto = abc.begin(); itauto!= abc.end(); itauto++)
    {
        cout << *(itauto) << "  ";
    }
    cout << endl;


    // shortest way to do above lines
    for(auto itfullyauto : abc)
    {
        cout << itfullyauto << "  ";
    }
    cout << endl;

    // using auto to auto define string and int
    auto ac = 12;
    auto ab = "what";
    cout << ac << " " << ab << endl;

    // erase function in vector abc.erase
    abc.erase(abc.begin()+1);
        for (auto itft : abc)
    {
        cout << itft << "  ";
    }
    cout << endl;

    // erase multiple in vector 
    // this will erase 1 to 3 indexes in vector 
    abc.erase(abc.begin()+1, abc.begin()+4);

    for (auto itft : abc)
    {
        cout << itft << "  ";
    }
    cout << endl;

    // Insert function
    vector <int> dcd(3,77);
      for (auto itro : dcd)
    {
        cout << itro << "  ";
    }
    cout << endl;
    // insert function for single element
    dcd.insert(dcd.begin()+2, 37);


      for (auto itro : dcd)
    {
        cout << itro << "  ";
    }
    cout << endl;

    // insert for multiple elements
    dcd.insert(dcd.begin(), 3, 0); 
    // dcd.insert(dcd.begin(), the time you wanna get that occurence, the thing you wanna add up)

      for (auto itro : dcd)
    {
        cout << itro << "  ";
    }
    cout << endl;

    // copy paste an entire vector
    vector<int> copy(dcd);
    dcd.insert(dcd.begin(),copy.begin(),copy.end());

          for (auto itro : dcd)
    {
        cout << itro << "  ";
    }
    cout << endl;

    // size function abc.size(); will provide you with size of function
    cout << dcd.size() << endl;

    // swap function to swap stuff 
    abc.swap(dcd); // just swapped vector with another vector

    for (auto itsw1 : abc)
    {
        cout << itsw1 << "  ";
    }
    cout << endl;
    for (auto itsw2 : dcd)
    {
        cout << itsw2 << " ";
    }
    cout << endl;


    // clear function empties down an vector to 0 .. 
    abc.clear();

    for (auto itsw1 : abc)
    {
        cout << itsw1 << "  ";
    }
    cout << endl;

    // empty function 
    // it will send the value 0 or 1 telling if vector is empty or not
    cout << dcd.empty() << endl;
    cout << abc.empty() << endl;

    // list is similar to vector 
    list<int> ls = {1,2,3};
    ls.push_back(12);
    ls.emplace_back(14);
    ls.push_front(0);
    for(auto lis : ls)
    {
        cout << lis << " ";
    }
    cout << endl;

    // deque is also similar to vector and list
    deque<int> dq = {1,3,4,6};
    dq.push_back(11);
    dq.emplace_back(22);
    dq.push_front(13);
    dq.emplace_front(43);

    dq.pop_back(); // removes the last element
    dq.pop_front(); // removes the first element
        for(auto dquq : dq)
    {
        cout << dquq << " ";
    }
    cout << endl;

    dq.back() -= dq.front(); // last element - first element

        for(auto dquq : dq)
    {
        cout << dquq << " ";
    }
    cout << endl;


    // stack  ==>> LIFO (Last in first out) 
    // stack is similar to stack like you are stacking 1 thing on top of another 
    
    stack<int> st;
    st.push(232);
    st.push(39);
    st.emplace(77);
    cout << st.top() << endl; // it will print top element in stack

    stack<int> stl (st); // copy of stack
    
    st. pop(); // deltes the top element in stack

    cout << st.top() << endl; 
    cout << st.size() << endl; // tell the size of stack
    cout << st.empty() << endl;// tells if element if empty or not

    // queue is similar to stack ==>> FIFO First in first out

    queue<int> qu;
    qu.push(12);
    qu.push(10);
    qu.emplace(7);

    qu.back() += 1; // will add 1 to 7;

    cout << qu.front() << "  " << qu.back() << endl;
    
    qu.pop(); // 12 will be removed

    cout << qu.front () << endl;

// priority_queue ==>> The larget element will remain at the top
// push pop top are the used and main functions
// max heap
    priority_queue<int> pq;

    pq.push(120);
    pq.push(100);
    pq.emplace(77);

    cout << pq.top() << endl;

    pq.pop(); // removes the largest element

    cout << pq.top() << endl;

// priority_queue for the smallest element on top
// min heap
 priority_queue<int, vector<int>, greater<int>> pqs;

    pqs.push(120);
    pqs.push(100);
    pqs.emplace(77);

    cout << pqs.top() << endl;

    pqs.pop(); // removes the smallest cause we changed the priority element

    cout << pqs.top() << endl;

// Time comple. of 
// push,pop => logn
// top => O(1)

//set conatiner 
// ==>> it stores everything in sorted order
// ==>> unique 


    set<int> sett;
    sett.insert(2);
    sett.insert(4);
    sett.insert(3);    
    sett.insert(1);
    sett.emplace(7); 

    auto atst = sett.find(4); //it returns an iterator which points to the address
    // If there is no element present in set which is specified in find(--)   so it will give output of after the last element

    sett.erase(4); // will remove 4 from set

    int cnntt = sett.count(2); // if the occurence is present it will output 1 and if not will output 0

    auto atst1 = sett.find(2);

    for (auto autost : sett)
    {
        cout << autost << "  ";
    }
    cout << endl;

    sett.erase(atst, atst1);
    // will erase element from atst to atst1 2-4; element will be erased

    for (auto autost1 : sett)
    {
        cout << autost1 << "  ";
    }
    cout << endl;
 
 // important - count , find , erase ==> logn

// multiset // similar to set but doesn't follow unique properties
 // can store multiple occurences
    multiset<int> ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1); // this will erase all the 1's

    ms.erase(ms.find(1)); // this will erase first occurence of 1;

   // ms.erase(ms.find(1), ms.find(1)+2);

// unordered set // randomized order
// doesent follow the sorted property of set
    
    // unordered_set<int> unst;

// map ==>> key and value is stored 
// keys are unique and value can be dublicate values

    map<int, int> mpp; 
    map<int,pair<int, int>> mp1;
    map<pair<int, int>, int> mp2;

    mpp[1]=2; // key 1 and value 2
    mpp.emplace(3, 5); // key 3 and value 5
    mpp.insert({2,9});
    
    mp2[{2,3}] =10;

    // traverse a map
    for(auto mppp : mpp)
    {
        cout << mppp.first << " " << mppp.second << endl;
    }

    cout << mpp[1];
    cout << mpp[5];

    auto mppp1 = mpp.find(3);
   // cout << *(mppp1).second;

    auto mppp1 = mpp.find(5); // if the calue is not present it will return n or ??

        auto mppp2 = mpp.lower_bound(2);
        auto mppp2 = mpp.upper_bound(3);


// multimap // you can store duplicate keys
// in sorted order

// unorderedmap // will not have any order
// will have unique keys

// sort ==>> sort(a,a+7)  
// it sorts the elements // can sort vector and array
// sort(v.begin(), v.end()); // sorting vector
// sort spefic parts ==>> sort(a+8, a+11);

// sort in desending order ==>> 
//sort(a, a+n, greater<int>);

// How to sort in your own way

pair<int, int> a[] = {{1,2},{2,1},{4,1}};

// sort the above element according to second element 
// if second element is same, 
// then sort according to first element but in desending

// sort(a, a+n, comp) // comperator




} 
