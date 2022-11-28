#include "ArrayADT.cpp"
int greatest(Array obj)
{
    int max;
    if(obj.isEmpty())
    {
        cout<<"Array is Empty";
        return -1;
    }

    max = obj.get(0);
    for(int i=1; i<obj.count(); i++)
        if(max<obj.get(i)){
            max = obj.get(i);
        }
    return max;
}