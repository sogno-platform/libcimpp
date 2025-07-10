#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test021)
{
  // Check handling links to not existing objects (causing an error log entry)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test021.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("VoltageLevel.98", model.Objects[0]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("VoltageLevel", obj->debugString());
  const auto* voltageLevel = dynamic_cast<const CIMPP::VoltageLevel*>(obj);
  BOOST_REQUIRE_NE(nullptr, voltageLevel);
  BOOST_REQUIRE_EQUAL("VoltageLevel.98", voltageLevel->getRdfid());

  BOOST_REQUIRE_EQUAL(nullptr, voltageLevel->BaseVoltage);
  BOOST_REQUIRE_EQUAL("98", static_cast<std::string>(voltageLevel->name));
}
