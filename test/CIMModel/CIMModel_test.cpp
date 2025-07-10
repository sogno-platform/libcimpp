#include <boost/test/unit_test.hpp>

#include "CIMModel.hpp"

BOOST_AUTO_TEST_CASE(CIMModel_test)
{
  CIMModel model;

  BOOST_REQUIRE(!model.addCIMFile("dummy.xml"));
}
