#include "ArrayADT.cpp"
class ExtendedArray:public Array
{
    public:
        ExtendedArray(int);
        int greatest();
};
ExtendedArray::ExtendedArray(int a):Array(a){}
int ExtendedArray::greatest()
{
    int max;
    if(isEmpty())
    {
        cout<<"Array is Empty";
        return -1;
    }

    max = get(0);
    for(int i=1; i<count(); i++)
        if(max<get(i)){
            max = get(i);
        } 
    return max; 
}