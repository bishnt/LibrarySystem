//all functions for user and authentication
#ifndef USER_H
#define USER_H

typedef user{
  char username[50];
  char password[50];
  char role[20];
};

int login(char *username, char *password, char *role);
int registerUser();
int isUsernameTaken(char *username);
int isLibrarian(char *role);

#endif
