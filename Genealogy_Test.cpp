#include "stdafx.h"
#include "Gedcom.h"

#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>

BOOST_AUTO_TEST_CASE(US01_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US01 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US01(), true);
}

BOOST_AUTO_TEST_CASE(US02_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US02 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US02(), true);
}

BOOST_AUTO_TEST_CASE(US03_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US03 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US03(), true);
}

BOOST_AUTO_TEST_CASE(US04_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US04 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US04(), true);
}

BOOST_AUTO_TEST_CASE(US05_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US05 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US05(), true);
}

BOOST_AUTO_TEST_CASE(US06_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US06 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US06(), true);
}

BOOST_AUTO_TEST_CASE(US07_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US07 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US07(), true);
}

BOOST_AUTO_TEST_CASE(US08_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US08 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US08(), true);
}

BOOST_AUTO_TEST_CASE(US09_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US09 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US09(), true);
}

BOOST_AUTO_TEST_CASE(US10_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US10 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US10(), true);
}

BOOST_AUTO_TEST_CASE(US11_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US11 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US11(), true);
}

BOOST_AUTO_TEST_CASE(US12_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US12 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US12(), true);
}

BOOST_AUTO_TEST_CASE(US013_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US13 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US13(), true);
}

BOOST_AUTO_TEST_CASE(US14_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US14 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US14(), true);
}

BOOST_AUTO_TEST_CASE(US15_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US15 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US15(), true);
}

BOOST_AUTO_TEST_CASE(US16_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US16 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US16(), true);
}

BOOST_AUTO_TEST_CASE(US17_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US17 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US17(), true);
}

BOOST_AUTO_TEST_CASE(US18_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US18 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US18(), true);
}

BOOST_AUTO_TEST_CASE(US19_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US19 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US19(), true);
}

BOOST_AUTO_TEST_CASE(US20_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US20 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US20(), true);
}

BOOST_AUTO_TEST_CASE(US21_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US21 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US21(), true);
}

BOOST_AUTO_TEST_CASE(US22_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US22 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US22(), true);
}

BOOST_AUTO_TEST_CASE(US23_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US23 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US23(), true);
}

BOOST_AUTO_TEST_CASE(US24_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US24 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US24(), true);
}

BOOST_AUTO_TEST_CASE(US26_TC01)
{
	Gedcom::gedcom gedcomInstance("testFileError.ged");

	BOOST_TEST_MESSAGE("\nTesting US26 ...\n");
	BOOST_CHECK_EQUAL(gedcomInstance.US26(), true);
}

// EOF