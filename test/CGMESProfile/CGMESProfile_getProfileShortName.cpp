#include <boost/test/unit_test.hpp>

#include "CGMESProfile.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileShortName)
{
  // Check getProfileShortName
  BOOST_REQUIRE_EQUAL("EQ", getProfileShortName(CGMESProfile::EQ));
  BOOST_REQUIRE_EQUAL("TP", getProfileShortName(CGMESProfile::TP));
}
