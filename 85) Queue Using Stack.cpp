#include <bits/stdc++.h> 
class Queue {
    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    int size;
    public:
   Queue() {
        size=0; 
   }
   void enQueue(int val) { 
        s2.push(val);
        while(!s1.empty()){ 
           s3.push(s1.top()); 
           s1.pop(); 
       }
        while(!s3.empty()){
            s2.push(s3.top());
            s3.pop(); 
       }
        size++;
        swap(s1,s2);
        return;
   }
   int deQueue() { 
        if(size<=0){ 
           return -1;
        } 
       else{ 
           int ans=s1.top();
            s1.pop(); 
           size--; 
           return ans; 
       }
    }
   int peek() { 
       if(size<=0){
            return -1;
        }
        return s1.top();
    }
   bool isEmpty() { 
       return !size;
    }
 };
