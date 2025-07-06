#include <boost/test/unit_test.hpp>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test003)
{
  // Check reading rdf:about instead of rdf:ID
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test003.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("Terminal.N0", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("Terminal", obj->debugString());
  const auto* terminal = dynamic_cast<const CIMPP::Terminal*>(obj);
  BOOST_REQUIRE_NE(nullptr, terminal);
  BOOST_REQUIRE_EQUAL("Terminal.N0", terminal->getRdfid());

  const auto* topologicalNode = terminal->TopologicalNode;
  BOOST_REQUIRE_NE(nullptr, topologicalNode);
  BOOST_REQUIRE_EQUAL("TopologicalNode", topologicalNode->debugString());
  BOOST_REQUIRE_EQUAL("N0", topologicalNode->getRdfid());
  BOOST_REQUIRE_EQUAL(topologicalNode, model.Objects[0]);

  const auto& name = topologicalNode->name;
  BOOST_REQUIRE(name.initialized);
  BOOST_REQUIRE_EQUAL("N0", name.value);
}
