#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test038)
{
  // Check not allowed linked type (causing an error log entry)
  // Equipment object is tried to be linked as ConductingEquipment
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test038.xml"));
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
  BOOST_REQUIRE_EQUAL(6, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:Equipment rdf:ID='_PT'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.description>PowerTransformer</cim:IdentifiedObject.description>",
      lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:Equipment>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:SvStatus rdf:ID='_Status'>", lines[3]);
  BOOST_REQUIRE_EQUAL("  </cim:SvStatus>", lines[4]);
}
