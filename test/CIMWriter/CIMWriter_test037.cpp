#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test037)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object has to be changed to PowerTransformer
  // and is linked as ConductingEquipment (which is not allowed for Equipment)
  // before changing to PowerTransformer (typically the entries are defined
  // in more than one file, so the order of reading is not clearly defined)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test037.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_PT", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_Status", model.Objects[1]->getRdfid());

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
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.description>PowerTransformer</cim:IdentifiedObject.description>",
      lines[1]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>PT</cim:IdentifiedObject.name>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:PowerTransformer>", lines[3]);
  BOOST_REQUIRE_EQUAL("  <cim:SvStatus rdf:ID='_Status'>", lines[4]);
  BOOST_REQUIRE_EQUAL("    <cim:SvStatus.ConductingEquipment rdf:resource='#_PT' />", lines[5]);
  BOOST_REQUIRE_EQUAL("  </cim:SvStatus>", lines[6]);
}
