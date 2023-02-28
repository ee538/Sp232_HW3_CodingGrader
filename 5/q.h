#ifndef DOUBLESTACK_H
#define DOUBLESTACK_H

#include <vector>

class DoubleStack {
 private:
  std::vector<int> evenVec_;  // Vector for even numbers
  std::vector<int> oddVec_;   // Vector for odd numbers

 public:
  // Constructor
  DoubleStack();

  // Pushes the number in evenVec_ if the input is even
  // Pushes the number in oddVec_ if the input is odd
  void push(int num);

  // Removes the maximum number from the top of both vectors.
  void pop();

  // Returns the maximum number from the top of both vectors.
  int top();

  // Returns the size of evenVec_ plus the size of oddVec_
  int size();

  // Returns true if both vectors are empty, false otherwise
  bool empty();
};

#endif  // DOUBLESTACK_H
