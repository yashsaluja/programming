#include<stdio.h>

struct Student {
  int roll;
  char name[12];
  int percent;
} s1 = { 10, "SMJC", 80 };

int main() {
  FILE *fp;
  struct Student s2;

  //Write details of s1 to file
  fp = fopen("ip.txt", "w");
  fwrite(&s1, sizeof(s1), 1, fp);
  fclose(fp);

  fp = fopen("ip.txt", "r");
  fread(&s2, sizeof(s2), 1, fp);
  fclose(fp);

  printf("\nRoll : %d", s2.roll);
  printf("\nName : %s", s2.name);
  printf("\nPercent : %d", s2.percent);

  return (0);
}