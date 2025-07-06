#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test020)
{
  // Check inherited object links
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test020.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("VoltageLevel.98", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("EnergyConsumer.H-5", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("EnergyConsumer", obj->debugString());
  const auto* energyConsumer = dynamic_cast<const CIMPP::EnergyConsumer*>(obj);
  BOOST_REQUIRE_NE(nullptr, energyConsumer);
  BOOST_REQUIRE_EQUAL("EnergyConsumer.H-5", energyConsumer->getRdfid());

  const auto* voltageLevel = energyConsumer->EquipmentContainer;
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel", voltageLevel->debugString());
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", voltageLevel->getRdfid());
  BOOST_REQUIRE_EQUAL(voltageLevel, model.Objects[0]);
  BOOST_REQUIRE_EQUAL("98", static_cast<std::string>(voltageLevel->name));

  const auto& equipments = voltageLevel->Equipments;
  BOOST_REQUIRE_EQUAL(1, equipments.size());
  BOOST_REQUIRE_EQUAL(energyConsumer, equipments.front());
}
