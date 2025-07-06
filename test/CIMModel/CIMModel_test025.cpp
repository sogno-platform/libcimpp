#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test025)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object (rdf:about) has to be changed to PowerTransformer
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test025.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(3, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_VL", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PT", model.Objects[1]->getRdfid());
  BOOST_REQUIRE_EQUAL("_PTE", model.Objects[2]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("_VL", voltageLevel->getRdfid());
  BOOST_REQUIRE_EQUAL("VL", static_cast<std::string>(voltageLevel->name));

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("PowerTransformer", obj->debugString());
  const auto* powerTransformer = dynamic_cast<const CIMPP::PowerTransformer*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformer);
  BOOST_REQUIRE_EQUAL("_PT", powerTransformer->getRdfid());
  BOOST_REQUIRE_EQUAL("PT", static_cast<std::string>(powerTransformer->name));
  BOOST_REQUIRE_EQUAL("PowerTransformer", static_cast<std::string>(powerTransformer->description));

  obj = model.Objects[2];
  BOOST_REQUIRE_EQUAL("PowerTransformerEnd", obj->debugString());
  const auto* powerTransformerEnd = dynamic_cast<const CIMPP::PowerTransformerEnd*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformerEnd);
  BOOST_REQUIRE_EQUAL("_PTE", powerTransformerEnd->getRdfid());

  BOOST_REQUIRE_EQUAL(powerTransformer, powerTransformerEnd->PowerTransformer);
  const auto& powerTransformerEnds = powerTransformer->PowerTransformerEnd;
  BOOST_REQUIRE_EQUAL(1, powerTransformerEnds.size());
  BOOST_REQUIRE_EQUAL(powerTransformerEnd, powerTransformerEnds.front());

  BOOST_REQUIRE_EQUAL(voltageLevel, powerTransformer->EquipmentContainer);
  const auto& equipments = voltageLevel->Equipments;
  BOOST_REQUIRE_EQUAL(1, equipments.size());
  BOOST_REQUIRE_EQUAL(powerTransformer, equipments.front());
}
