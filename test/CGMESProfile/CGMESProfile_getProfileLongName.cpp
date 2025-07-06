#include <boost/test/unit_test.hpp>

#include "CGMESProfile.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileLongName)
{
  // Check getProfileLongName
  auto EQ = "Equipment";
  auto TP = "Topology";
  if (CimVersion == "cgmes_v3_0_0")
  {
    EQ = "CoreEquipment";
  }
  BOOST_REQUIRE_EQUAL(EQ, getProfileLongName(CGMESProfile::EQ));
  BOOST_REQUIRE_EQUAL(TP, getProfileLongName(CGMESProfile::TP));
}
