#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_SUITE(CIMModel_test008)

BOOST_AUTO_TEST_CASE(EQ_TP)
{
  // Check reading models from more than one file
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("Terminal.N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("N0", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("Terminal", obj->debugString());
  const auto* terminal = dynamic_cast<const CIMPP::Terminal*>(obj);
  BOOST_REQUIRE_NE(nullptr, terminal);
  BOOST_REQUIRE_EQUAL("Terminal.N0", terminal->getRdfid());
  BOOST_REQUIRE_EQUAL("Terminal.N0", static_cast<std::string>(terminal->name));

  const auto* topologicalNode = terminal->TopologicalNode;
  BOOST_REQUIRE_NE(nullptr, topologicalNode);
  BOOST_REQUIRE_EQUAL("TopologicalNode", topologicalNode->debugString());
  BOOST_REQUIRE_EQUAL("N0", topologicalNode->getRdfid());
  BOOST_REQUIRE_EQUAL(topologicalNode, model.Objects[1]);
  BOOST_REQUIRE_EQUAL("N0", static_cast<std::string>(topologicalNode->name));
}

BOOST_AUTO_TEST_CASE(TP_EQ)
{
  // Check reading models from more than one file in reverse order
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_TP.xml"));
  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test008_EQ.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("Terminal.N0", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("Terminal", obj->debugString());
  const auto* terminal = dynamic_cast<const CIMPP::Terminal*>(obj);
  BOOST_REQUIRE_NE(nullptr, terminal);
  BOOST_REQUIRE_EQUAL("Terminal.N0", terminal->getRdfid());
  BOOST_REQUIRE_EQUAL("Terminal.N0", static_cast<std::string>(terminal->name));

  const auto* topologicalNode = terminal->TopologicalNode;
  BOOST_REQUIRE_NE(nullptr, topologicalNode);
  BOOST_REQUIRE_EQUAL("TopologicalNode", topologicalNode->debugString());
  BOOST_REQUIRE_EQUAL("N0", topologicalNode->getRdfid());
  BOOST_REQUIRE_EQUAL(topologicalNode, model.Objects[0]);
  BOOST_REQUIRE_EQUAL("N0", static_cast<std::string>(topologicalNode->name));
}

BOOST_AUTO_TEST_SUITE_END()
