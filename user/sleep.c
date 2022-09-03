#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int 
main(int argc, char *argv[])
{
  //if(argc != 1){
  if(argc - 1 != 1){
    printf("Error: sleep takes invalid parameter\n");
    exit(1);
  }

  int sleep_time = atoi(argv[1]);
  printf("(nothing happens for a little while)\n");
  sleep(sleep_time);
  exit(0);
}

