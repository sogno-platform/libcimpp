#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test025)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object (rdf:about) has to be changed to PowerTransformer
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test025.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(3, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_VL", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PT", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PTE", model.Objects[2]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(12, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='_VL'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:PowerTransformer rdf:ID='_PT'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.description>PowerTransformer</cim:IdentifiedObject.description>",
      lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>PT</cim:IdentifiedObject.name>", lines[5]);
  BOOST_REQUIRE_EQUAL("    <cim:Equipment.EquipmentContainer rdf:resource='#_VL' />", lines[6]);
  BOOST_REQUIRE_EQUAL("  </cim:PowerTransformer>", lines[7]);
  BOOST_REQUIRE_EQUAL("  <cim:PowerTransformerEnd rdf:ID='_PTE'>", lines[8]);
  BOOST_REQUIRE_EQUAL("    <cim:PowerTransformerEnd.PowerTransformer rdf:resource='#_PT' />", lines[9]);
  BOOST_REQUIRE_EQUAL("  </cim:PowerTransformerEnd>", lines[10]);
}
