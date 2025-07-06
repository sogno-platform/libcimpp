#include <boost/test/unit_test.hpp>

#include <sstream>

#include "CIMModel.hpp"
#include "CimConstants.hpp"
#include "IEC61970.hpp"
#include "gettercache.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test006)
{
  // Check enum attribute with custom namespace
  if (CimVersion == "cgmes_v2_4_13" || CimVersion == "cgmes_v2_4_15")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test006_CGMES2.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(1, model.Objects.size());

    BOOST_REQUIRE_EQUAL("OLT", model.Objects[0]->getRdfid());

    const auto* operationalLimitType = model.Objects[0];
    BOOST_REQUIRE_NE(nullptr, operationalLimitType);
    BOOST_REQUIRE_EQUAL("OperationalLimitType", operationalLimitType->debugString());
    BOOST_REQUIRE_EQUAL("OLT", operationalLimitType->getRdfid());

    const auto& map = get_enum_getter_map(operationalLimitType);
    auto it = map.find("OperationalLimitType.limitType");
    BOOST_REQUIRE(it != map.end());
    get_function func = it->second;
    std::stringstream stream;
    BOOST_REQUIRE(func(operationalLimitType, stream));
    BOOST_REQUIRE_EQUAL("LimitTypeKind.highVoltage", stream.str());
  }
  else if (CimVersion == "cgmes_v3_0_0")
  {
    CIMModel model;
    model.setDependencyCheckOff();

    BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test006_CGMES3.xml"));
    model.parseFiles();
    BOOST_REQUIRE_EQUAL(1, model.Objects.size());

    BOOST_REQUIRE_EQUAL("OLT", model.Objects[0]->getRdfid());

    const auto* operationalLimitType = model.Objects[0];
    BOOST_REQUIRE_NE(nullptr, operationalLimitType);
    BOOST_REQUIRE_EQUAL("OperationalLimitType", operationalLimitType->debugString());
    BOOST_REQUIRE_EQUAL("OLT", operationalLimitType->getRdfid());

    const auto& map = get_enum_getter_map(operationalLimitType);
    auto it = map.find("OperationalLimitType.kind");
    BOOST_REQUIRE(it != map.end());
    get_function func = it->second;
    std::stringstream stream;
    BOOST_REQUIRE(func(operationalLimitType, stream));
    BOOST_REQUIRE_EQUAL("LimitKind.highVoltage", stream.str());
  }
}
