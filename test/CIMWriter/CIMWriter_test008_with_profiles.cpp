#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_SUITE(CIMWriter_test008_with_profiles)

BOOST_AUTO_TEST_CASE(TP)
{
  // Check reading models from more than one file and writing for Topology profile
  static std::string TP_PROFILE = getProfileURIs(CGMESProfile::TP).front();
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  model.parseFiles();

  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::TP, "model", classProfileMap);
  BOOST_REQUIRE(success);
  CIMWriter::writeFile("test.xml", model.Objects, CGMESProfile::TP, "model", classProfileMap);

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
  BOOST_REQUIRE_EQUAL(10, lines.size());

  BOOST_REQUIRE_EQUAL("  <md:FullModel rdf:about='#model'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <md:Model.profile>" + TP_PROFILE + "</md:Model.profile>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </md:FullModel>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalNode rdf:ID='N0'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalNode>", lines[5]);
  BOOST_REQUIRE_EQUAL("  <cim:Terminal rdf:about='#Terminal.N0'>", lines[6]);
  BOOST_REQUIRE_EQUAL("    <cim:Terminal.TopologicalNode rdf:resource='#N0' />", lines[7]);
  BOOST_REQUIRE_EQUAL("  </cim:Terminal>", lines[8]);
}

BOOST_AUTO_TEST_CASE(EQ)
{
  // Check reading models from more than one file and writing for EQ profile
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  model.parseFiles();

  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::EQ, "model", classProfileMap);
  BOOST_REQUIRE(success);
  CIMWriter::writeFile("test.xml", model.Objects, CGMESProfile::EQ, "model", classProfileMap);

  std::vector<std::string> lines;
  std::string line;
  for (int idx = 0; idx < 4 + getProfileURIs(CGMESProfile::EQ).size(); ++idx) // Skip header
  {
    std::getline(rdf, line);
  }
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(4, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:Terminal rdf:ID='Terminal.N0'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>Terminal.N0</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:Terminal>", lines[2]);
}

BOOST_AUTO_TEST_CASE(TPall)
{
  // Check reading models from more than one file and writing for Topology profile
  // forcing Terminal object to be written completely into Topology profile
  static std::string TP_PROFILE = getProfileURIs(CGMESProfile::TP).front();
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  model.parseFiles();

  // Set class profile of class Terminal also to TP.
  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  BOOST_REQUIRE(CGMESProfile::TP == classProfileMap.at("TopologicalNode"));
  BOOST_REQUIRE(CGMESProfile::EQ == classProfileMap.at("Terminal"));
  classProfileMap["Terminal"] = CGMESProfile::TP;
  BOOST_REQUIRE(CGMESProfile::TP == classProfileMap.at("Terminal"));

  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::TP, "model", classProfileMap);
  BOOST_REQUIRE(success);
  CIMWriter::writeFile("test.xml", model.Objects, CGMESProfile::TP, "model", classProfileMap);

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
  BOOST_REQUIRE_EQUAL(11, lines.size());

  BOOST_REQUIRE_EQUAL("  <md:FullModel rdf:about='#model'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <md:Model.profile>" + TP_PROFILE + "</md:Model.profile>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </md:FullModel>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalNode rdf:ID='N0'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalNode>", lines[5]);
  BOOST_REQUIRE_EQUAL("  <cim:Terminal rdf:ID='Terminal.N0'>", lines[6]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>Terminal.N0</cim:IdentifiedObject.name>", lines[7]);
  BOOST_REQUIRE_EQUAL("    <cim:Terminal.TopologicalNode rdf:resource='#N0' />", lines[8]);
  BOOST_REQUIRE_EQUAL("  </cim:Terminal>", lines[9]);
}

BOOST_AUTO_TEST_SUITE_END()
