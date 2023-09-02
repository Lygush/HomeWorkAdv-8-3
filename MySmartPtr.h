#pragma once 

template<class T>
class My_smart_ptr{
    T* ptr{};
public:
    My_smart_ptr(T* ptr) : ptr(ptr) {};

    ~My_smart_ptr() {
        std::cout << "destructor" << "\n";
        delete ptr;
    }

    My_smart_ptr(const My_smart_ptr&) = delete;
    My_smart_ptr<T>& operator=(const My_smart_ptr<T>&) = delete;

    T& operator*() {
        return *ptr;
    }

    T* release() {
        auto release_ptr = ptr;
        ptr = nullptr;
        return release_ptr;
    } 
};
