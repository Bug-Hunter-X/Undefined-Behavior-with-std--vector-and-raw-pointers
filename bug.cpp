std::vector<int> vec = {1, 2, 3};
int* ptr = vec.data();
ptr[0] = 10;
//This code compiles without error but it leads to undefined behavior, because modifying the elements of the vector through a raw pointer obtained from vec.data() invalidates iterators and references to the elements, which may cause unexpected crashes or incorrect results