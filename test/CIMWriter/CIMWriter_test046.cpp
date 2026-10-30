#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test046)
{
  // Check reading list attributes with inverse list (ManyToMany)
  // between DiagramObject and VisibilityLayer
  // if they are set on both sides (not CGMES conform)
  if (getCimVersion() == "cgmes_v2_4_13")
  {
    // DiagramObject has no name in cgmes_v2_4_13
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test046.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(6, model.Objects.size());

    BOOST_REQUIRE_EQUAL("_DO1", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("_DO2", model.Objects[1]->getRdfid());
    BOOST_REQUIRE_EQUAL("_DO3", model.Objects[2]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL1", model.Objects[3]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL2", model.Objects[4]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL3", model.Objects[5]->getRdfid());

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
    BOOST_REQUIRE_EQUAL(22, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO1'>", lines[0]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[1]);
    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO2'>", lines[2]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[3]);
    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO3'>", lines[4]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[5]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL1'>", lines[6]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL1</cim:IdentifiedObject.name>", lines[7]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO1' />", lines[8]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO2' />", lines[9]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[10]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL2'>", lines[11]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL2</cim:IdentifiedObject.name>", lines[12]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO2' />", lines[13]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO3' />", lines[14]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[15]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL3'>", lines[16]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL3</cim:IdentifiedObject.name>", lines[17]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO1' />", lines[18]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO3' />", lines[19]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[20]);
  }
  else // cgmes_v2_4_15, cgmes_v3_0_0, ...
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test046.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(6, model.Objects.size());

    BOOST_REQUIRE_EQUAL("_DO1", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("_DO2", model.Objects[1]->getRdfid());
    BOOST_REQUIRE_EQUAL("_DO3", model.Objects[2]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL1", model.Objects[3]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL2", model.Objects[4]->getRdfid());
    BOOST_REQUIRE_EQUAL("_VL3", model.Objects[5]->getRdfid());

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
    BOOST_REQUIRE_EQUAL(25, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO1'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>DO1</cim:IdentifiedObject.name>", lines[1]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[2]);
    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO2'>", lines[3]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>DO2</cim:IdentifiedObject.name>", lines[4]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[5]);
    BOOST_REQUIRE_EQUAL("  <cim:DiagramObject rdf:ID='_DO3'>", lines[6]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>DO3</cim:IdentifiedObject.name>", lines[7]);
    BOOST_REQUIRE_EQUAL("  </cim:DiagramObject>", lines[8]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL1'>", lines[9]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL1</cim:IdentifiedObject.name>", lines[10]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO1' />", lines[11]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO2' />", lines[12]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[13]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL2'>", lines[14]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL2</cim:IdentifiedObject.name>", lines[15]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO2' />", lines[16]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO3' />", lines[17]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[18]);
    BOOST_REQUIRE_EQUAL("  <cim:VisibilityLayer rdf:ID='_VL3'>", lines[19]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>VL3</cim:IdentifiedObject.name>", lines[20]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO1' />", lines[21]);
    BOOST_REQUIRE_EQUAL("    <cim:VisibilityLayer.VisibleObjects rdf:resource='#_DO3' />", lines[22]);
    BOOST_REQUIRE_EQUAL("  </cim:VisibilityLayer>", lines[23]);
  }
}
