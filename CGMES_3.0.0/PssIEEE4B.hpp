#ifndef PssIEEE4B_H
#define PssIEEE4B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemStabilizerDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type PSS4B power system stabilizer. The PSS4B model represents a structure based on multiple working frequency bands. Three separate bands, respectively dedicated to the low-, intermediate- and high-frequency modes of oscillations, are used in this delta omega (speed input) PSS. There is an error in the in IEEE 421.5-2005 PSS4B model: the <i>Pe</i> input should read -<i>Pe</i>. This implies that the input <i>Pe</i> needs to be multiplied by -1. Reference: IEEE 4B 421.5-2005, 8.4.  Parameter details: This model has 2 input signals. They have the following fixed types (expressed in terms of InputSignalKind values): the first one is of rotorAngleFrequencyDeviation type and the second one is of generatorElectricalPower type. */
	class PssIEEE4B : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssIEEE4B();
		~PssIEEE4B() override;

		/** \brief Notch filter 1 (high-frequency band): three dB bandwidth (&lt;i&gt;B&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wi&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bwh1;

		/** \brief Notch filter 2 (high-frequency band): three dB bandwidth (&lt;i&gt;B&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wi&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bwh2;

		/** \brief Notch filter 1 (low-frequency band): three dB bandwidth (&lt;i&gt;B&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wi&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bwl1;

		/** \brief Notch filter 2 (low-frequency band): three dB bandwidth (&lt;i&gt;B&lt;/i&gt;&lt;i&gt;&lt;sub&gt;wi&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float bwl2;

		/** \brief High band gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H&lt;/sub&gt;&lt;/i&gt;).  Typical value = 120. Default: nullptr */
		CIMPP::PU kh;

		/** \brief High band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU kh1;

		/** \brief High band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H11&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kh11;

		/** \brief High band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H17&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kh17;

		/** \brief High band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU kh2;

		/** \brief Intermediate band gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I&lt;/sub&gt;&lt;/i&gt;).  Typical value = 30. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Intermediate band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU ki1;

		/** \brief Intermediate band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I11&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ki11;

		/** \brief Intermediate band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I17&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ki17;

		/** \brief Intermediate band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU ki2;

		/** \brief Low band gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L&lt;/sub&gt;&lt;/i&gt;).  Typical value = 7.5. Default: nullptr */
		CIMPP::PU kl;

		/** \brief Low band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L1&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU kl1;

		/** \brief Low band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L11&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kl11;

		/** \brief Low band first lead-lag blocks coefficient (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L17&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU kl17;

		/** \brief Low band differential filter gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L2&lt;/sub&gt;&lt;/i&gt;).  Typical value = 66. Default: nullptr */
		CIMPP::PU kl2;

		/** \brief Notch filter 1 (high-frequency band): filter frequency (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ni&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float omeganh1;

		/** \brief Notch filter 2 (high-frequency band): filter frequency (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ni&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float omeganh2;

		/** \brief Notch filter 1 (low-frequency band): filter frequency (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ni&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float omeganl1;

		/** \brief Notch filter 2 (low-frequency band): filter frequency (&lt;i&gt;omega&lt;/i&gt;&lt;i&gt;&lt;sub&gt;ni&lt;/sub&gt;&lt;/i&gt;). Default: 0.0 */
		CIMPP::Float omeganl2;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01513. Default: nullptr */
		CIMPP::Seconds th1;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th10;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H11&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th11;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H12&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th12;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01816. Default: nullptr */
		CIMPP::Seconds th2;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th3;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th4;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th5;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th6;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,01816. Default: nullptr */
		CIMPP::Seconds th7;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,02179. Default: nullptr */
		CIMPP::Seconds th8;

		/** \brief High band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;H9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds th9;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,173. Default: nullptr */
		CIMPP::Seconds ti1;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti10;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I11&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti11;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I12&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti12;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2075. Default: nullptr */
		CIMPP::Seconds ti2;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti3;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti4;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti5;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti6;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2075. Default: nullptr */
		CIMPP::Seconds ti7;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,2491. Default: nullptr */
		CIMPP::Seconds ti8;

		/** \brief Intermediate band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;I9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ti9;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,73. Default: nullptr */
		CIMPP::Seconds tl1;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L10&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl10;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L11&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl11;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L12&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl12;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,075. Default: nullptr */
		CIMPP::Seconds tl2;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L3&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl3;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L4&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl4;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L5&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl5;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L6&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl6;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L7&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,075. Default: nullptr */
		CIMPP::Seconds tl7;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L8&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 2,491. Default: nullptr */
		CIMPP::Seconds tl8;

		/** \brief Low band time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;L9&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds tl9;

		/** \brief High band output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Hmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PssIEEE4B.vhmin).  Typical value = 0,6. Default: nullptr */
		CIMPP::PU vhmax;

		/** \brief High band output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Hmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PssIEEE4V.vhmax).  Typical value = -0,6. Default: nullptr */
		CIMPP::PU vhmin;

		/** \brief Intermediate band output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Imax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PssIEEE4B.vimin).  Typical value = 0,6. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Intermediate band output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Imin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PssIEEE4B.vimax).  Typical value = -0,6. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Low band output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Lmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PssIEEE4B.vlmin).  Typical value = 0,075. Default: nullptr */
		CIMPP::PU vlmax;

		/** \brief Low band output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;Lmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PssIEEE4B.vlmax).  Typical value = -0,075. Default: nullptr */
		CIMPP::PU vlmin;

		/** \brief PSS output maximum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;STmax&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; PssIEEE4B.vstmin).  Typical value = 0,15. Default: nullptr */
		CIMPP::PU vstmax;

		/** \brief PSS output minimum limit (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;STmin&lt;/sub&gt;&lt;/i&gt;) (&amp;lt; PssIEEE4B.vstmax).  Typical value = -0,15. Default: nullptr */
		CIMPP::PU vstmin;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* PssIEEE4B_factory();
}
#endif
