#include <boost/test/unit_test.hpp>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test007)
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

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel.96", voltageLevel->getRdfid());

  const auto* baseVoltage = voltageLevel->BaseVoltage;
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("BaseVoltage", baseVoltage->debugString());
  BOOST_REQUIRE_EQUAL("BaseVoltage.20", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[2]);

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel.97", voltageLevel->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, voltageLevel->BaseVoltage);

  obj = model.Objects[3];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", voltageLevel->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, voltageLevel->BaseVoltage);
}
