#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test037)
{
  // Check parsing one object with changing type (maybe not CGMES conform)
  // Equipment object has to be changed to PowerTransformer
  // and is linked as ConductingEquipment (which is not allowed for Equipment)
  // before changing to PowerTransformer (typically the entries are defined
  // in more than one file, so the order of reading is not clearly defined)
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile("../../test/rdf/test037.xml"));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(2, model.Objects.size());

  BOOST_REQUIRE_EQUAL("_PT", model.Objects[0]->getRdfid());
  BOOST_REQUIRE_EQUAL("_Status", model.Objects[1]->getRdfid());

  const auto* obj = model.Objects[0];
  BOOST_REQUIRE_EQUAL("PowerTransformer", obj->debugString());
  const auto* powerTransformer = dynamic_cast<const CIMPP::PowerTransformer*>(obj);
  BOOST_REQUIRE_NE(nullptr, powerTransformer);
  BOOST_REQUIRE_EQUAL("_PT", powerTransformer->getRdfid());

  obj = model.Objects[1];
  BOOST_REQUIRE_EQUAL("SvStatus", obj->debugString());
  const auto* svStatus = dynamic_cast<const CIMPP::SvStatus*>(obj);
  BOOST_REQUIRE_NE(nullptr, svStatus);
  BOOST_REQUIRE_EQUAL("_Status", svStatus->getRdfid());

  BOOST_REQUIRE_EQUAL("PT", static_cast<std::string>(powerTransformer->name));
  BOOST_REQUIRE_EQUAL("PowerTransformer", static_cast<std::string>(powerTransformer->description));
  BOOST_REQUIRE_EQUAL(svStatus, powerTransformer->SvStatus);

  BOOST_REQUIRE_EQUAL(powerTransformer, svStatus->ConductingEquipment);
}
