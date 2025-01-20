#ifndef BAMSortLUGIN_H
#define BAMSortPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class BAMSortPlugin : public Plugin
{
public: 
 std::string toString() {return "BAMSort";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
