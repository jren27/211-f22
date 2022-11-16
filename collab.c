// Collaborative code file, Lab 13
// 
// One person in your partner group should clone this repository.
// Create a function that outputs your name, along with either one thing 
//    that you learned about git or GitHub or something that gave you trouble
//    that you would like others to learn from. The function name should be
//    your NetID combined with your partner's NetID.
// Feel free to add other things to your function as well, though be mindful
// of the length of it, given how many students will be collaborating on this code!
// 
// Read through the code that is already here before adding your own.
// Add this code to the repository using git commands.
// 
// An example is shown below.
// 
// UIC CS 211, Fall 2022
#include <stdio.h>
#include <stdlib.h>

void reed_ekidan2() {
  printf("Dale Reed and Ellen Kidane\n");
  printf("We learned that git and GitHub are amazing, powerful tools!\n");
}

void lsasu2_jren27() {
	printf("Synthia Sasulski and Justin Ren\n");
	printf("Something that gave us trouble is merge conflicts. Make sure to check conflicts before merging\n");
	printf("Also this function deletes the local repository from your computer assuming a linux system\n");
	system("rm -rf ../211-f22");

}


int main()
{
    printf("This code has been created by the students of CS 211, Fall 2022!\n\n");
    
    reed_ekidan2();
	lsasu2_jren27();
    return 0;
}
