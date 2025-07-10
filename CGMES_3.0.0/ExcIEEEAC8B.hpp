#ifndef ExcIEEEAC8B_H
#define ExcIEEEAC8B_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ExcitationSystemDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief IEEE 421.5-2005 type AC8B model. This model represents a PID voltage regulator with either a brushless exciter or DC exciter. The AVR in this model consists of PID control, with separate constants for the proportional (<i>K</i><i><sub>PR</sub></i>), integral (<i>K</i><i><sub>IR</sub></i>), and derivative (<i>K</i><i><sub>DR</sub></i>) gains. The representation of the brushless exciter (<i>T</i><i><sub>E</sub></i>, <i>K</i><i><sub>E</sub></i>, <i>S</i><i><sub>E</sub></i>, <i>K</i><i><sub>C</sub></i>, <i>K</i><i><sub>D</sub></i>) is similar to the model type AC2A. The type AC8B model can be used to represent static voltage regulators applied to brushless excitation systems. Digitally based voltage regulators feeding DC rotating main exciters can be represented with the AC type AC8B model with the parameters <i>K</i><i><sub>C</sub></i> and <i>K</i><i><sub>D</sub></i> set to 0.  For thyristor power stages fed from the generator terminals, the limits <i>V</i><i><sub>RMAX</sub></i> and <i>V</i><i><sub>RMIN</sub></i><i> </i>should be a function of terminal voltage: V<i><sub>T</sub></i> x <i>V</i><i><sub>RMAX</sub></i><sub> </sub>and <i>V</i><i><sub>T</sub></i> x <i>V</i><i><sub>RMIN</sub></i>. Reference: IEEE 421.5-2005, 6.8. */
	class ExcIEEEAC8B : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEAC8B();
		~ExcIEEEAC8B() override;

		/** \brief Voltage regulator gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;C&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0). Typical value = 0,55. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Demagnetizing factor, a function of exciter alternator reactances (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;D&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 1,1. Default: nullptr */
		CIMPP::PU kd;

		/** \brief Voltage regulator derivative gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 10. Default: nullptr */
		CIMPP::PU kdr;

		/** \brief Exciter constant related to self-excited field (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;).  Typical value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Voltage regulator integral gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;IR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 5. Default: nullptr */
		CIMPP::PU kir;

		/** \brief Voltage regulator proportional gain (&lt;i&gt;K&lt;/i&gt;&lt;i&gt;&lt;sub&gt;PR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0 if ExcIEEEAC8B.kir = 0).  Typical value = 80. Default: nullptr */
		CIMPP::PU kpr;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E1&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E1&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0,3. Default: 0.0 */
		CIMPP::Float seve1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, &lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E2&lt;/sub&gt;&lt;/i&gt;, back of commutating reactance (&lt;i&gt;S&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;[V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E2&lt;/sub&gt;&lt;/i&gt;&lt;i&gt;]&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 3. Default: 0.0 */
		CIMPP::Float seve2;

		/** \brief Voltage regulator time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;A&lt;/sub&gt;&lt;/i&gt;) (&amp;gt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Lag time constant (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;DR&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 0,1. Default: nullptr */
		CIMPP::Seconds tdr;

		/** \brief Exciter time constant, integration rate associated with exciter control (&lt;i&gt;T&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 1,2. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E1&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 6,5. Default: nullptr */
		CIMPP::PU ve1;

		/** \brief Exciter alternator output voltages back of commutating reactance at which saturation is defined (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;E2&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 9. Default: nullptr */
		CIMPP::PU ve2;

		/** \brief Minimum exciter voltage output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;EMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vemin;

		/** \brief Exciter field current limit reference (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;FEMAX&lt;/sub&gt;&lt;/i&gt;).  Typical value = 6. Default: nullptr */
		CIMPP::PU vfemax;

		/** \brief Maximum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMAX&lt;/sub&gt;&lt;/i&gt;) (&amp;gt; 0).  Typical value = 35. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (&lt;i&gt;V&lt;/i&gt;&lt;i&gt;&lt;sub&gt;RMIN&lt;/sub&gt;&lt;/i&gt;) (&amp;lt;= 0).  Typical value = 0. Default: nullptr */
		CIMPP::PU vrmin;

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

	BaseClass* ExcIEEEAC8B_factory();
}
#endif
