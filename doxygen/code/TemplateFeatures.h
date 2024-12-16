/**
 * @file TemplateFeatures.h
 * @brief Defines template classes and functions for general use.
 */

#pragma once

#include <iostream>
#include <vector>

/**
 * @brief A generic stack class.
 * @tparam T The type of elements stored in the stack.
 *
 * This template class provides a simple stack data structure implementation, which
 * supports basic operations such as push, pop, and peek.
 */
template<typename T>
class Stack {
public:
    /**
     * @brief Pushes an element onto the stack.
     * @param value The value to push onto the stack.
     */
    void push(const T& value) {
        elements.push_back(value);
    }

    /**
     * @brief Removes the top element of the stack.
     * @return The element at the top of the stack.
     * @throws std::out_of_range if the stack is empty.
     */
    T pop() {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::pop(): empty stack");
        }
        T value = elements.back();
        elements.pop_back();
        return value;
    }

    /**
     * @brief Gets the top element of the stack without removing it.
     * @return The element at the top of the stack.
     * @throws std::out_of_range if the stack is empty.
     */
    T peek() const {
        if (elements.empty()) {
            throw std::out_of_range("Stack<>::peek(): empty stack");
        }
        return elements.back();
    }

private:
    std::vector<T> elements; /**< Internal storage of stack elements. */
};
