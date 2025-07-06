#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test019)
{
  // Check reading links between SvVoltage and TopologicalNode
  // if they are set on both sides (not CGMES conform)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test019.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("SvVoltage.N0", model.Objects[1]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(8, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:TopologicalNode rdf:ID='N0'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalNode>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:SvVoltage rdf:ID='SvVoltage.N0'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:SvVoltage.v>110.5</cim:SvVoltage.v>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:SvVoltage.TopologicalNode rdf:resource='#N0' />", lines[5]);
  BOOST_REQUIRE_EQUAL("  </cim:SvVoltage>", lines[6]);
}
