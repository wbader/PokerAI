/* cardTest.cpp
   Waylon Bader

   This is my foray into unit testing using doctest.h.
   This file is to test the card class
*/

#include "doctest.h"
#include "card.h"

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

TEST_CASE("The Card class initializion tests")
{
	SUBCASE("Card class uninitialized")
	{
		Card card;
		SUBCASE("unitialized card isn't set")
		{
			CHECK(card.isSet() == false);
		}
		SUBCASE("Setting an unitialized card")
		{
			bool wasSet = card.setCard(0);
			CHECK(wasSet == true);
			CHECK(card.isSet() == true);
		}
	}
	SUBCASE("Card class initialized to 0 = 2d")
	{
		Card card = 0;
		SUBCASE("initialize card should be set")
		{
			CHECK(card.isSet() == true);
		}
		SUBCASE("Can't set an already set card")
		{
			bool wasSet = card.setCard(51); // 51 = As
		}
	}
}