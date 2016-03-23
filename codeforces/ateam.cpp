#include <vector>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d", &N);
  vector< vector<int> > numbers;
  for (int i = 0; i < N; i++) {
    int p, v, t;
    scanf("%d %d %d", &p, &v, &t);
    vector<int> decisions;
    decisions.push_back(p);
    decisions.push_back(v);
    decisions.push_back(t);
    numbers.push_back(decisions);
  }

  int programs = 0;
  vector< vector<int> >::iterator it;
  for(it = numbers.begin(); it != numbers.end(); ++it) {
    vector<int> decisions = *it;
    vector<int>::iterator inner;

    int sure_decisions = 0;
    for(inner = decisions.begin(); inner != decisions.end(); ++inner) {
      if (*inner == 1) {
        sure_decisions++;
      }
    }
    if (sure_decisions >= 2) {
      programs++;
    }
  }
  printf("%d\n", programs);
}
