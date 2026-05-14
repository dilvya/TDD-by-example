# Prime Number Generator

A lightweight C++ utility designed for efficient prime number calculations. This project follows **Test-Driven Development (TDD)** principles and uses **Google Test (gTest)** for validation.

---

## 🚀 Features

* **Simple API**: Focused on a single, high-performance functionality.
* **Vector Output**: Returns results in a standard container for easy manipulation.
* **Validated**: Fully unit-tested to handle edge cases like negative limits and small integers.

---

## 📚 API Reference

### `std::vector<int> findUntil(int limit)`

This method calculates all prime numbers up to, but not including, the specified limit.

* **Parameters**: `limit` (int) — The upper bound for the prime search.
* **Returns**: `std::vector<int>` — A list of all prime numbers found.
* **Behavior**:
    * If `limit <= 2`, it returns an **empty vector**.
    * Example: `findUntil(10)` returns `{2, 3, 5, 7}`.

---

## 🛠 Getting Started

### Prerequisites

* **C++17 Compiler** (GCC, Clang, or MSVC)
* **CMake** (version 3.10 or higher)
* **Google Test / Google Mock** (Handled via CMake)

### Building the Project

```bash
# Create a build directory
mkdir build && cd build

# Configure and build
cmake ..
make