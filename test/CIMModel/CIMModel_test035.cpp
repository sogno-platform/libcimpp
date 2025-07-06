#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test035)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // EquipmentContainer object has to be changed to VoltageLevel
  // EquipmentContainer has list attributes (not CGMES conform), but the linked
  // objects are defined later: one before and one after changing to VoltageLevel
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test035.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(3, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_VL", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PT", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PT2", model.Objects[2]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("_VL", voltageLevel->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("PowerTransformer", obj->debugString());
  const auto* powerTransformer1 = dynamic_cast<const CIMPP::PowerTransformer*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformer1);
  BOOST_REQUIRE_EQUAL("_PT", powerTransformer1->getRdfid());

  obj = model.Objects[2];
  BOOST_REQUIRE_EQUAL("PowerTransformer", obj->debugString());
  const auto* powerTransformer2 = dynamic_cast<const CIMPP::PowerTransformer*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformer2);
  BOOST_REQUIRE_EQUAL("_PT2", powerTransformer2->getRdfid());

  BOOST_REQUIRE_EQUAL("PT", static_cast<std::string>(powerTransformer1->name));
  BOOST_REQUIRE_EQUAL(voltageLevel, powerTransformer1->EquipmentContainer);

  BOOST_REQUIRE_EQUAL("PT2", static_cast<std::string>(powerTransformer2->name));
  BOOST_REQUIRE_EQUAL(voltageLevel, powerTransformer2->EquipmentContainer);

  const auto& equipments = voltageLevel->Equipments;
  BOOST_REQUIRE_EQUAL(2, equipments.size());

  auto it = std::find(equipments.begin(), equipments.end(), powerTransformer1);
  BOOST_REQUIRE(it != equipments.end());
  it = std::find(equipments.begin(), equipments.end(), powerTransformer2);
  BOOST_REQUIRE(it != equipments.end());
}
