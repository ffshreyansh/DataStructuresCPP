#include <iostream>
using namespace std;

class Array
{
private:
    int capacity;
    int lastIndex;
    int *ptr;
    // int *arr = new int(5);

public:
    Array(int);
    bool isEmpty();
    void append(int);
    void insert(int,int);
    void edit(int, int);
    void del(int);
    bool isFull();
    int get(int);
    int count();
    int find(int);
    void highest(int);
    ~Array();
    
};
// void Array::highest(int index){
//     int temp=0;
//     for(int i=0; i<=lastIndex ; i++){
        
//         for(int j= i+1; j<=lastIndex; j++){
//             if(ptr[i]>ptr[j])
//             temp = ptr[i];
//             ptr[i] = ptr[j];
//             ptr[j] = temp;
//         }
        
//     }
//     return i;
// }
// int Array::highest(int index){

//     for(int i=0; i<=lastIndex; i++){
//         if(ptr[i]<ptr[i+1])
//             cout<<ptr[i+1];
//     cout<<ptr[i];
//     }
// }

int Array::find(int element){

int i;
for(i = 0; i<= lastIndex; i++)
    if(ptr[i]==element)
    return i;
return -1;
}

Array::~Array(){
    delete[]ptr;
}

int Array::count(){
    return lastIndex+1;
    }

int Array::get(int index){
    
    if(index>=0 && index<=lastIndex){
        return ptr[index];
    cout<<endl<<"Invalid Index";
    return -1;
    }
}

bool Array::isFull(){
    return lastIndex=capacity-1;
}

void Array::del(int index)
{
    int i;
    if(isEmpty())
    cout<<endl<<"Array is Empty";
    else if(index<0 || index>lastIndex){
        cout<<endl<<"Invalid Index";
    }
    else{
        for(i = index; i<lastIndex; i++){
            ptr[i] = ptr[i+1];
            lastIndex--;
        }
    }
}

void Array::edit(int index, int data)
{
    if(index>=0 && index<=lastIndex){
        ptr[index] = data;
    }
}
void Array::insert(int index, int data){
    int i;
    if(lastIndex == capacity-1)
        cout<<endl<<"Array is Already Full";
    else if( index<0 || index>lastIndex + 1){
        cout<<endl<<"Invalid Index";
    }
    else{
        for(i = lastIndex; i>=index; i--)
        ptr[i+1] = ptr[i];
        ptr[index] = data;
        lastIndex++;

    }
    
}

void Array::append(int data){
 if (lastIndex == capacity-1)
 {
    cout << endl << "Array is Full.";
 }else{
    lastIndex++;
    ptr[lastIndex] = data;
 }
 
};
bool Array::isEmpty(){
    // if (lastIndex == -1)
    // {
    //     return true;
    // }else{
    //     return false;
    // }
    return lastIndex==-1;
    
};

Array::Array(int a){

    capacity=a;
    lastIndex = -1;
    ptr = new int[capacity];


}

int main(){
    
    Array obj(5);

    if(obj.isEmpty())
    cout<<"is Empty ";

    obj.append(20);
    obj.append(30);
    obj.append(50);
    obj.insert(1,10);
    
    

    cout<<endl;
    return 0;
}