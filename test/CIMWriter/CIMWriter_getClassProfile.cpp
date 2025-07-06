#include <boost/test/unit_test.hpp>

#include "CIMWriter.hpp"
#include "CGMESProfile.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_getClassProfile)
{
  // Check getClassProfile
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getClassProfile(new CIMPP::BaseVoltage));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getClassProfile(new CIMPP::VoltageLevel));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getClassProfile(new CIMPP::TopologicalNode));
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getClassProfile(new CIMPP::TopologicalIsland));
}
