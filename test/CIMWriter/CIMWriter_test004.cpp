#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test004)
{
  // Check reading model header and primitive attribute with custom namespace
  static std::string ENTSOE_EU = CimVersion == "cgmes_v3_0_0" ? "eu" : "entsoe";
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test004.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[0]->getRdfid());

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

  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='BaseVoltage.20'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:BaseVoltage.nominalVoltage>20</cim:BaseVoltage.nominalVoltage>", lines[1]);
  BOOST_REQUIRE_EQUAL("    <" + ENTSOE_EU + ":IdentifiedObject.shortName>20</" + ENTSOE_EU
      + ":IdentifiedObject.shortName>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[3]);
}
