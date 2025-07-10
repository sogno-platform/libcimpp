#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test001)
{
  // Check CIM objects with primitive, datatype and class attribute (ManyToOne)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test001.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", voltageLevel->getRdfid());
  BOOST_REQUIRE_EQUAL("98", static_cast<std::string>(voltageLevel->name));

  const auto* baseVoltage = voltageLevel->BaseVoltage;
  BOOST_REQUIRE_NE(nullptr, baseVoltage);
  BOOST_REQUIRE_EQUAL("BaseVoltage", baseVoltage->debugString());
  BOOST_REQUIRE_EQUAL("BaseVoltage.20", baseVoltage->getRdfid());
  BOOST_REQUIRE_EQUAL(baseVoltage, model.Objects[0]);

  const auto& voltageLevels = baseVoltage->VoltageLevel;
  BOOST_REQUIRE_EQUAL(1, voltageLevels.size());
  BOOST_REQUIRE_EQUAL(voltageLevel, voltageLevels.front());

  const auto nominalVoltage = baseVoltage->nominalVoltage;
  BOOST_REQUIRE(nominalVoltage.initialized);
  BOOST_REQUIRE_EQUAL(20.0, nominalVoltage.value);
}
