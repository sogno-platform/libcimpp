#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test022)
{
  // Check models with more than one profile
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test022.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N2", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("TopologicalIsland", obj->debugString());
  const auto* topologicalIsland = dynamic_cast<const CIMPP::TopologicalIsland*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalIsland);
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N", topologicalIsland->getRdfid());

  BOOST_REQUIRE_EQUAL(0, topologicalIsland->TopologicalNodes.size());
  BOOST_REQUIRE_EQUAL("Island N", static_cast<std::string>(topologicalIsland->description));
  BOOST_REQUIRE_EQUAL("N", static_cast<std::string>(topologicalIsland->name));

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("TopologicalIsland", obj->debugString());
  topologicalIsland = dynamic_cast<const CIMPP::TopologicalIsland*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalIsland);
  BOOST_REQUIRE_EQUAL("TopologicalIsland.N2", topologicalIsland->getRdfid());

  BOOST_REQUIRE_EQUAL(0, topologicalIsland->TopologicalNodes.size());
  BOOST_REQUIRE(!topologicalIsland->description.initialized);
  BOOST_REQUIRE(!topologicalIsland->name.initialized);
}
