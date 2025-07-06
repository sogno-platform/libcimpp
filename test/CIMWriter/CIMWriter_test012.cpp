#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test012){
  // Check MonthDay as primitive string attribute
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test012.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_Season", model.Objects[0]->getRdfid());

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

  BOOST_REQUIRE_EQUAL("  <cim:Season rdf:ID='_Season'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:Season.endDate>--10-31</cim:Season.endDate>", lines[1]);
  BOOST_REQUIRE_EQUAL("    <cim:Season.startDate>--10-13</cim:Season.startDate>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:Season>", lines[3]);
}
