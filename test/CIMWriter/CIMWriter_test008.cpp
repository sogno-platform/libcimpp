#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_SUITE(CIMWriter_test008)

BOOST_AUTO_TEST_CASE(EQ_TP)
{
  // Check reading models from more than one file
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("Terminal.N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("N0", model.Objects[1]->getRdfid());

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

  BOOST_REQUIRE_EQUAL("  <cim:Terminal rdf:ID='Terminal.N0'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>Terminal.N0</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("    <cim:Terminal.TopologicalNode rdf:resource='#N0' />", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:Terminal>", lines[3]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalNode rdf:ID='N0'>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[5]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalNode>", lines[6]);
}

BOOST_AUTO_TEST_CASE(TP_EQ)
{
  // Check reading models from more than one file in reverse order
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("Terminal.N0", model.Objects[1]->getRdfid());

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
  BOOST_REQUIRE_EQUAL("  <cim:Terminal rdf:ID='Terminal.N0'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>Terminal.N0</cim:IdentifiedObject.name>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:Terminal.TopologicalNode rdf:resource='#N0' />", lines[5]);
  BOOST_REQUIRE_EQUAL("  </cim:Terminal>", lines[6]);
}

BOOST_AUTO_TEST_SUITE_END()
