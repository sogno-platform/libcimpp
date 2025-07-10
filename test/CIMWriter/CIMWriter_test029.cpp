#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test029)
{
  // Check parsing one object with overriding attributes (maybe not CGMES conform)
  CIMModel model;
  model.setDependencyCheckOff();
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test029.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(3, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_VL0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PT", model.Objects[2]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(9, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='_VL0'>", lines[0]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[1]);
  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='_VL'>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[3]);
  BOOST_REQUIRE_EQUAL("  <cim:PowerTransformer rdf:ID='_PT'>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>PT</cim:IdentifiedObject.name>", lines[5]);
  BOOST_REQUIRE_EQUAL("    <cim:Equipment.EquipmentContainer rdf:resource='#_VL' />", lines[6]);
  BOOST_REQUIRE_EQUAL("  </cim:PowerTransformer>", lines[7]);
}
