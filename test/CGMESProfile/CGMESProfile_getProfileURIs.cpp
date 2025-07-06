#include <boost/test/unit_test.hpp>

#include <string>
#include <vector>

#include "CGMESProfile.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileURIs)
{
  // Check getProfileURIs
  if (CimVersion == "cgmes_v2_4_13" || CimVersion == "cgmes_v2_4_15")
  {
    auto uris = getProfileURIs(CGMESProfile::EQ);
    BOOST_REQUIRE_EQUAL(3, uris.size());

    auto list = std::vector<std::string>(uris.begin(), uris.end());
    BOOST_REQUIRE_EQUAL(3, list.size());
    BOOST_REQUIRE_EQUAL("http://entsoe.eu/CIM/EquipmentCore/3/1", list[0]);
    BOOST_REQUIRE_EQUAL("http://entsoe.eu/CIM/EquipmentOperation/3/1", list[1]);
    BOOST_REQUIRE_EQUAL("http://entsoe.eu/CIM/EquipmentShortCircuit/3/1", list[2]);

    uris = getProfileURIs(CGMESProfile::TP);
    BOOST_REQUIRE_EQUAL(1, uris.size());
    BOOST_REQUIRE_EQUAL("http://entsoe.eu/CIM/Topology/4/1", uris.front());
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    auto uris = getProfileURIs(CGMESProfile::EQ);
    BOOST_REQUIRE_EQUAL(1, uris.size());
    BOOST_REQUIRE_EQUAL("http://iec.ch/TC57/ns/CIM/CoreEquipment-EU/3.0", uris.front());

    uris = getProfileURIs(CGMESProfile::TP);
    BOOST_REQUIRE_EQUAL(1, uris.size());
    BOOST_REQUIRE_EQUAL("http://iec.ch/TC57/ns/CIM/Topology-EU/3.0", uris.front());
  }
}
