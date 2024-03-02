#include <iostream>
#include "Vector.h"

namespace ANANDCPP {
Vector::Vector() : mArr(new int[10]), mCapacity(10), mSize(0) {}

Vector::~Vector() {
    mArr = nullptr;
    delete[] mArr;
}


void Vector::push_back(int val) {
    if (mSize >= mCapacity) {
        int* temp = new int[mCapacity * 2];

        // copying the elements of the aray to temp
        for (int i = 0; i < mSize; i++)
        {
            temp[i] = mArr[i];
        }

        mCapacity *= 2;

        delete [] mArr;

        mArr = temp;

    }
    mArr[mSize++] = val;

}

void Vector::pop() {
    
    if (mSize > 0) {
    // Decrement size to effectively remove the last element
        mSize--;

        // Use delete[] for arrays
        delete [] mArr;
   
    } else {
        std::cout << "Vector is empty. Cannot pop back." << std::endl;
    }
}

int Vector::capacity() const{
    return mCapacity;
}

int Vector::size() const{
    return mSize;
}

int Vector::top() const{
    if (mSize == 0)
    {
        std::cout<<"There are no elements in the vector to return top !";
        return -1;
    }else{
        return mArr[mSize-1];
    }

}

void Vector::displayVector() {
    std::cout << "Vector elements: ";
    for (int i = 0; i < mSize; ++i) {
        std::cout << mArr[i] << " ";
    }
    std::cout << std::endl;
}
}
