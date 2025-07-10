#include <boost/test/unit_test.hpp>

#include <algorithm>
#include <set>
#include <vector>

#include "CGMESProfile.hpp"
#include "CimConstants.hpp"

BOOST_AUTO_TEST_CASE(CGMESProfile_getProfileList)
{
  // Check getProfileList
  int count = 9;
  int EQ = 0;
  int TP = 7;
  if (CimVersion == "cgmes_v3_0_0")
  {
    count = 10;
    TP = 9;
  }
  auto values = getProfileList();
  BOOST_REQUIRE_EQUAL(count, values.size());

  auto list = std::vector<CGMESProfile>(values.begin(), values.end());
  BOOST_REQUIRE(CGMESProfile::EQ == list[EQ]);
  BOOST_REQUIRE(CGMESProfile::TP == list[TP]);

  BOOST_REQUIRE_EQUAL(EQ, static_cast<unsigned int>(CGMESProfile::EQ));
  BOOST_REQUIRE_EQUAL(TP, static_cast<unsigned int>(CGMESProfile::TP));

  for (auto profile : values)
  {
    BOOST_REQUIRE(profile != UnknownProfile);
  }
  BOOST_REQUIRE(static_cast<CGMESProfile>(-1) == UnknownProfile);

  // Check if all profile values are unique
  auto set = std::set<CGMESProfile>(values.begin(), values.end());
  BOOST_REQUIRE_EQUAL(count, set.size());

  // Check if profile values are sorted
  auto sorted_list = std::vector<CGMESProfile>(set.begin(), set.end());
  std::sort(sorted_list.begin(), sorted_list.end());
  int idx = 0;
  for (auto profile : values)
  {
    BOOST_CHECK(profile == sorted_list[idx]);
    ++idx;
  }
}
