#include <boost/test/unit_test.hpp>

#include "CGMESProfile.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileFromShortName)
{
  // Check getProfileFromShortName
  BOOST_REQUIRE(CGMESProfile::EQ == getProfileFromShortName("EQ"));
  BOOST_REQUIRE(CGMESProfile::TP == getProfileFromShortName("TP"));
  BOOST_REQUIRE(UnknownProfile == getProfileFromShortName("dummy"));
}
