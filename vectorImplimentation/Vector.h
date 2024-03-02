#pragma once

namespace ANANDCPP {
class Vector{
    public:
        Vector();

        ~Vector();

        void push_back(int v);

        void pop();

        int capacity() const;

        int size() const;

        int top() const;

        void displayVector() ;

    private:

        int *mArr;
        int mCapacity;
        int mSize;
};
}