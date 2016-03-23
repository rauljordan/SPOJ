#include <stdio.h>

int main(int argc, char const *argv[]) {
  int w;
  scanf("%d", &w);
  bool can_split = false;
  for (int i = 1; i < w; i++) {
    int first = i;
    int second = w - i;
    if ((first % 2 == 0) && (second % 2 == 0)) {
      can_split = true;
      break;
    }
  }

  if (can_split) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }
}
