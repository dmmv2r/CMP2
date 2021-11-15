//Name: Dnovan McDonough
//Date: 11/10/2021

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

#include "token.h"
#include "scanner.h"
#include "parser.h"
#include "node.h"

using namespace std;

int main(int argc, char* argv[]) {
   cout << "Hello" << endl;

   string fileName = argv[1];
   string fileExt = ".FL21"; //for appending if file doesn't already have it

   if(argc > 2) {
      cout << "Too many arguments given" << endl;
      cout << "Ending" << endl;
      return -1;
   } 
   else if(argc == 1) {
      cout << "1 ARGUMENT" << endl;
   }
   else if(argc == 2) {
      cout << "Input file given" << endl;

      size_t index = fileName.find(".FL21"); //searcher for proper extension

      if(index == string::npos) { //extension not found
         fileName += fileExt;
      }

      ifstream file(fileName.c_str());
      
      if(file) {
         node* root = parser();
      }  
   }

   return 0;
}
