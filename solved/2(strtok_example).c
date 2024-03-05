#include <stdio.h>

int main() {
  char prev, next;
  scanf("%c", &prev);
  if (prev >= 'a' && prev <= 'z') {
    printf("%c", prev - ('a' - 'A'));
  }
  do {
    scanf("%c", &next);
    if (next == '\n') {
      break;
    }
    if (prev == ' ') {
      if (next >= 'a' && next <= 'z') {
        next -= 'a' - 'A';
      }
    }
    printf("%c", next);
    prev = next;
  } while (1);

  return 0;
}