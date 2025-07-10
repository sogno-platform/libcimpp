#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test002)
{
  // Check enum attributes
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test002.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("Analog.N0.Voltage", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("AnalogValue.N0.Voltage", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("AnalogValue", obj->debugString());
  const auto* analogValue = dynamic_cast<const CIMPP::AnalogValue*>(obj);
  BOOST_REQUIRE_NE(nullptr, analogValue);
  BOOST_REQUIRE_EQUAL("AnalogValue.N0.Voltage", analogValue->getRdfid());

  const auto* analog = analogValue->Analog;
  BOOST_REQUIRE_NE(nullptr, analog);
  BOOST_REQUIRE_EQUAL("Analog", analog->debugString());
  BOOST_REQUIRE_EQUAL("Analog.N0.Voltage", analog->getRdfid());
  BOOST_REQUIRE_EQUAL(analog, model.Objects[0]);

  BOOST_REQUIRE_EQUAL("Voltage", static_cast<std::string>(analog->measurementType));
  BOOST_REQUIRE_EQUAL("Voltage Magnitude Measurement at N0", static_cast<std::string>(analog->name));

  const auto& unitMultiplier = analog->unitMultiplier;
  BOOST_REQUIRE(unitMultiplier.initialized);
  BOOST_REQUIRE_EQUAL(CIMPP::UnitMultiplier::k, unitMultiplier.value);

  const auto& unitSymbol = analog->unitSymbol;
  BOOST_REQUIRE(unitSymbol.initialized);
  BOOST_REQUIRE_EQUAL(CIMPP::UnitSymbol::V, unitSymbol.value);
}
