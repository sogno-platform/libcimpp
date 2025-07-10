#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test007)
{
  // Check class attributes if the linked object is defined later
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test007.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(4, model.Objects.size());

  BOOST_REQUIRE_EQUAL("VoltageLevel.96", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("VoltageLevel.97", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[2]->getRdfid());
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", model.Objects[3]->getRdfid());

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
  BOOST_REQUIRE_EQUAL(13, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='VoltageLevel.96'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:VoltageLevel.BaseVoltage rdf:resource='#BaseVoltage.20' />", lines[1]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[2]);
  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='VoltageLevel.97'>", lines[3]);
  BOOST_REQUIRE_EQUAL("    <cim:VoltageLevel.BaseVoltage rdf:resource='#BaseVoltage.20' />", lines[4]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[5]);
  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='BaseVoltage.20'>", lines[6]);
  BOOST_REQUIRE_EQUAL("    <cim:BaseVoltage.nominalVoltage>20</cim:BaseVoltage.nominalVoltage>", lines[7]);
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[8]);
  BOOST_REQUIRE_EQUAL("  <cim:VoltageLevel rdf:ID='VoltageLevel.98'>", lines[9]);
  BOOST_REQUIRE_EQUAL("    <cim:VoltageLevel.BaseVoltage rdf:resource='#BaseVoltage.20' />", lines[10]);
  BOOST_REQUIRE_EQUAL("  </cim:VoltageLevel>", lines[11]);
}
