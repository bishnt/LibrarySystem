#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "user.h"

user savedUser, newUser;

login(char *username, char *password, char*role){
  FILE *fp;
  int check = 0;
  fp = fopen("users.txt", "r");

  if (fp == NULL)
  {
    printf("error opening the file");
    return 0;
  }

  while(fscanf(fp, "%s %s %s", savedUser.username , savedUser.password , savedUser.role) != EOF()){
    if(strcmp(savedUser.password, password) == 0 && strcmp(savedUser.username, username) == 0 && strcmp(savedUser.role, role) == 0){
      check ++;
      break;
    }
  }
  fclose(fp);
  return check;
}

registerUser(){
  FILE *fp;
  fp = fopen("users.txt", "w");
  if(file == NULL){
  printf("error opening the file");
  return 0;
  }
  printf("\n\nEnter Username: \t");
  scanf("%s ", newUser.username);
  printf("\n\nEnter password: \t");
  scanf("%s ", newUser.password);
  printf("\n\nEnter the Role: \t")
  scanf("%s ", newUser.role);

  fprintf(fp, "%s, %s, %s", newUser.username);

  fclose(fp);

  return 1;
}

isUsernameTaken(char *username){
  FILE fp;
  int check = 0;
  fp = fopen("users.txt", "r");
  while(fscanf(fp, "%s %s %s", savedUser.username , savedUser.password , savedUser.role) != EOF()){
    if(strcmp( strcmp(savedUser.username, username) == 0){
      check ++;
      break;
    }
    return check; 
}

isLibrarian(char *role){
FILE fp;
int check = 0;
fp = fopen("users.txt", "r");
while(fscanf(fp, "%s %s %s", savedUser.username , savedUser.password , savedUser.role) != EOF()){
  if(strcmp( strcmp(savedUser.role, role) == 0){
    check ++;
    break;
  }
  return check; 
}
