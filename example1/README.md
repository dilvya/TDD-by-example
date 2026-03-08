# Example 1

Develop a FILO stack with TDD

## Requirement 

The goal is to build a robust Stack data structure following strict LIFO (Last-In, First-Out) logic.

### 1. Core Functionality
| Feature | Method | Description |
| :--- | :--- | :--- |
| **Push** | `push(item)` | Adds an element to the top of the stack. |
| **Pop** | `pop()` | Removes and returns the top element. |
| **Peek** | `peek()` | Returns the top element without removing it. |
| **Size** | `getSize()` | Returns the total count of elements. |
| **Empty Check** | `isEmpty()` | Returns `true` if the stack contains no elements. |

### 2. Constraints & Edge Cases

* **Underflow:** Calling `pop()` or `peek()` on an empty stack must raise a specific error (e.g., `UnderflowException`).

---

## Build 
``` 
    cmake -S . -B build
    cmake --build build
```

## Run

```
    ctest --test-dir build
```