#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CIMWriter_test011){
  // Check class attributes of Status, StreetAddress, StreetDetail, TownDetail
  // (to make sure they are not primitive string attributes, only for CGMES3)
  if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test011_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(5, model.Objects.size());

    BOOST_REQUIRE_EQUAL("_Location", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Address", model.Objects[1]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Status", model.Objects[2]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Street", model.Objects[3]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Town", model.Objects[4]->getRdfid());

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

    BOOST_REQUIRE_EQUAL("  <cim:Location rdf:ID='_Location'>", lines[0]);
    BOOST_REQUIRE_EQUAL("    <cim:Location.mainAddress rdf:resource='#_Address' />", lines[1]);
    BOOST_REQUIRE_EQUAL("  </cim:Location>", lines[2]);
    BOOST_REQUIRE_EQUAL("  <cim:StreetAddress rdf:ID='_Address'>", lines[3]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetAddress.status rdf:resource='#_Status' />", lines[4]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetAddress.streetDetail rdf:resource='#_Street' />", lines[5]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetAddress.townDetail rdf:resource='#_Town' />", lines[6]);
    BOOST_REQUIRE_EQUAL("  </cim:StreetAddress>", lines[7]);
    BOOST_REQUIRE_EQUAL("  <cim:Status rdf:ID='_Status'>", lines[8]);
    BOOST_REQUIRE_EQUAL("    <cim:Status.dateTime>2024-10-13 19:17:22 +0200</cim:Status.dateTime>", lines[9]);
    BOOST_REQUIRE_EQUAL("    <cim:Status.value>verified</cim:Status.value>", lines[10]);
    BOOST_REQUIRE_EQUAL("  </cim:Status>", lines[11]);
    BOOST_REQUIRE_EQUAL("  <cim:StreetDetail rdf:ID='_Street'>", lines[12]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetDetail.name>Ku&apos;damm</cim:StreetDetail.name>", lines[13]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetDetail.number>33</cim:StreetDetail.number>", lines[14]);
    BOOST_REQUIRE_EQUAL("    <cim:StreetDetail.withinTownLimits>true</cim:StreetDetail.withinTownLimits>", lines[15]);
    BOOST_REQUIRE_EQUAL("  </cim:StreetDetail>", lines[16]);
    BOOST_REQUIRE_EQUAL("  <cim:TownDetail rdf:ID='_Town'>", lines[17]);
    BOOST_REQUIRE_EQUAL("    <cim:TownDetail.country>Germany</cim:TownDetail.country>", lines[18]);
    BOOST_REQUIRE_EQUAL("    <cim:TownDetail.name>Berlin</cim:TownDetail.name>", lines[19]);
    BOOST_REQUIRE_EQUAL("  </cim:TownDetail>", lines[20]);
  }
}
