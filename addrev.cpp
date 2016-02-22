#include <stdio.h>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

template <typename T_STR, typename T_CHAR>
T_STR remove_leading(T_STR const & str, T_CHAR c)
{
    auto end = str.end();

    for (auto i = str.begin(); i != end; ++i) {
      if (*i != c) {
          return T_STR(i, end);
      }
    }
    return T_STR();
}

int main(int argc, char const *argv[]) {
  int N;
  vector<pair<int, int>> numbers;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int first;
    int second;
    scanf("%d %d", &first, &second);
    numbers.push_back(make_pair(first, second));
  }

  vector<pair<int, int>>::iterator it;
  for(it = numbers.begin(); it != numbers.end(); ++it) {
    string first_string = to_string(it->first);
    string second_string = to_string(it->second);
    reverse(first_string.begin(), first_string.end());
    reverse(second_string.begin(), second_string.end());

    int reversed_int_first = stoi(first_string);
    int reversed_int_second = stoi(second_string);

    string sum = to_string(reversed_int_first + reversed_int_second);
    reverse(sum.begin(), sum.end());
    sum = remove_leading(sum, '0');
    cout << sum << endl;
  }

  return 0;
}
