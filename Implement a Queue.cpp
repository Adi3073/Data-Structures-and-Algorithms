// Implement a Queue

#include <bits/stdc++.h>

class Queue {

  int size;

  int *arr;

  int myfront;

  int rare;

 

public:

  Queue(int size = 5000) {

    // Implement the Constructor

    this->size = size;

    this->arr = new int[size];

    for (int i = 0; i < size; i++) {

      arr[i] = 0;

    }

    myfront = 0;

    rare = 0;

  }

 

  /*----------------- Public Functions of Queue -----------------*/

 

  bool isEmpty() {

    // Implement the isEmpty() function

    if (myfront == rare) {

      return true;

    } else {

      return false;

    }

  }

 

  void enqueue(int data) {

    // Implement the enqueue() function

    if (rare < size) {

      arr[rare] = data;

      rare++;

    }

  }

 

  int dequeue() {

    // Implement the dequeue() function

 

    if (myfront < size && myfront < rare) {

       int store=arr[myfront];

      arr[myfront] = 0;

      myfront++;

      return store;

    }else{

        return -1;

    }

  }

 

  int front() {

    // Implement the front() function

    if(myfront<rare){

 

    return arr[myfront];

    }else{

        return -1;

    }

  }

};
