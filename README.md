# OSTEP-Projects
A collection of projects built from the ostep-projects repo, for practice in an operating systems class. Projects are built in C.

### Project 1: Unix Utilities ###
A build of several command-line tools: cat, zip/unzip and grep.

wcat - a program to implement the function of the cat command
     - reads a file and prints the contents to the console

     usage: > ./wcat example.c
     
            #include <stdio.h>

            int main(){
                // contents of example.c are here
            }

wget - a progra to implement grep (with limited functionality)
     - takes a search string and an input file, prints all lines containing an occurrence of the search string
     - if no input file is specified, accepts input from stdin

     usage: > ./wgrep foo input.txt

            This is a line from input.txt that has foo in it!
            This line has foo as well

