#include <boost/test/unit_test.hpp>

#include "CGMESProfile.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileFromLongName)
{
  // Check getProfileFromLongName
  auto EQ = "Equipment";
  auto TP = "Topology";
  if (CimVersion == "cgmes_v3_0_0")
  {
    EQ = "CoreEquipment";
  }
  BOOST_REQUIRE(CGMESProfile::EQ == getProfileFromLongName(EQ));
  BOOST_REQUIRE(CGMESProfile::TP == getProfileFromLongName(TP));
  BOOST_REQUIRE(UnknownProfile == getProfileFromLongName("dummy"));
}
