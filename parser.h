#ifndef PARSER_H
#define PARSER_H

#include <string>
#include "node.h"
#include "token.h"

using namespace std;

node *parser();
node program();
node block();
node vars();
node expr();
node N();
node A();
node M();
node R();
node stats();
node mStat();
node stat();
node in();
node out();
node ifN();
node loop();
node assign();
node RO();
node label();
node gotoN();


#endif
