#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAMSortPlugin.h"

void BAMSortPlugin::input(std::string file) {
 inputfile = file;
}

void BAMSortPlugin::run() {
   
}

void BAMSortPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   //std::string command = "samtools sort " + inputfile + " > "+file;
	std::string command = "samtools sort " + inputfile + " -o " + file;
	std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<BAMSortPlugin> BAMSortPluginProxy = PluginProxy<BAMSortPlugin>("BAMSort", PluginManager::getInstance());
