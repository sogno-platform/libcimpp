#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMWriter.hpp"
#include "CGMESProfile.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_isClassMatchingProfile)
{
  // Check isClassMatchingProfile
  BaseClass* cimObj = new CIMPP::BaseVoltage;
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::EQ));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::TP));

  // Many profiles are matching because of the attributes inherited from
  // IdentifiedObject (e.g. name).
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DY));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::GL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SSH));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SV));

  cimObj = new CIMPP::VoltageLevel;
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::EQ));

  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DY));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::GL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SSH));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SV));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::TP));

  cimObj = new CIMPP::TopologicalNode;
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SV));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::TP));

  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::EQ));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DY));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::GL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SSH));

  cimObj = new CIMPP::TopologicalIsland;
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SV));

  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::EQ));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::DY));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::GL));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SSH));
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::TP));

  cimObj = new CIMPP::SvVoltage;
  BOOST_REQUIRE(CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::SV));
  BOOST_REQUIRE(!CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::EQ));
  BOOST_REQUIRE(!CIMWriter::isClassMatchingProfile(cimObj, CGMESProfile::TP));

  // SvVoltage does not inherit from IdentifiedObject
  for (auto profile : getProfileList())
  {
    std::string profileName = getProfileLongName(profile);
    if (profile == CGMESProfile::SV)
    {
      BOOST_REQUIRE_MESSAGE(CIMWriter::isClassMatchingProfile(cimObj, profile), profileName);
    }
    else
    {
      BOOST_REQUIRE_MESSAGE(!CIMWriter::isClassMatchingProfile(cimObj, profile), profileName);
    }
  }
}
