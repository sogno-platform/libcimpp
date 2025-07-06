#include <boost/test/unit_test.hpp>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test019)
{
  // Check reading links between SvVoltage and TopologicalNode
  // if they are set on both sides (not CGMES conform)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test019.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("SvVoltage.N0", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("TopologicalNode", obj->debugString());
  const auto* topologicalNode = dynamic_cast<const CIMPP::TopologicalNode*>(obj);
  BOOST_REQUIRE_NE(nullptr, topologicalNode);
  BOOST_REQUIRE_EQUAL("N0", topologicalNode->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("SvVoltage", obj->debugString());
  const auto* svVoltage = dynamic_cast<const CIMPP::SvVoltage*>(obj);
  BOOST_REQUIRE_NE(nullptr, svVoltage);
  BOOST_REQUIRE_EQUAL("SvVoltage.N0", svVoltage->getRdfid());

  BOOST_REQUIRE_EQUAL(svVoltage, topologicalNode->SvVoltage);
  BOOST_REQUIRE_EQUAL(topologicalNode, svVoltage->TopologicalNode);
}
