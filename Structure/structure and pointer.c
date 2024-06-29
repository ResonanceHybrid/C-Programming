#include <stdio.h>
#include <stdlib.h>

typedef struct Time {
  int hr;
  int min;
  int sec;
} time;

int read(time r) {
  printf("Enter hr:min:sec = ");
  scanf("%d:%d:%d", &r.hr, &r.min, &r.sec);
  return 0;
}

int sub(time *record1, time *record2, time *total) {
  total->hr = record1->hr - record2->hr;
  total->min = record1->min - record2->min;
  total->sec = record1->sec - record2->sec;
  return 0;
}

int display(time *total) {
  int c = 0;
  if (abs(total->sec) > 60) {
    c = total->sec / 60;
    total->sec += (60 * c);
    total->min -= c;
    if (abs(total->min) > 60) {
      c = total->min / 60;
      total->min += (60 * c);
      total->hr -= c;
    }
  }
  printf("subtraction of time:\n%d:%d:%d", total->hr, total->min, total->sec);
  return 0;
}

int main() {
  time record[2], total;
  printf("Enter first recorded time: ");
  read(record[0]);
  printf("Enter second recorded time: ");
  read(record[1]);

  sub(&record[0], &record[1], &total);

  display(&total);
}
