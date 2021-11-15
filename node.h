#ifndef NODE_H
#define NODE_H

#include <string>
#include <set>
#include <vector>
#include "token.h"

using namespace std;

struct node {
   string name;
   int length;
   int level;
   
   vector<Token> tokens;
};

#endif
