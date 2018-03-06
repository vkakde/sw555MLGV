///brief This program parses and processes genealogy files in the GEDCOM format
///authors Matthew Josephs, Louis Rozencwajg-Hays, Gabrielle Mccormack, Vishwajeet Kakde
// Link to github: https://github.com/vkakde/sw555MLGV

// include standard headers
#include <time.h>

// include project header files
#include "Gedcom.h"

int main() {
//	// create gedcom object instance
	Gedcom::gedcom gedcomInstance;
//
	// read gedcom file (file path+name will be prompted for; to be provided by user)
	gedcomInstance.readGedFile();
	
	// print input gedcom data
	// gedcomInstance.printGedcomData();
	
	// parse gedcom data
	gedcomInstance.parseAll();

	//Adds individual objects to family objects
	gedcomInstance.addIndividualsToFamilies();
	
	// print table of reords showing individuals' data
	gedcomInstance.printIndividualTable();
	
	// print table of reords showing families' data
	gedcomInstance.printFamilyTable();

	// testing US08 (birth before marriage of parents)
	bool check01 = gedcomInstance.US01();
	bool check02 = gedcomInstance.US02();
	bool check03 = gedcomInstance.US03();
	bool check04 = gedcomInstance.US04();
	bool check05 = gedcomInstance.US05();
	bool check06 = gedcomInstance.US06();
	bool check07 = gedcomInstance.US07();
	bool check08 = gedcomInstance.US08();
	bool check11 = gedcomInstance.US11();
	bool check13 = gedcomInstance.US13();
	if (!check01 || !check02 || !check03 || !check04 || 
		!check05 || !check06 || !check07 || !check08) {
		std::cout << "Some errors found in input file. Please check error messages for details." << std::endl;
	} else {
		std::cout << "All tests passed." << std::endl;
	}

	system("pause");
	//boost::this_thread::sleep(boost::posix_time::milliseconds(10000));
	return 0;
}