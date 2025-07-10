#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test021)
{
  // Check handling links to not existing objects (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test021.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("VoltageLevel.98", model.Objects[0]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(4, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='VoltageLevel.98'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>98</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[2]);
}
