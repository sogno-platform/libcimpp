#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test039)
{
  // Check replacing enum attributes
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test039.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("Analog.N0.Voltage", model.Objects[0]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("Analog", obj->debugString());
  const auto* analog = dynamic_cast<const CIMPP::Analog*>(obj);
  BOOST_REQUIRE_NE(nullptr, analog);
  BOOST_REQUIRE_EQUAL("Analog.N0.Voltage", analog->getRdfid());
  BOOST_REQUIRE_EQUAL("Voltage", static_cast<std::string>(analog->measurementType));

  const auto& unitMultiplier = analog->unitMultiplier;
  BOOST_REQUIRE(unitMultiplier.initialized);
  BOOST_REQUIRE_EQUAL(CIMPP::UnitMultiplier::k, unitMultiplier.value);

  const auto& unitSymbol = analog->unitSymbol;
  BOOST_REQUIRE(unitSymbol.initialized);
  BOOST_REQUIRE_EQUAL(CIMPP::UnitSymbol::V, unitSymbol.value);
}
