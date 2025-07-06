#include <boost/test/unit_test.hpp>

#include "CIMWriter.hpp"
#include "CGMESProfile.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_getAttributeProfile)
{
  // Check getAttributeProfile
  BaseClass* cimObj = new CIMPP::BaseVoltage;
  auto profile = CGMESProfile::EQ;
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.nominalVoltage", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.VoltageLevel", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.TopologicalNode", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));
  profile = CGMESProfile::TP;
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.nominalVoltage", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.VoltageLevel", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "BaseVoltage.TopologicalNode", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));

  cimObj = new CIMPP::VoltageLevel;
  profile = CGMESProfile::EQ;
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "VoltageLevel.BaseVoltage", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));

  cimObj = new CIMPP::TopologicalNode;
  profile = CGMESProfile::TP;
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "TopologicalNode.BaseVoltage", profile));
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getAttributeProfile(cimObj, "TopologicalNode.TopologicalIsland", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));
  profile = CGMESProfile::SV;
  BOOST_REQUIRE(CGMESProfile::TP == CIMWriter::getAttributeProfile(cimObj, "TopologicalNode.BaseVoltage", profile));
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getAttributeProfile(cimObj, "TopologicalNode.TopologicalIsland", profile));
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));

  cimObj = new CIMPP::TopologicalIsland;
  profile = CGMESProfile::SV;
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getAttributeProfile(cimObj, "TopologicalIsland.TopologicalNodes", profile));
  BOOST_REQUIRE(CGMESProfile::SV == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.name", profile));
  BOOST_REQUIRE(CGMESProfile::EQ == CIMWriter::getAttributeProfile(cimObj, "IdentifiedObject.description", profile));

  BOOST_REQUIRE(UnknownProfile == CIMWriter::getAttributeProfile(cimObj, "dummy", profile));
}
