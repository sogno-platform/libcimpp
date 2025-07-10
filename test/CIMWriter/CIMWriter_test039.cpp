#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test039)
{
  // Check replacing enum attributes
  static std::string CIM = NamespaceMap.at("cim");
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test039.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("Analog.N0.Voltage", model.Objects[0]->getRdfid());

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

  BOOST_REQUIRE_EQUAL("  <cim:Analog rdf:ID='Analog.N0.Voltage'>", lines[0]);
  BOOST_REQUIRE_EQUAL("    <cim:Measurement.measurementType>Voltage</cim:Measurement.measurementType>", lines[1]);
  BOOST_REQUIRE_EQUAL("    <cim:Measurement.unitMultiplier rdf:resource='" + CIM + "UnitMultiplier.k' />", lines[2]);
  BOOST_REQUIRE_EQUAL("    <cim:Measurement.unitSymbol rdf:resource='" + CIM + "UnitSymbol.V' />", lines[3]);
  BOOST_REQUIRE_EQUAL("  </cim:Analog>", lines[4]);
}
