#pragma once
#include "Node.hpp"

template<typename T>
class LinkedList
{
    private:
        size_t Count = 0;
        Node<T>* Head = nullptr;

    public:
        LinkedList() = default;

        virtual void Push(const T& element) {};
        virtual void Push(T&& element) {};
        virtual void Remove(unsigned int);
        virtual unsigned int Count() const;
        virtual void ElementAt(unsigned int) const;
        virtual void operator[](unsigned int) const;
        virtual ~LinkedList();
};

template<typename T>
LinkedList<T>::LinkedList(/* args */)
{
}

template<typename T>
LinkedList<T>::~LinkedList()
{
}
