#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test033)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object has to be changed to PowerTransformer (rdf:about)
  // Equipment has class attribute, but the linked object is defined later
  // after changing to PowerTransformer
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test033.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_PT", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL", model.Objects[1]->getRdfid());

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

  BOOST_REQUIRE_EQUAL("  <cim:PowerTransformer rdf:ID='_PT'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>PT</cim:IdentifiedObject.name>", lines[1]);
  BOOST_REQUIRE_EQUAL("    <cim:Equipment.EquipmentContainer rdf:resource='#_VL' />", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:PowerTransformer>", lines[3]);
  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='_VL'>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL</cim:IdentifiedObject.name>", lines[5]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[6]);
}
