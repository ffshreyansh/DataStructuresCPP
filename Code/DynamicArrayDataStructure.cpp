#include <iostream>
using namespace std;

class DynArray
{
private:
    int capacity;
    int lastIndex;
    int *ptr;

public:
    DynArray(int);
    void doubleArray(int);
    bool isEmpty();
    void append(int);
    void insert(int, int);
    void edit(int, int);
    void del(int);
    bool isFull();
    int get(int);
    int count();
    void halfArray(int);
    int size();
    ~DynArray();
};

void DynArray::append(int data)
{
    if(isFull())
        doubleArray;
    lastIndex++;
    ptr[lastIndex]=data;
}

void DynArray::del(int index)
{
    int i;
    if (isEmpty())
    {
        cout << endl << "Array is Empty";
    }
    else if (index < 0 || index > lastIndex)
    {
        cout << endl << "Invalid Index";
    }
    else
    {
        for (int i = index; i <= lastIndex; i++)
        {
            ptr[i] = ptr[i + 1];
            lastIndex--;
        }
    }
}



int DynArray::get(int index)
{
    if (index >= 0 && index <= lastIndex)
        return ptr[index];
    cout << endl
         << "Invalid Index";
    return -1;
}

int DynArray::size()
{
    return capacity;
}

bool DynArray::isEmpty()
{
    return lastIndex == -1;
}

bool DynArray::isFull()
{
    return lastIndex = capacity - 1;
}

void DynArray::insert(int index, int data)
{
}

void DynArray::halfArray(int index)
{
    int *temp = new int[capacity / 2];

    for (int i = 0; i <= lastIndex; i++)
    {
        ptr[i] = temp[i];
        delete[] ptr;
        ptr = temp;
        capacity /= 2;
    }
}

void DynArray::doubleArray(int index)
{
    int *temp = new int[capacity * 2];
    for (int i = 0; i <= lastIndex; i++)
        temp[i] = ptr[i];
    delete[] ptr;
    ptr = temp;
    capacity *= 2;
}

DynArray::DynArray(int a)
{

    capacity = a;
    lastIndex = capacity - 1;
    ptr = new int[capacity];
}

DynArray::~DynArray()
{
    delete[] ptr;
}
