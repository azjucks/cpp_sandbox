#pragma once

template <typename T>

class SmartPtr
{
public:
    T* ptr;
    int* nbRef;
    SmartPtr()
    {
        this->nbRef = new int(0);
        this->ptr = nullptr;
    }

    SmartPtr(T* ptr)
    {
        this->nbRef = new int(0);
        this->ptr = ptr;
    }

    SmartPtr(const SmartPtr<T>& copy)
    {
        this->nbRef = copy.nbRef;
        *nbRef += 1;
        *this = copy;
    }

    ~SmartPtr()
    {
        *nbRef -= 1;
        if (*nbRef == 0)
        {
            delete nbRef;
            delete ptr;
        }
    }

    T* operator->() const
    {
        return ptr;
    }

    T& operator*() const
    {
        return *ptr;
    }
    void reset()
    {
        *nbRef -= 1;
        ptr = nullptr;
    }

    SmartPtr& operator=(const SmartPtr& copy)
    {
        this->nbRef = copy.nbRef;
        this->ptr = copy.ptr;
        *nbRef += 1;
        return *this;
    }

    explicit operator bool() const
    {
        return ptr != nullptr;
    }
};