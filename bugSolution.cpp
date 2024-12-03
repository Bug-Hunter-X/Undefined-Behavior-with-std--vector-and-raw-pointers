std::vector<int> vec = {1, 2, 3};
for (int& x : vec) {
  x *= 2; // Modifying vector elements safely 
}
//Or
vec[0] = 10; //Modifying vector elements safely through operator[] 