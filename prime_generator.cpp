#include <stdio.h>
#include <vector>
#include <algorithm>
#include <iostream>

int main(int argc, char const *argv[]) {
  int low;
  int high;
  scanf("%d %d", &low, &high);
  std::vector<std::pair<int, bool>> numbers;
  if (low == 1)
    low = 2;

  for (int n = low; n < high + 1; n++) {
    numbers.push_back(std::make_pair(n, false));
  }
  numbers[0].second = true;

  // Sieve of Erathosthenes
  int p = low;
  std::vector<std::pair<int, bool>>::iterator it;
  for(it = numbers.begin(); it != numbers.end(); it++) {
    // now loop over it->first*p and mark each in the numbers vector
    for (int i = p*it->first; i < high + 1; i++) {
      // Mark off to true
      std::vector<std::pair<int, bool>>::iterator itr;
      itr = std::find(numbers.begin(), numbers.end(), i);
      auto pos = itr - numbers.begin();
      numbers[pos].second = true;
    }
  }

  // Now show primes
  std::vector<std::pair<int, bool>>::iterator it2;
  for (it2 = numbers.begin(); it2 != numbers.end(); it2++) {
    if (it2->second) {
      std::cout << it2->first << std::endl;
    }
  }

}
