#include<stdio.h>


#include <string.h>

// Define maximum number of users

#define MAX_USER$ 100

// Structure to store user information

typedef struct {

char username[20]; char password/20]:

int isLoggedin:

User:

User users MAX_USERS);

int numUse78= 0;

// Function to add a new user

void adduser(char username[]. char password()){ if (num Users < MAX_USERS) {

strcpy(users/numUsers) username. username);

strcpy(users/numusers).password. password):

users numusers) is Loggedin = 0; // Set is Logged in to O by default

numUsers++; } printf("Maximum number of users reached.\n"); }

else {

}

// Function to authenticate user

int authenticate(char username), char

password() {

for (int i=0;i<num Users: i++){

if (stromp(users[i].username.

username) 0 &&

strcmp(users[i].password, password)==0){

}

users/ilisLoggedin = 1:

return 1;// Authentication successful

return 0; // Authentication failed

void logout(char username{}) {

for (int i=0;i<num Asers: i++) { if ( username, username) == 0) {

strcmp(userslil waersilis Loggedin = 0

printf("Logged out successfully.\n");

return:

} printf("liser not found.\n"):

// Main function for testing int main() {

ndaliser("user", "password")

adaliser("user2", "assword2")

// Jest login

if (authenticate("user1", "password")) {

printf("login successful.\n"):

}else{

} print "Login failed.\n")

Jest logout

logoul("user");
return 0;
}
#include<stdio.h>


#include <string.h>

// Define maximum number of users

#define MAX_USER$ 100

// Structure to store user information

typedef struct {

char username[20]; char password/20]:

int isLoggedin:

User:

User users MAX_USERS);

int numUse78= 0;

// Function to add a new user

void adduser(char username[]. char password()){ if (num Users < MAX_USERS) {

strcpy(users/numUsers) username. username);

strcpy(users/numusers).password. password):

users numusers) is Loggedin = 0; // Set is Logged in to O by default

numUsers++; } printf("Maximum number of users reached.\n"); }

else {

}

// Function to authenticate user

int authenticate(char username), char

password() {

for (int i=0;i<num Users: i++){

if (stromp(users[i].username.

username) 0 &&

strcmp(users[i].password, password)==0){

}

users/ilisLoggedin = 1:

return 1;// Authentication successful

return 0; // Authentication failed

void logout(char username{}) {

for (int i=0;i<num Asers: i++) { if ( username, username) == 0) {

strcmp(userslil waersilis Loggedin = 0

printf("Logged out successfully.\n");

return:

} printf("liser not found.\n"):

// Main function for testing int main() {

ndaliser("user", "password")

adaliser("user2", "assword2")

// Jest login

if (authenticate("user1", "password")) {

printf("login successful.\n"):

}else{

} print "Login failed.\n")

Jest logout

logoul("user");
return 0;
}
#include <stdio.h>

#include <string.h>

for (int i = 0; i <

numUsers: i++) {

// Structure to store user information

if

(strcmp(users[i].username, username) == 0) {

typedef struct { char username[20]; char password[20]; } User:

strcpy(users[i].password, newPassword);

User users 100];

printf("Password changed successfully.\n"); return; }

}

int numUsers = 0:

printf("User not found.\n"); }

// Function to change password

void change Password(char

username),char

int main() {

// Assume users are

already loaded

strcpy(users[0].username, "user1");

strcpy(users[0].password, "password 1");
numUsers = 1;

// Jest change password changePassword("user1", return 0;

"newpassword");

}
