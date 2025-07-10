#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test006)
{
  // Check enum attribute with custom namespace
  if (CimVersion == "cgmes_v2_4_13" || CimVersion == "cgmes_v2_4_15")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test006_CGMES2.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(1, model.Objects.size());

    BOOST_REQUIRE_EQUAL("OLT", model.Objects[0]->getRdfid());

    std::stringstream rdf;
    CIMWriter::writeCim(rdf, model.Objects);
    CIMWriter::writeFile("test.xml", model.Objects);

    std::vector<std::string> lines;
    std::string line;
    for (int idx = 0; idx < 2; ++idx) // Skip header
    {
      std::getline(rdf, line);
    }
    while (std::getline(rdf, line))
    {
      lines.push_back(line);
    }
    BOOST_REQUIRE_EQUAL(5, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:OperationalLimitType rdf:ID='OLT'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>High Voltage</cim:IdentifiedObject.name>", lines[1]);
    BOOST_REQUIRE_EQUAL("    <entsoe:OperationalLimitType.limitType rdf:resource='" + NamespaceMap.at("entsoe") +
                          "LimitTypeKind.highVoltage' />",
                        lines[2]);
    BOOST_REQUIRE_EQUAL("  </cim:OperationalLimitType>", lines[3]);
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test006_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(1, model.Objects.size());

    BOOST_REQUIRE_EQUAL("OLT", model.Objects[0]->getRdfid());

    std::stringstream rdf;
    CIMWriter::writeCim(rdf, model.Objects);
    CIMWriter::writeFile("test.xml", model.Objects);

    std::vector<std::string> lines;
    std::string line;
    for (int idx = 0; idx < 2; ++idx) // Skip header
    {
      std::getline(rdf, line);
    }
    while (std::getline(rdf, line))
    {
      lines.push_back(line);
    }
    BOOST_REQUIRE_EQUAL(5, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:OperationalLimitType rdf:ID='OLT'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>High Voltage</cim:IdentifiedObject.name>", lines[1]);
    BOOST_REQUIRE_EQUAL("    <eu:OperationalLimitType.kind rdf:resource='" + NamespaceMap.at("eu") +
                          "LimitKind.highVoltage' />",
                        lines[2]);
    BOOST_REQUIRE_EQUAL("  </cim:OperationalLimitType>", lines[3]);
  }
}
