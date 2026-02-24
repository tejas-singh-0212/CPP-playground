#include<climits>
#include<iostream>
using namespace std;
template <typename T>
class StackUsingArray {
    T *data;
    int nextIndex;
    int capacity;

    public:
    StackUsingArray(){
        data = new T[4];
        nextIndex = 0;
        capacity = 4;
    }

    // return the number of elements in stack
    int size(){
        return nextIndex;
    }

    // check if stack is empty 
    bool isEmpty(){
        return nextIndex == 0;
    }

    // insert element
    void push(T element){
        if (nextIndex == capacity){
            // creating new array of double the inital size
            T * newData = new T[2* capacity];
            // copying ld array
            for(int i=0; i < capacity; i++){
                newData[i] = data[i];
            }
            capacity *= 2;
            delete [] data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }

    // delete element
    T pop(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return 0;
        }
        nextIndex--;
        return data[nextIndex];
    }

    T top(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
            return 0;
        }
        return data[nextIndex-1];
    }
};