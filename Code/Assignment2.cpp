#include <iostream>
using namespace std;

class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;
public:
    Array(int);
    int highest(int);


};

int Array::highest(int index){

    for(int i=0; i<=lastIndex; i++){
        if(ptr[i]<ptr[i+1])
            cout<<ptr[i+1];
    cout<<ptr[i];
    }
}
Array::Array(int a){

    capacity = a;
    lastIndex = capacity-1;
    ptr = new int[capacity];
}

int main(){
    // Array obj[5]
}