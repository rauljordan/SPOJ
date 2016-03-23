#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {

  string line1;
  int N, K;
  while(getline(cin, line1)) {
    stringstream line_stream(line1);
    line_stream >> N;
    line_stream >> K;
    break;
  }

  string line2;
  vector<int> numbers;
  while(getline(cin, line2)) {
    stringstream line_stream(line2);
    int value;
    while(line_stream >> value) {
        numbers.push_back(value);
    }
    break;
  }

  // Now we do the magic checking
  int passing_score = numbers[K - 1];
  int passing_contestants = 0;
  vector<int>::iterator it;
  for(it = numbers.begin(); it != numbers.end(); ++it) {
    int index = distance(numbers.begin(), it);
    if (index <= K - 1) {
      if (*it >= passing_score && passing_score != 0) {
        passing_contestants++;
      }
    }
    else {
      if (*it >= passing_score && passing_score != 0) {
        passing_contestants++;
      }
    }
  }
  cout << passing_contestants << endl;
}
