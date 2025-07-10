#ifndef ExcIEEEST3A_H
#define ExcIEEEST3A_H
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
#include "AngleDegrees.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Std 421.5-2005 type ST3A model.  Some static systems utilize a field voltage control loop to linearize the exciter control characteristic. This also makes the output independent of supply source variations until supply limitations are reached.  These systems utilize a variety of controlled-rectifier designs: full thyristor complements or hybrid bridges in either series or shunt configurations. The power source may consist of only a potential source, either fed from the machine terminals or from internal windings. Some designs may have compound power sources utilizing both machine potential and current. These power sources are represented as phasor combinations of machine terminal current and voltage and are accommodated by suitable parameters in model Type ST3A which is represented by ExcIEEEST3A.   Reference: IEEE Standard 421.5-2005 Section 7.3. */
	class ExcIEEEST3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcIEEEST3A();
		~ExcIEEEST3A() override;

		/** \brief Voltage regulator gain (K). This is parameter K in the IEEE Std. Typical Value = 200. Default: nullptr */
		CIMPP::PU ka;

		/** \brief Rectifier loading factor proportional to commutating reactance (K). Typical Value = 0.2. Default: nullptr */
		CIMPP::PU kc;

		/** \brief Feedback gain constant of the inner loop field regulator (K).  Typical Value = 1. Default: nullptr */
		CIMPP::PU kg;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ki;

		/** \brief Forward gain constant of the inner loop field regulator (K).  Typical Value = 7.93. Default: nullptr */
		CIMPP::PU km;

		/** \brief Potential circuit gain coefficient (K).  Typical Value = 6.15. Default: nullptr */
		CIMPP::PU kp;

		/** \brief Voltage regulator time constant (T).  Typical Value = 0. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Voltage regulator time constant (T).  Typical Value = 10. Default: nullptr */
		CIMPP::Seconds tb;

		/** \brief Voltage regulator time constant (T).  Typical Value = 1. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Potential circuit phase angle (thetap).  Typical Value = 0. Default: nullptr */
		CIMPP::AngleDegrees thetap;

		/** \brief Forward time constant of inner loop field regulator (T).  Typical Value = 0.4. Default: nullptr */
		CIMPP::Seconds tm;

		/** \brief Maximum excitation voltage (V).  Typical Value = 6.9. Default: nullptr */
		CIMPP::PU vbmax;

		/** \brief Maximum inner loop feedback voltage (V).  Typical Value = 5.8. Default: nullptr */
		CIMPP::PU vgmax;

		/** \brief Maximum voltage regulator input limit (V).  Typical Value = 0.2. Default: nullptr */
		CIMPP::PU vimax;

		/** \brief Minimum voltage regulator input limit (V).  Typical Value = -0.2. Default: nullptr */
		CIMPP::PU vimin;

		/** \brief Maximum inner loop output (V).  Typical Value = 1. Default: nullptr */
		CIMPP::PU vmmax;

		/** \brief Minimum inner loop output (V).  Typical Value = 0. Default: nullptr */
		CIMPP::PU vmmin;

		/** \brief Maximum voltage regulator output (V).  Typical Value = 10. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (V).  Typical Value = -10. Default: nullptr */
		CIMPP::PU vrmin;

		/** \brief Reactance associated with potential source (X).  Typical Value = 0.081. Default: nullptr */
		CIMPP::PU xl;

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

	BaseClass* ExcIEEEST3A_factory();
}
#endif
