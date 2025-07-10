#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test038)
{
  // Check not allowed linked type (causing an error log entry)
  // Equipment object is tried to be linked as ConductingEquipment
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test038.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_PT", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_Status", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("Equipment", obj->debugString());
  const auto* equipment = dynamic_cast<const CIMPP::Equipment*>(obj);
  BOOST_REQUIRE_NE(nullptr, equipment);
  BOOST_REQUIRE_EQUAL("_PT", equipment->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("SvStatus", obj->debugString());
  const auto* svStatus = dynamic_cast<const CIMPP::SvStatus*>(obj);
  BOOST_REQUIRE_NE(nullptr, svStatus);
  BOOST_REQUIRE_EQUAL("_Status", svStatus->getRdfid());

  BOOST_REQUIRE_EQUAL("PowerTransformer", static_cast<std::string>(equipment->description));
  BOOST_REQUIRE_EQUAL(nullptr, svStatus->ConductingEquipment);
}
