#include<bits/stdc++.h>

using namespace std;

void print(string message){
    cout <<message<<endl;
}

void paircheck(){
    pair<int, int> p={20,13};
   cout<<p.first<<" "<<p.second<<endl;
   pair<int, pair<int,int>> p1 ={26,p};
    cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
    pair<int,int> arr [] ={{1,2},{3,4},{5,6}};
    for (int i = 0; i < 3; i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    
}

void vectorstolearn(){
    vector<int> v; // create an empty container
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    
    cout << "Vector elements: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // // Demonstrating vector operations
    // cout << "Size of vector: " << v.size() << endl;
    // cout << "Capacity of vector: " << v.capacity() << endl;
    // // capacity is the total allocated space, which may be larger than the current size.
    // // This is because vectors can grow dynamically, and the capacity 
    // // is the maximum size before a reallocation occurs.
    
    // // Resizing the vector
    // v.resize(10, 0); // Resize to 10, filling new elements with 0
    // cout << "After resizing, vector elements: ";
    // for (int i = 0; i < v.size(); i++) {
    //     cout << v[i] << " ";
    // }

    vector<pair<int, int>> vp;
    vp.push_back({1, 2});
    vp.push_back({3, 4});
    vp.push_back({5, 6});
    vp.emplace_back(7, 8);
    // for (const auto& p : vp) {
    //     cout << "Pair: " << p.first << ", " << p.second << endl;
    // }

    // vector<int> v1(13,100);
    // for(int i=0;i<v1.size();i++){
    //     if(i%11==0){
    //         cout<<v1[i]<<" i :"<<i<<endl ;
    //     }
    // }
    // cout << endl;

    vector<int>::iterator it = v.begin();
    // it points to the first element of the vector
    cout << "First element using iterator: " << *it << endl;
    it++; // move to the next element
    cout << "Second element using iterator: " << *it << endl;
    it+=2; // move two elements forward
    cout << "Fourth element using iterator: " << *it << endl;

    for (vector<int>:: iterator it =v.begin(); it !=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl;
    for (auto it =v.begin(); it !=v.end(); it++)
    {
        cout << *it << " ";
    }
    cout<<endl; 
    for (auto it : v) {
        cout << it << " ";
    }
    cout<<endl;


    v.erase(v.begin() + 2); // remove the third element
    cout << "After erasing the third element: ";
    for (  auto elem : v) {
        cout << elem << " ";
    }
    v.erase(v.begin() + 1, v.begin() + 3); // remove the second and third elements   
    cout << endl;
    for (  auto elem : v) { 
        cout << elem << " ";
    }
    cout << endl;
    v.clear(); // clear the vector
    cout << "After clearing, size of vector: " << v.size() << endl;
    v.insert(v.begin(), 1); // insert 1 at the beginning
    v.push_back(5); // add 5 at the end
    cout << "After inserting 1 & 5 at the beginning and adding 5 at the end: ";
    for (  auto elem : v) {     
        cout << elem << " ";
    }
    v.insert(v.begin() + 1, 2,10);// insert 2 at the second position`
    cout<<endl; 
    cout << "After inserting two 10 at the beginning and adding 5 at the end: ";
    for (  auto elem : v) {     
        cout << elem << " ";
    }



}

void explainList(){
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);
    l.push_back(5);
    l.emplace_front(6);
    l.emplace_front(7);
    cout << "List elements: ";
    for (auto it : l) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating list operations
    cout << "Size of list: " << l.size() << endl;
    
    // Removing elements
    l.remove(3); // remove all occurrences of 3
    cout << "After removing 3, list elements: ";
    for (auto it : l) {
        cout << it << " ";
    }
    cout << endl;

    // Reversing the list
    l.reverse();
    cout << "After reversing, list elements: ";
    for (auto it : l) {
        cout << it << " ";
    }
    cout << endl;

    // Sorting the list
    l.sort();
    cout << "After sorting, list elements: ";
    for (auto it : l) {
        cout << it << " ";
    }
    
}
void explainDeque(){
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_back(3);
    d.push_front(4);
    d.push_back(5);
    d.emplace_front(6);
    d.emplace_front(7);
    cout << "Deque elements: ";
    for (auto it : d) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating deque operations
    cout << "Size of deque: " << d.size() << endl;
    
    // Removing elements
    d.pop_back(); // remove the last element
    cout << "After popping back, deque elements: ";
    for (auto it : d) {
        cout << it << " ";
    }
    cout << endl;

    // Reversing the deque
    reverse(d.begin(), d.end());
    cout << "After reversing, deque elements: ";
    for (auto it : d) {
        cout << it << " ";
    }
}

void explainStack(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    cout << "Stack elements: ";
    while (!s.empty()) {
        cout << s.top() << " "; // print the top element
        s.pop(); // remove the top element
    }
    // size
    cout << "Size of stack: " << s.size() << endl; // size will be 0 after popping all elements
    cout << endl;
}

void explainQueue(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " "; // print the front element
        q.pop(); // remove the front element
    }
    // back element is
    cout << "Back element: " << q.back() << endl; // this will give an error since the queue is empty now
    // size
    cout << "Size of queue: " << q.size() << endl; // size will be 0 after popping all elements
    q.push(11);
    q.push(20);
    
    
    cout << "Queue elements after adding 11,20: ";
    while (!q.empty()) {
        cout << q.front() << " "; // print the front element
        q.pop(); // remove the front element
    }
    cout << endl;
    q.push(20);
    q.front()+= 2; // change the front element to 2
    cout << "Queue elements after adding 2 to front element: ";
    while (!q.empty()) {
        cout << q.front() << " "; // print the front element
        q.pop(); // remove the front element
    }
    cout << endl;
}
void explainPQueue(){
    priority_queue<int> pq; // max heap
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    pq.emplace(6);
    cout << "Priority Queue elements: ";
    while (!pq.empty()) {
        cout << pq.top() << " "; // print the top element
        pq.pop(); // remove the top element
    }
    cout << endl;

    // size
    cout << "Size of priority queue: " << pq.size() << endl; // size will be 0 after popping all elements

    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(5);
    minHeap.emplace(8);
    minHeap.push(2);
    minHeap.emplace(5);
    minHeap.push(6);
    
    cout << "Min Heap elements: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " "; // print the top element
        minHeap.pop(); // remove the top element
    }
}

void explainSet(){
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.emplace(2);
    s.emplace(5);
    cout << "Set elements: ";
    for (auto it : s) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating set operations
    cout << "Size of set: " << s.size() << endl;
    
    // Removing elements
    s.erase(3); // remove 3
    cout << "After removing 3, set elements: ";
    for (auto it : s) {
        cout << it << " ";
    }

    auto it = s.find(3); // find element 2
    if (it != s.end()) {
        cout << "\nElement 3 found in set." << endl;
    } else {
        cout << "\nElement 3 not found in set." << endl;
    }


    int count = s.count(2); // count occurrences of 3
    cout << "Count of 2 in set: " << count << endl;

    auto it1 = s.lower_bound(2); // find the first element not less than 2
    auto it2 = s.upper_bound(2); // find the first element greater than 2
    cout<<"lower bound of 2 is : "<<*it1<<endl;
    cout<<"upper bound of 2 is : "<<*it2<<endl;

}
void explainMultiset(){
    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(3);
    ms.emplace(2);
    ms.emplace(5);
    ms.emplace(3);
    cout << "Multiset elements: ";
    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating multiset operations
    cout << "Size of multiset: " << ms.size() << endl;
    
    // Removing elements
    ms.erase(3); // remove 3
    cout << "After removing 3, multiset elements: ";
    for (auto it : ms) {
        cout << it << " ";
    }

    ms.erase(ms.find(2)); // remove one occurrence of 2
    cout << "\nAfter removing one occurrence of 2, multiset elements: ";    
    for (auto it : ms) {
        cout << it << " ";
    }
}
void explainUSet(){
    unordered_set<int> us;
    // upper bound and lower bound are not applicable for unordered_set
    // time complexity of unordered_set is O(1) for insert, erase and find operations on average
    us.insert(1);
    us.insert(2);
    us.insert(3);
    us.emplace(2);
    us.emplace(5);
    cout << "Unordered Set elements: ";
    for (auto it : us) {
        cout << it << " ";
    }
    cout << endl;

    // Demonstrating unordered set operations
    cout << "Size of unordered set: " << us.size() << endl;
    
    // Removing elements
    us.erase(3); // remove 3
    cout << "After removing 3, unordered set elements: ";
    for (auto it : us) {
        cout << it << " ";
    }

    auto it = us.find(3); // find element 2
    if (it != us.end()) {
        cout << "\nElement 3 found in unordered set." << endl;
    } else {
        cout << "\nElement 3 not found in unordered set." << endl;
    }
}

void explainMap(){
    map<int, string> m;
    m[1] = "one";
    m[3] = "three";
    m[2] = "two";
    m.emplace(4, "four");
    cout << "Map elements: ";
    for (auto it : m) {
        cout << it.first << ": " << it.second << ", ";
    }
    cout << endl;

    // Demonstrating map operations
    cout << "Size of map: " << m.size() << endl;
    
    // Removing elements
    m.erase(2); // remove key 2
    cout << "After removing key 2, map elements: ";
    for (auto it : m) {
        cout << it.first << ": " << it.second << ", ";
    }

    auto it = m.find(3); // find key 3
    if (it != m.end()) {
        cout << "\nKey 3 found in map with value: " << it->second << endl;
    } else {
        cout << "\nKey 3 not found in map." << endl;
    }
    // Checking if a key exists
    cout << "Checking if key 5 exists: ";
    cout<<m[5]<<endl; // this will insert key 5 with default value "" if it doesn't exist
}
bool comp(pair<int,int> p1,pair<int,int> p2){
    if(p1.second <p2.second)  return true;
    if(p1.second >p2.second)  return false;
    if(p1.first > p1.second) return true;
    return false;
}
void explainExtra(){

    int a[] ={1,5,2,2,3};
    // print array elem
    cout<<"print array elem before sort upto 3  place: ";
    for(auto it:a){
        cout<< it<<" ";
    }
    cout<<endl;
    sort(a,a+3);
    cout<<"print array elem before sort upto 3  place: ";
    // print array elem
    for(auto it:a){
        cout<< it<<" ";
    }
    pair<int,int> arr[] ={{1,2},{2,1},{4,1}};


    // sort it according to second element
    // if second elemt is same, then sort it
    // according to the first element but in descending
    cout<<endl;
    cout<<"array elem are before sort w.r.t 2nd number in pair: ";
    for(auto it : arr){
        cout<<"{"<<it.first<<" "<<it.second<<"} ";
    }
    cout<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,comp);
    cout<<"array elem are after sort: ";
    for(auto it : arr){
        cout<<"{"<<it.first<<" "<<it.second<<"} ";
    }
    cout<<endl;

    int num =7;
    int cnt =__builtin_popcount(num);
    int cnt6 =__builtin_popcount(num-1);
    int cnt9 =__builtin_popcount(num+2);
    cout<<"num of set bit of "<<num<<" is: "<<cnt<<endl;
    cout<<"num of set bit of "<<num-1<<" is: "<<cnt6<<endl;
    cout<<"num of set bit of "<<num+2<<" is: "<<cnt9<<endl;
    
    string s ="123";
    sort(s.begin(),s.end());
    cout<<"sorting string "<<s<<" :";
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end())); 
    cout<<endl;
    cout<<"print array elem : ";
    for(auto it:a){
        cout<< it<<" ";
    }
    int n1 =sizeof(a)/sizeof(a[0]);
    int amax = *max_element(a,a+n1);
    int amin = *min_element(a,a+n1);
    cout<<"max element: "<<amax<<" and min element: "<<amin<<endl;
}

int main() {
    // print("sibaprasad");
    print("Jai Jagannath, Miku");
    // paircheck();
    // vectorstolearn();
    // explainList();
    // explainDeque();
    // explainStack();
    // explainQueue(); 
    // explainPQueue();
    // explainSet();
    // explainMultiset();
    // explainUSet();
    explainExtra();

    // explainMap();
    cout << endl;
       
    return 0;
}