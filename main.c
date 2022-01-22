#include <stdio.h>
#include <stdlib.h>

FILE *rxbs_cfg = NULL;

int main(int argc, char *argv[]) {
  if (argc <= 1) {
    printf("Requires at least one argument\n");
    return EXIT_FAILURE;
  }
  if (argv[1] == "build") {
    rxbs_cfg = fopen("rxbs_cfg", "r+");
    if (rxbs_cfg == NULL) {
      printf("Not a rxbs project");
      return EXIT_FAILURE;
    }
    printf("Compiling project...");
    return EXIT_SUCCESS;
  }
  printf("Bad command %s\n", argv[1]);
  return EXIT_FAILURE;
}
