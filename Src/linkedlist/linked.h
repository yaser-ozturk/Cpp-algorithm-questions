//
// Created by User on 10.03.2025.
//

#ifndef LINKED_H
#define LINKED_H

#include <iostream>

template <typename T>
class Node {
public:
    T data;
    Node<T>* next;

    explicit Node() {
        data = 0;
        next = nullptr;
    }

    explicit Node(T value) {
        data = value;
        next = nullptr;
    }
};

template <typename T>
class LinkedList {
public:
    Node<T>* head;
    Node<T>* temp;

    LinkedList() {
        head = nullptr;
        temp = nullptr;
    }

    Node<T>* getHead() const {
        return head;
    }

    void Addlist(T value) {
        auto* newNode = new Node<T>(value);

        if (head == nullptr) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    void addFirst(T value) {
        auto* newNode = new Node<T>(value);
        newNode->next = head;
        head = newNode;
    }

    void pushback(T value) {
        if (head == nullptr) {
            head = new Node<T>(value);
        }
        else {
            Node<T>* tmp = head;
            while (tmp->next != nullptr) {
                tmp = tmp->next; // tmp yi next olarak günceller
            }
            tmp->next = new Node<T>(value);
        }
    }

    void print() {
        if (head == nullptr) {
            std::cout << "Empty list" << std::endl;
            return;
        }

        Node<T>* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    void erase(Node<T>* index) {
        if (head == nullptr) {
            std::cout << "Empty list" << std::endl;
            return;
        }

        Node<T>* elapsed = head;
        if (index != nullptr) {
            elapsed = temp;
            while (elapsed->next != index) {
                elapsed = elapsed->next;
            }
            elapsed->next = index->next;
            temp = elapsed;
        }
        else {
            while (elapsed->next != index) {
                elapsed = elapsed->next;
            }
            elapsed->next = index->next;
        }
        delete index;

    }

    void DualEleminater() {
        if (head == nullptr) {
            std::cout << "Empty list" << std::endl;
            return;
        }

        Node<T>* current = head;
        Node<T>* other = head->next;
        Node<T>* elap = head;
        while (current!= nullptr) {
            T looked = current->data;
            std::cout << std::endl;
            std::cout << "bu degere bakmaktayim " <<looked << " ";
            std::cout << std::endl;
            while (elap->next != nullptr) {
                if (looked == other->data) {
                    std::cout << std::endl;
                    //std::cout << "benzer buldum" << other->data << " ";
                    std::cout << std::endl;
                }
                elap = other;
                //std::cout << "gecmis deger "<< elap->data << " ";

                if (other->next != nullptr) {
                    other = other->next;
                   // std::cout << "simdiki baktigim"<< other->data << " ";
                    std::cout << std::endl;
                }

            }

            current = current->next;
            elap = current;
            other = current->next;


        }
        std::cout << std::endl;

    }
};

#endif // LINKED_H
