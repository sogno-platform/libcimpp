#include <boost/test/unit_test.hpp>

#include <sstream>
#include <string>
#include <vector>

#include "CIMModel.hpp"
#include "CIMWriter.hpp"

// forward declarations
static void check_text_with_non_ascii_characters(std::string file, bool with_euro_sign = true);

BOOST_AUTO_TEST_SUITE(CIMWriter_test010)

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

  std::stringstream rdf;
  CIMWriter::writeCim(rdf, model.Objects);
  CIMWriter::writeFile("test.xml", model.Objects);

  std::vector<std::string> lines;
  std::string line;
  for (int idx = 0; idx < 2; ++idx) // Skip header
  {
    std::getline(rdf, line);
  }
  while (std::getline(rdf, line))
  {
    lines.push_back(line);
  }
  BOOST_REQUIRE_EQUAL(4, lines.size());

  BOOST_REQUIRE_EQUAL("  <cim:BaseVoltage rdf:ID='BaseVoltage.20'>", lines[0]);
  std::string description = lines[1];
  BOOST_REQUIRE_EQUAL("  </cim:BaseVoltage>", lines[2]);

  // Check description line
  BOOST_REQUIRE_EQUAL(0, description.find("    <cim:IdentifiedObject.description>"));
  BOOST_REQUIRE(std::string::npos != description.find("</cim:IdentifiedObject.description>"));

  description = description.substr(description.find(">") + 1);
  description = description.substr(0, description.find("</"));
  if (with_euro_sign)
  {
    BOOST_REQUIRE_EQUAL(17, description.length()); // 3 + 7 * 2 = 17
  }
  else
  {
    BOOST_REQUIRE_EQUAL(14, description.length()); // 7 * 2 = 14
  }

  // Check non ASCII characters
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
