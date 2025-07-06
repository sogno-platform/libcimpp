#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CGMESProfile.hpp"
#include "CIMFactory.hpp"
#include "CIMModel.hpp"
#include "CIMWriter.hpp"
#include "CimConstants.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_SUITE(CIMWriter_test)

BOOST_AUTO_TEST_CASE(writeCim_empty)
{
  // Check writing with empty CIM objects list without profile
  static std::string XML_HEADER = "<?xml version='1.0' encoding='utf-8' ?>";
  static std::string RDF = NamespaceMap.at("rdf");

  std::stringstream rdf;
  CIMWriter::writeCim(rdf, {});

  std::vector<std::string> lines;
  std::string line;
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(3, lines.size());

  BOOST_REQUIRE_EQUAL(XML_HEADER, lines[0]);
  BOOST_REQUIRE_EQUAL("<rdf:RDF xmlns:rdf='" + RDF + "'>", lines[1]);
  BOOST_REQUIRE_EQUAL("</rdf:RDF>", lines[2]);
}

BOOST_AUTO_TEST_CASE(writeCim_one_object)
{
  // Check writing one CIM object without profile
  static std::string XML_HEADER = "<?xml version='1.0' encoding='utf-8' ?>";
  static std::string RDF = NamespaceMap.at("rdf");
  static std::string CIM = NamespaceMap.at("cim");

  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");
  std::vector<BaseClass*> objList = { cimObj };

  std::stringstream rdf;
  CIMWriter::writeCim(rdf, objList);

  std::vector<std::string> lines;
  std::string line;
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(5, lines.size());

  BOOST_REQUIRE_EQUAL(XML_HEADER, lines[0]);
  BOOST_REQUIRE_EQUAL("<rdf:RDF xmlns:cim='" + CIM + "' xmlns:rdf='" + RDF + "'>", lines[1]);
  BOOST_REQUIRE_EQUAL("  <cim:IdentifiedObject rdf:ID='rdfid'>", lines[2]);
  BOOST_REQUIRE_EQUAL("  </cim:IdentifiedObject>", lines[3]);
  BOOST_REQUIRE_EQUAL("</rdf:RDF>", lines[4]);
}

BOOST_AUTO_TEST_CASE(writeCim_with_custom_namespace)
{
  // Check writing one CIM object without profile including one attribute with custom namespace
  static std::string XML_HEADER = "<?xml version='1.0' encoding='utf-8' ?>";
  static std::string RDF = NamespaceMap.at("rdf");
  static std::string CIM = NamespaceMap.at("cim");
  static std::string ENTSOE_EU = CimVersion == "cgmes_v3_0_0" ? "eu" : "entsoe";

  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");
  cimObj->shortName = "dummy";
  std::vector<BaseClass*> objList = { cimObj };

  std::stringstream rdf;
  CIMWriter::writeCim(rdf, objList);

  std::vector<std::string> lines;
  std::string line;
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(6, lines.size());

  BOOST_REQUIRE_EQUAL(XML_HEADER, lines[0]);
  BOOST_REQUIRE_EQUAL("<rdf:RDF xmlns:cim='" + CIM + "' xmlns:" + ENTSOE_EU + "='" + NamespaceMap.at(ENTSOE_EU) +
                        "' xmlns:rdf='" + RDF + "'>",
                      lines[1]);
  BOOST_REQUIRE_EQUAL("  <cim:IdentifiedObject rdf:ID='rdfid'>", lines[2]);
  BOOST_REQUIRE_EQUAL(
    "    <" + ENTSOE_EU + ":IdentifiedObject.shortName>dummy</" + ENTSOE_EU + ":IdentifiedObject.shortName>", lines[3]);
  BOOST_REQUIRE_EQUAL("  </cim:IdentifiedObject>", lines[4]);
  BOOST_REQUIRE_EQUAL("</rdf:RDF>", lines[5]);
}

BOOST_AUTO_TEST_CASE(writeCim_with_profile)
{
  // Check writing one CIM object with profile
  static std::string XML_HEADER = "<?xml version='1.0' encoding='utf-8' ?>";
  static std::string RDF = NamespaceMap.at("rdf");
  static std::string CIM = NamespaceMap.at("cim");
  static std::string MD = NamespaceMap.at("md");

  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");
  std::vector<BaseClass*> objList = { cimObj };

  auto profile = CGMESProfile::EQ;
  std::stringstream rdf;
  bool success = CIMWriter::writeCim(rdf, objList, profile, "model", CIMWriter::getClassProfileMap(objList));
  BOOST_REQUIRE(success);

  std::vector<std::string> lines;
  std::string line;
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(7 + getProfileURIs(profile).size(), lines.size());

  BOOST_REQUIRE_EQUAL(XML_HEADER, lines[0]);
  BOOST_REQUIRE_EQUAL("<rdf:RDF xmlns:cim='" + CIM + "' xmlns:md='" + MD + "' xmlns:rdf='" + RDF + "'>", lines[1]);
  BOOST_REQUIRE_EQUAL("  <md:FullModel rdf:about='#model'>", lines[2]);
  int idx = 0;
  for (const auto& url : getProfileURIs(profile))
  {
    BOOST_REQUIRE_EQUAL("    <md:Model.profile>" + url + "</md:Model.profile>", lines[3 + idx]);
    ++idx;
  }
  BOOST_REQUIRE_EQUAL("  </md:FullModel>", lines[3 + idx]);
  BOOST_REQUIRE_EQUAL("  <cim:IdentifiedObject rdf:ID='rdfid'>", lines[4 + idx]);
  BOOST_REQUIRE_EQUAL("  </cim:IdentifiedObject>", lines[5 + idx]);
  BOOST_REQUIRE_EQUAL("</rdf:RDF>", lines[6 + idx]);
}

BOOST_AUTO_TEST_CASE(writeFile_empty)
{
  // Check writing an empty file (i.e. with no CIM objects) without profile
  CIMWriter::writeFile("test1.xml", {});
}

BOOST_AUTO_TEST_CASE(writeFile_one_object)
{
  // Check writing one CIM object without profile to a file
  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");

  CIMWriter::writeFile("test2.xml", { cimObj });
}

BOOST_AUTO_TEST_CASE(writeFile_with_custom_namespace)
{
  // Check writing one CIM object without profile including one attribute with custom namespace to a file
  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");
  cimObj->shortName = "dummy";
  std::vector<BaseClass*> objList = { cimObj };

  CIMWriter::writeFile("test3.xml", { cimObj });
}

BOOST_AUTO_TEST_CASE(writeFile_with_profile)
{
  // Check writing one CIM object with profile to a file
  auto* cimObj = new CIMPP::IdentifiedObject;
  cimObj->setRdfid("rdfid");
  std::vector<BaseClass*> objList = { cimObj };

  auto profile = CGMESProfile::EQ;
  CIMWriter::writeFile("test4.xml", objList, profile, "model", CIMWriter::getClassProfileMap(objList));
}

BOOST_AUTO_TEST_CASE(writeFiles_with_profiles)
{
  // Check writing more than one profile file
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test013.xml"));
  model.parseFiles();

  const auto map = CIMWriter::writeFiles("test5", model.Objects, "model", CIMWriter::getClassProfileMap(model.Objects));

  BOOST_REQUIRE_EQUAL(2, map.size());
  BOOST_REQUIRE(map.find(CGMESProfile::SV) != map.end());
  BOOST_REQUIRE(map.find(CGMESProfile::TP) != map.end());

  BOOST_REQUIRE_EQUAL("test5_StateVariables.xml", map.at(CGMESProfile::SV));
  BOOST_REQUIRE_EQUAL("test5_Topology.xml", map.at(CGMESProfile::TP));
}

BOOST_AUTO_TEST_CASE(getClassNamespaceUrl)
{
  // Check getClassNamespaceUrl
  static std::string CIM = NamespaceMap.at("cim");
  static std::string ENTSOE_EU = CimVersion == "cgmes_v3_0_0" ? NamespaceMap.at("eu") : NamespaceMap.at("entsoe");

  // Check CIM namespace
  BOOST_REQUIRE_EQUAL(CIM, CIMPP::IdentifiedObject().getClassNamespaceUrl());

  // Check custom namespace
  if (CimVersion == "cgmes_v2_4_13")
  {
    // There is no class in cgmes_v2_4_13 with entsoe namespace
  }
  else if (CimVersion == "cgmes_v2_4_15")
  {
    BOOST_REQUIRE_EQUAL(ENTSOE_EU, CIMPP::EnergySchedulingType().getClassNamespaceUrl());
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    BaseClass* cimObj = CIMPP::CIMFactory::CreateNew("BoundaryPoint");
    BOOST_REQUIRE_EQUAL(ENTSOE_EU, cimObj->getClassNamespaceUrl());
  }
}

BOOST_AUTO_TEST_CASE(getAttributeNamespaceUrl)
{
  // Check getAttributeNamespaceUrl
  static std::string CIM = NamespaceMap.at("cim");
  static std::string ENTSOE_EU = CimVersion == "cgmes_v3_0_0" ? NamespaceMap.at("eu") : NamespaceMap.at("entsoe");
  BaseClass* cimObj = new CIMPP::IdentifiedObject;

  // Check CIM namespace
  BOOST_REQUIRE_EQUAL(CIM, cimObj->getAttributeNamespaceUrl("IdentifiedObject.name"));

  // Check custom namespace
  BOOST_REQUIRE_EQUAL(ENTSOE_EU, cimObj->getAttributeNamespaceUrl("IdentifiedObject.shortName"));
}

BOOST_AUTO_TEST_CASE(isAssignableFrom)
{
  // Check isAssignableFrom
  BaseClass* equipment = new CIMPP::Equipment;
  BaseClass* powerTransformer = new CIMPP::PowerTransformer;
  BaseClass* equipmentContainer = new CIMPP::EquipmentContainer;
  BaseClass* voltageLevel = new CIMPP::VoltageLevel;
  BaseClass* measurement = new CIMPP::Measurement;
  BaseClass* analog = new CIMPP::Analog;

  BOOST_REQUIRE(equipment->isAssignableFrom(powerTransformer));
  BOOST_REQUIRE(!equipment->isAssignableFrom(equipmentContainer));
  BOOST_REQUIRE(!equipment->isAssignableFrom(voltageLevel));
  BOOST_REQUIRE(!equipment->isAssignableFrom(measurement));
  BOOST_REQUIRE(!equipment->isAssignableFrom(analog));

  BOOST_REQUIRE(!powerTransformer->isAssignableFrom(equipment));
  BOOST_REQUIRE(!powerTransformer->isAssignableFrom(equipmentContainer));
  BOOST_REQUIRE(!powerTransformer->isAssignableFrom(voltageLevel));
  BOOST_REQUIRE(!powerTransformer->isAssignableFrom(measurement));
  BOOST_REQUIRE(!powerTransformer->isAssignableFrom(analog));

  BOOST_REQUIRE(equipmentContainer->isAssignableFrom(voltageLevel));
  BOOST_REQUIRE(!equipmentContainer->isAssignableFrom(equipment));
  BOOST_REQUIRE(!equipmentContainer->isAssignableFrom(powerTransformer));
  BOOST_REQUIRE(!equipmentContainer->isAssignableFrom(measurement));
  BOOST_REQUIRE(!equipmentContainer->isAssignableFrom(analog));

  BOOST_REQUIRE(!voltageLevel->isAssignableFrom(equipmentContainer));
  BOOST_REQUIRE(!voltageLevel->isAssignableFrom(equipment));
  BOOST_REQUIRE(!voltageLevel->isAssignableFrom(powerTransformer));
  BOOST_REQUIRE(!voltageLevel->isAssignableFrom(measurement));
  BOOST_REQUIRE(!voltageLevel->isAssignableFrom(analog));

  BOOST_REQUIRE(measurement->isAssignableFrom(analog));
  BOOST_REQUIRE(!measurement->isAssignableFrom(equipment));
  BOOST_REQUIRE(!measurement->isAssignableFrom(powerTransformer));
  BOOST_REQUIRE(!measurement->isAssignableFrom(equipmentContainer));
  BOOST_REQUIRE(!measurement->isAssignableFrom(voltageLevel));

  BOOST_REQUIRE(!analog->isAssignableFrom(measurement));
  BOOST_REQUIRE(!analog->isAssignableFrom(equipment));
  BOOST_REQUIRE(!analog->isAssignableFrom(powerTransformer));
  BOOST_REQUIRE(!analog->isAssignableFrom(equipmentContainer));
  BOOST_REQUIRE(!analog->isAssignableFrom(voltageLevel));
}

BOOST_AUTO_TEST_SUITE_END()
