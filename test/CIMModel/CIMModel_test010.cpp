#include <boost/test/unit_test.hpp>

#include <string>

#include "CIMModel.hpp"
#include "IEC61970.hpp"

// forward declarations
static void check_text_with_non_ascii_characters(std::string file, bool with_euro_sign = true);

BOOST_AUTO_TEST_SUITE(CIMModel_test010)

BOOST_AUTO_TEST_CASE(UTF_8)
{
  // Check text with non ASCII characters encoded in UTF-8
  check_text_with_non_ascii_characters("../../test/rdf/test010_UTF-8.xml");
}

BOOST_AUTO_TEST_CASE(ISO_8859_1)
{
  // Check text with non ASCII characters encoded in ISO-8859-1 (which has no EURO SIGN)
  check_text_with_non_ascii_characters("../../test/rdf/test010_ISO-8859-1.xml", false);
}

BOOST_AUTO_TEST_CASE(ISO_8859_15)
{
  // Check text with non ASCII characters encoded in ISO-8859-15
  check_text_with_non_ascii_characters("../../test/rdf/test010_ISO-8859-15.xml");
}

BOOST_AUTO_TEST_CASE(UTF_16LE)
{
  // Check text with non ASCII characters encoded in UTF-16LE
  check_text_with_non_ascii_characters("../../test/rdf/test010_UTF-16LE.xml");
}

BOOST_AUTO_TEST_CASE(UTF_16BE)
{
  // Check text with non ASCII characters encoded in UTF-16BE
  check_text_with_non_ascii_characters("../../test/rdf/test010_UTF-16BE.xml");
}

BOOST_AUTO_TEST_SUITE_END()


// static functions

static void check_text_with_non_ascii_characters(std::string file, bool with_euro_sign /*= true*/)
{
  // Check text with non ASCII characters
  CIMModel model;
  model.setDependencyCheckOff();

  BOOST_REQUIRE(model.addCIMFile(file));
  model.parseFiles();
  BOOST_REQUIRE_EQUAL(1, model.Objects.size());

  BOOST_REQUIRE_EQUAL("BaseVoltage.20", model.Objects[0]->getRdfid());

  const auto* baseVoltage = dynamic_cast<const CIMPP::BaseVoltage*>(model.Objects[0]);
  BOOST_REQUIRE_NE(nullptr, baseVoltage);

  const auto& description = static_cast<std::string>(baseVoltage->description);
  if (with_euro_sign)
  {
    BOOST_REQUIRE_EQUAL(17, description.length()); // 3 + 7 * 2 = 17
  }
  else
  {
    BOOST_REQUIRE_EQUAL(14, description.length()); // 7 * 2 = 14
  }

  // text is always converted to UTF-8 by libxml2
  const char* ptr = description.c_str();
  if (with_euro_sign)
  {
    BOOST_REQUIRE_EQUAL('\xE2', *ptr++); // UTF-8 - EURO SIGN(E2 82 AC)
    BOOST_REQUIRE_EQUAL('\x82', *ptr++);
    BOOST_REQUIRE_EQUAL('\xAC', *ptr++);
  }
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER A WITH DIAERESIS (C3 84)
  BOOST_REQUIRE_EQUAL('\x84', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER O WITH DIAERESIS (C3 96)
  BOOST_REQUIRE_EQUAL('\x96', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER U WITH DIAERESIS (C3 9C)
  BOOST_REQUIRE_EQUAL('\x9C', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER A WITH DIAERESIS (C3 A4)
  BOOST_REQUIRE_EQUAL('\xA4', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER O WITH DIAERESIS (C3 B6)
  BOOST_REQUIRE_EQUAL('\xB6', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER U WITH DIAERESIS (C3 BC)
  BOOST_REQUIRE_EQUAL('\xBC', *ptr++);
  BOOST_REQUIRE_EQUAL('\xC3', *ptr++); // UTF-8 - LATIN SMALL LETTER SHARP S (C3 9F)
  BOOST_REQUIRE_EQUAL('\x9F', *ptr++);
  BOOST_REQUIRE_EQUAL('\x00', *ptr);
}
