#include <boost/test/unit_test.hpp>

#include <list>
#include <sstream>

#include "CIMModel.hpp"
#include "CimConstants.hpp"
#include "IEC61970.hpp"
#include "gettercache.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test005)
{
  // Check object with custom namespace and class attribute with custom namespace
  if (CimVersion == "cgmes_v2_4_13" || CimVersion == "cgmes_v2_4_15")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test005_CGMES2.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(2, model.Objects.size());

    BOOST_REQUIRE_EQUAL("ES", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("EST", model.Objects[1]->getRdfid());

    const auto* energySource = model.Objects[0];
    BOOST_REQUIRE_NE(nullptr, energySource);
    BOOST_REQUIRE_EQUAL("EnergySource", energySource->debugString());
    BOOST_REQUIRE_EQUAL("ES", energySource->getRdfid());

    const auto* energySchedulingType = model.Objects[1];
    BOOST_REQUIRE_NE(nullptr, energySchedulingType);
    BOOST_REQUIRE_EQUAL("EnergySchedulingType", energySchedulingType->debugString());
    BOOST_REQUIRE_EQUAL("EST", energySchedulingType->getRdfid());

    // Check class attribute EnergySchedulingType of energySource
    {
      const auto& map = get_class_getter_map(energySource);
      auto it = map.find("EnergySource.EnergySchedulingType");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(energySource, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(energySchedulingType, targetList.front());
    }

    // Check primitive attribute name of energySchedulingType
    {
      const auto& map = get_primitive_getter_map(energySchedulingType);
      auto it = map.find("IdentifiedObject.name");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(energySchedulingType, stream));
      BOOST_REQUIRE_EQUAL("EST", stream.str());
    }
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test005_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(2, model.Objects.size());

    BOOST_REQUIRE_EQUAL("N0", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("N0_BP", model.Objects[1]->getRdfid());

    const auto* connectivityNode = model.Objects[0];
    BOOST_REQUIRE_NE(nullptr, connectivityNode);
    BOOST_REQUIRE_EQUAL("ConnectivityNode", connectivityNode->debugString());
    BOOST_REQUIRE_EQUAL("N0", connectivityNode->getRdfid());

    const auto* boundaryPoint = model.Objects[1];
    BOOST_REQUIRE_NE(nullptr, boundaryPoint);
    BOOST_REQUIRE_EQUAL("BoundaryPoint", boundaryPoint->debugString());
    BOOST_REQUIRE_EQUAL("N0_BP", boundaryPoint->getRdfid());

    // Check class attribute ConnectivityNode of boundaryPoint
    {
      const auto& map = get_class_getter_map(boundaryPoint);
      auto it = map.find("BoundaryPoint.ConnectivityNode");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(boundaryPoint, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(connectivityNode, targetList.front());
    }

    // Check primitive attribute name of connectivityNode
    {
      const auto& map = get_primitive_getter_map(connectivityNode);
      auto it = map.find("IdentifiedObject.name");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(connectivityNode, stream));
      BOOST_REQUIRE_EQUAL("N0", stream.str());
    }
  }
}
