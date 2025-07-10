#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test033)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object has to be changed to PowerTransformer (rdf:about)
  // Equipment has class attribute, but the linked object is defined later
  // after changing to PowerTransformer
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test033.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_PT", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_VL", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("PowerTransformer", obj->debugString());
  const auto* powerTransformer = dynamic_cast<const CIMPP::PowerTransformer*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformer);
  BOOST_REQUIRE_EQUAL("_PT", powerTransformer->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("_VL", voltageLevel->getRdfid());

  BOOST_REQUIRE_EQUAL("PT", static_cast<std::string>(powerTransformer->name));
  BOOST_REQUIRE_EQUAL(voltageLevel, powerTransformer->EquipmentContainer);

  const auto& equipments = voltageLevel->Equipments;
  BOOST_REQUIRE_EQUAL(1, equipments.size());
  BOOST_REQUIRE_EQUAL(powerTransformer, equipments.front());
}
