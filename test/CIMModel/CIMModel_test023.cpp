#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test023)
{
  // Check text with entity references
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test023.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[0]->getRdfid());

  const auto* baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(model.Objects[0]);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);

  BOOST_REQUIRE_EQUAL("<&> <&> <&>", static_cast<std::string>(baseVoltage->description));
}
