#ifndef ExcDC3A_H
#define ExcDC3A_H
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
#include "Boolean.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief This is modified IEEE DC3A direct current commutator exciters with speed input, and death band.  DC old type 4. */
	class ExcDC3A : public ExcitationSystemDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		ExcDC3A();
		~ExcDC3A() override;

		/** \brief Maximum voltage exciter output limiter (Efdmax).  Typical Value = 99. Default: nullptr */
		CIMPP::PU edfmax;

		/** \brief Exciter voltage at which exciter saturation is defined (Efd1).  Typical Value = 2.6. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Exciter voltage at which exciter saturation is defined (Efd2).  Typical Value = 3.45. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief (Efdlim). true = exciter output limiter is active false = exciter output limiter not active. Typical Value = true. Default: false */
		CIMPP::Boolean efdlim;

		/** \brief Minimum voltage exciter output limiter (Efdmin).  Typical Value = -99. Default: nullptr */
		CIMPP::PU efdmin;

		/** \brief (exclim).  IEEE standard is ambiguous about lower limit on exciter output. true = a lower limit of zero is applied to integrator output false = a lower limit of zero not applied to integrator output. Typical Value = true. Default: false */
		CIMPP::Boolean exclim;

		/** \brief Exciter constant related to self-excited field (Ke).  Typical Value = 1. Default: nullptr */
		CIMPP::PU ke;

		/** \brief Death band (Kr).  If Kr is not zero, the voltage regulator input changes at a constant rate if Verr &gt; Kr or Verr &lt; -Kr as per the IEEE (1968) Type 4 model. If Kr is zero, the error signal drives the voltage regulator continuously as per the IEEE (1980) DC3 and IEEE (1992, 2005) DC3A models.  Typical Value = 0. Default: nullptr */
		CIMPP::PU kr;

		/** \brief Coefficient to allow different usage of the model-speed coefficient (Ks).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ks;

		/** \brief Fast raise/lower contact setting (Kv).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU kv;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Efd1 (Se[Eefd1]).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Simple_Float seefd1;

		/** \brief Exciter saturation function value at the corresponding exciter voltage, Efd2 (Se[Efd2]).  Typical Value = 0.35. Default: nullptr */
		CIMPP::Simple_Float seefd2;

		/** \brief Exciter time constant, integration rate associated with exciter control (Te).  Typical Value = 1.83. Default: nullptr */
		CIMPP::Seconds te;

		/** \brief Rheostat travel time (Trh).  Typical Value = 20. Default: nullptr */
		CIMPP::Seconds trh;

		/** \brief Maximum voltage regulator output (Vrmax).  Typical Value = 5. Default: nullptr */
		CIMPP::PU vrmax;

		/** \brief Minimum voltage regulator output (Vrmin).  Typical Value = 0. Default: nullptr */
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

	BaseClass* ExcDC3A_factory();
}
#endif
