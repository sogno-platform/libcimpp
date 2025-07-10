#include <boost/test/unit_test.hpp>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test012)
{
  // Check MonthDay as primitive string attribute
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test012.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_Season", model.Objects[0]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("Season", obj->debugString());
  const auto* season = dynamic_cast<const CIMPP::Season*>(obj);
  BOOST_REQUIRE_NE(nullptr, season);
  BOOST_REQUIRE_EQUAL("_Season", season->getRdfid());

  const auto& endDate = season->endDate;
  BOOST_REQUIRE(endDate.initialized);
  BOOST_REQUIRE_EQUAL("--10-31", endDate.value);

  const auto& startDate = season->startDate;
  BOOST_REQUIRE(startDate.initialized);
  BOOST_REQUIRE_EQUAL("--10-13", startDate.value);
}
