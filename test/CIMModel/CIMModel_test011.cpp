#include <boost/test/unit_test.hpp>

#include <list>
#include <sstream>

#include "CIMModel.hpp"
#include "CimConstants.hpp"
#include "IEC61970.hpp"
#include "gettercache.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test011)
{
  // Check class attributes of Status, StreetAddress, StreetDetail, TownDetail
  // (to make sure they are not primitive string attributes, only for CGMES3)
  if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test011_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(5, model.Objects.size());

    BOOST_REQUIRE_EQUAL("_Location", model.Objects[0]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Address", model.Objects[1]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Status", model.Objects[2]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Street", model.Objects[3]->getRdfid());
    BOOST_REQUIRE_EQUAL("_Town", model.Objects[4]->getRdfid());

    const auto* location = model.Objects[0];
    BOOST_REQUIRE_NE(nullptr, location);
    BOOST_REQUIRE_EQUAL("Location", location->debugString());
    BOOST_REQUIRE_EQUAL("_Location", location->getRdfid());

    const auto* address = model.Objects[1];
    BOOST_REQUIRE_NE(nullptr, address);
    BOOST_REQUIRE_EQUAL("StreetAddress", address->debugString());
    BOOST_REQUIRE_EQUAL("_Address", address->getRdfid());

    const auto* status = model.Objects[2];
    BOOST_REQUIRE_NE(nullptr, status);
    BOOST_REQUIRE_EQUAL("Status", status->debugString());
    BOOST_REQUIRE_EQUAL("_Status", status->getRdfid());

    const auto* streetDetail = model.Objects[3];
    BOOST_REQUIRE_NE(nullptr, streetDetail);
    BOOST_REQUIRE_EQUAL("StreetDetail", streetDetail->debugString());
    BOOST_REQUIRE_EQUAL("_Street", streetDetail->getRdfid());

    const auto* townDetail = model.Objects[4];
    BOOST_REQUIRE_NE(nullptr, townDetail);
    BOOST_REQUIRE_EQUAL("TownDetail", townDetail->debugString());
    BOOST_REQUIRE_EQUAL("_Town", townDetail->getRdfid());

    // Check class attribute mainAddress of location
    {
      const auto& map = get_class_getter_map(location);
      auto it = map.find("Location.mainAddress");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(location, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(address, targetList.front());
    }

    // Check class attribute status of address
    {
      const auto& map = get_class_getter_map(address);
      auto it = map.find("StreetAddress.status");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(address, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(status, targetList.front());
    }

    // Check class attribute streetDetail of address
    {
      const auto& map = get_class_getter_map(address);
      auto it = map.find("StreetAddress.streetDetail");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(address, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(streetDetail, targetList.front());
    }

    // Check class attribute townDetail of address
    {
      const auto& map = get_class_getter_map(address);
      auto it = map.find("StreetAddress.townDetail");
      BOOST_REQUIRE(it != map.end());
      class_get_function func = it->second;
      std::list<const BaseClass*> targetList;
      BOOST_REQUIRE(func(address, targetList));
      BOOST_REQUIRE_EQUAL(1, targetList.size());
      BOOST_REQUIRE_EQUAL(townDetail, targetList.front());
    }

    // Check primitive attribute dateTime of status
    {
      const auto& map = get_primitive_getter_map(status);
      auto it = map.find("Status.dateTime");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(status, stream));
      BOOST_REQUIRE_EQUAL("2024-10-13 19:17:22 +0200", stream.str());
    }

    // Check primitive attribute value of status
    {
      const auto& map = get_primitive_getter_map(status);
      auto it = map.find("Status.value");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(status, stream));
      BOOST_REQUIRE_EQUAL("verified", stream.str());
    }

    // Check primitive attribute name of streetDetail
    {
      const auto& map = get_primitive_getter_map(streetDetail);
      auto it = map.find("StreetDetail.name");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(streetDetail, stream));
      BOOST_REQUIRE_EQUAL("Ku'damm", stream.str());
    }

    // Check primitive attribute number of streetDetail
    {
      const auto& map = get_primitive_getter_map(streetDetail);
      auto it = map.find("StreetDetail.number");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(streetDetail, stream));
      BOOST_REQUIRE_EQUAL("33", stream.str());
    }

    // Check primitive attribute withinTownLimits of streetDetail
    {
      const auto& map = get_primitive_getter_map(streetDetail);
      auto it = map.find("StreetDetail.withinTownLimits");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(streetDetail, stream));
      BOOST_REQUIRE_EQUAL("true", stream.str());
    }

    // Check primitive attribute country of streetDetail
    {
      const auto& map = get_primitive_getter_map(townDetail);
      auto it = map.find("TownDetail.country");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(townDetail, stream));
      BOOST_REQUIRE_EQUAL("Germany", stream.str());
    }

    // Check primitive attribute name of streetDetail
    {
      const auto& map = get_primitive_getter_map(townDetail);
      auto it = map.find("TownDetail.name");
      BOOST_REQUIRE(it != map.end());
      get_function func = it->second;
      std::stringstream stream;
      BOOST_REQUIRE(func(townDetail, stream));
      BOOST_REQUIRE_EQUAL("Berlin", stream.str());
    }
  }
}
