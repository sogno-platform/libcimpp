#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CGMESProfile.hpp"
#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_SUITE(CIMWriter_test022)

BOOST_AUTO_TEST_CASE(SV)
{
  // Check models with more than one profile for StateVariables profile
  static std::string SV_PROFILE = getProfileURIs(CGMESProfile::SV).front();
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test022.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N2", model.Objects[1]->getRdfid());

  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::SV, "model", classProfileMap);
  BOOST_REQUIRE(success);
  CIMWriter::writeFile("test_SV.xml", model.Objects, CGMESProfile::SV, "model", classProfileMap);

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
  BOOST_REQUIRE_EQUAL(9, lines.size());

  BOOST_REQUIRE_EQUAL("  <md:FullModel rdf:about='#model'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <md:Model.profile>" + SV_PROFILE + "</md:Model.profile>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </md:FullModel>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalIsland rdf:ID='TopologicalIsland.N'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N</cim:IdentifiedObject.name>", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalIsland>", lines[5]);
  BOOST_REQUIRE_EQUAL("  <cim:TopologicalIsland rdf:ID='TopologicalIsland.N2'>", lines[6]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalIsland>", lines[7]);
}

BOOST_AUTO_TEST_CASE(EQ)
{
  // Check models with more than one profile for Equipment/CoreEquipment profile
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test022.xml"));
  model.parseFiles();

  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::EQ, "model", classProfileMap);
  BOOST_REQUIRE(success);
  CIMWriter::writeFile("test_EQ.xml", model.Objects, CGMESProfile::EQ, "model", classProfileMap);

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

  BOOST_REQUIRE_EQUAL("  <cim:TopologicalIsland rdf:about='#TopologicalIsland.N'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.description>Island N</cim:IdentifiedObject.description>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:TopologicalIsland>", lines[2]);
}

BOOST_AUTO_TEST_CASE(TP)
{
  // Check models with more than one profile for Topology profile
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test022.xml"));
  model.parseFiles();

  auto classProfileMap = CIMWriter::getClassProfileMap(model.Objects);
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, model.Objects, CGMESProfile::TP, "model", classProfileMap);
  BOOST_REQUIRE(!success);
  CIMWriter::writeFile("test_TP.xml", model.Objects, CGMESProfile::TP, "model", classProfileMap);
}

BOOST_AUTO_TEST_SUITE_END()
