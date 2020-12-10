#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cassert>
using namespace std;

struct Node{
   Node* next;
   Node* prev;
   int value;
   int key;
   Node(Node* p, Node* n, int k, int val):prev(p),next(n),key(k),value(val){};
   Node(int k, int val):prev(NULL),next(NULL),key(k),value(val){};
};

class Cache{
   
   protected: 
   map<int,Node*> mp; //map the key to the node in the linked list
   int cp;  //capacity
   Node* tail; // double linked list tail pointer
   Node* head; // double linked list head pointer
   virtual void set(int, int) = 0; //set function
   virtual int get(int) = 0; //get function

};

class LRUCache : public Cache{
    public:
    LRUCache(const int capacity): Cache() {
        cp = capacity;
        head = NULL;
        tail = NULL;
    }

    void set(const int key, const int value){
       if (mp.find(key) == mp.end()){ // Key not present
            Node* newEntry = new Node(key,value);
            mp.insert({key,newEntry});
          if (mp.size() == cp+1){ // Full capacity
            Node* tmpNode = tail -> prev;
            mp.erase(tail -> key);
            tail -> prev = NULL;
            delete tail;
            tail = tmpNode;
            newEntry -> next = head;
            head = newEntry;
          }
          else{
             if (head == NULL){
                head = newEntry;
             }
             else if(tail == NULL){
                tail = head;
                newEntry -> next = tail;
                head = newEntry;
             }
          }
       } 
       else {
          mp[key] -> value = value;
       }
    }

    int get(const int key){
       if (mp.find(key) == mp.end()){
          return -1;
       }
       return mp[key] -> value;
    }
};

int main() {
   int n, capacity,i;
   cin >> n >> capacity;
   LRUCache l(capacity);
   for(i=0;i<n;i++) {
      string command;
      cin >> command;
      if(command == "get") {
         int key;
         cin >> key;
         cout << l.get(key) << endl;
      } 
      else if(command == "set") {
         int key, value;
         cin >> key >> value;
         l.set(key,value);
      }
   }
   return 0;
}
