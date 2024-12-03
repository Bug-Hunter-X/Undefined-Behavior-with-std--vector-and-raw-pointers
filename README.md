# C++ Undefined Behavior with std::vector and raw pointers

This repository demonstrates a common, yet subtle, undefined behavior issue in C++ when using raw pointers to access elements within a `std::vector`.  Modifying the vector's contents through a raw pointer obtained via `vec.data()` can lead to unexpected crashes or incorrect behavior.  The provided example showcases the issue and its solution.

## Bug Description:

The core issue lies in manipulating the elements of a `std::vector` using a raw pointer acquired via `.data()`. While this approach might seem efficient, it bypasses the vector's internal memory management.  Modifying vector contents this way can easily invalidate iterators, resulting in undefined behavior.