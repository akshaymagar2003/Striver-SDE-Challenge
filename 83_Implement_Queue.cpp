#include <bits/stdc++.h> 
class Queue {
public:
        int data[10000];
        int l;
        int r;
    Queue() {
         data[10000];
        l=0;
        r=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(l==r){
            return true ;
        }return false;
    }

    void enqueue(int da) {

        data[r]=da;
        r++;
    }

    int dequeue() {
        if(l==r){
            return -1;
        }
        int ans=data[l];

            l++;
       return ans;
     
    }

    int front() {
        if(l==r){
            return -1;
        }
       return data[l];
    }
};
