#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test005)
{
  // Check object with custom namespace and class attribute with custom namespace
  if (CimVersion == "cgmes_v2_4_13")
  {
    // There is no class or list attribute in cgmes_v2_4_13 with entsoe namespace
  }
  else if (CimVersion == "cgmes_v2_4_15")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test005_CGMES2.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(2, model.Objects.size());

    BOOST_REQUIRE_EQUAL("ES", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("EST", model.Objects[1]->getRdfid());

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
    BOOST_REQUIRE_EQUAL(7, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:EnergySource rdf:ID='ES'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <entsoe:EnergySource.EnergySchedulingType rdf:resource='#EST' />", lines[1]);
    BOOST_REQUIRE_EQUAL("  </cim:EnergySource>", lines[2]);
    BOOST_REQUIRE_EQUAL("  <entsoe:EnergySchedulingType rdf:ID='EST'>", lines[3]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>EST</cim:IdentifiedObject.name>", lines[4]);
    BOOST_REQUIRE_EQUAL("  </entsoe:EnergySchedulingType>", lines[5]);
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test005_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(2, model.Objects.size());

    BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("N0_BP", model.Objects[1]->getRdfid());

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
    BOOST_REQUIRE_EQUAL(7, lines.size());

    BOOST_REQUIRE_EQUAL("  <cim:ConnectivityNode rdf:ID='N0'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <cim:IdentifiedObject.name>N0</cim:IdentifiedObject.name>", lines[1]);
    BOOST_REQUIRE_EQUAL("  </cim:ConnectivityNode>", lines[2]);
    BOOST_REQUIRE_EQUAL("  <eu:BoundaryPoint rdf:ID='N0_BP'>", lines[3]);
    BOOST_REQUIRE_EQUAL("    <eu:BoundaryPoint.ConnectivityNode rdf:resource='#N0' />", lines[4]);
    BOOST_REQUIRE_EQUAL("  </eu:BoundaryPoint>", lines[5]);
  }
}
