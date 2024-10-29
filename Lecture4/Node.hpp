#pragma once

template<typename T>
class Node
{
    private:
        T Data;
        Node* Next = nullptr;
    public:
        Node(const T& value);
        Node(T&& value);
        T Data() const;
        ~Node();
};

template<typename T>
Node<T>::Node(const T& value)
{
}

template<typename T>
Node<T>::Node(T&& value)
{
}

template<typename T>
T Node<T>::Data() const
{

}

template<typename T>
Node<T>::~Node()
{
}
