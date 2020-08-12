#include "pch.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    // create the array
    array<int>^ intArray = gcnew array<int>(5);
    
    //store the values in the array
    for (int i = 0; i < intArray->Length; i++)
    {
        intArray[i] = i * i;
    }

    //print the array
    for (int i = 0; i < intArray->Length; i++)
    {
        Console::WriteLine("Element {0} is {1}", i, intArray[i]);
    }

    
    return 0;
}
