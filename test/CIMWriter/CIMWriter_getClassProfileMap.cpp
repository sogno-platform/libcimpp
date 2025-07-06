#include <boost/test/unit_test.hpp>

#include <vector>

#include "CIMWriter.hpp"
#include "CGMESProfile.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_getClassProfileMap)
{
  // Check getClassProfileMap
  std::vector<BaseClass*> cimList = { new CIMPP::BaseVoltage, new CIMPP::TopologicalNode, new CIMPP::BaseVoltage };
  auto profileMap = CIMWriter::getClassProfileMap(cimList);
  BOOST_REQUIRE_EQUAL(2, profileMap.size());

  BOOST_REQUIRE(profileMap.find("BaseVoltage") != profileMap.end());
  BOOST_REQUIRE(profileMap.find("TopologicalNode") != profileMap.end());

  BOOST_REQUIRE(CGMESProfile::EQ == profileMap.at("BaseVoltage"));
  BOOST_REQUIRE(CGMESProfile::TP == profileMap.at("TopologicalNode"));
}
