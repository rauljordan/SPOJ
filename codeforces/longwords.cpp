#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  cin >> N;
  vector<string> words;
  for (int i = 0; i < N; i++) {
    string word;
    cin >> word;
    words.push_back(word);
  }

  vector<string>::iterator it;
  for(it = words.begin(); it != words.end(); ++it) {
    string word = *it;
    if (word.size() > 10) {
      cout << word.front() << word.size() - 2 << word.back() << endl;
    }
    else {
      cout << word << endl;
    }
  }
}
