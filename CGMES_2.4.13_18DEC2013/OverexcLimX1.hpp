#ifndef OverexcLimX1_H
#define OverexcLimX1_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "OverexcitationLimiterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Field voltage over excitation limiter. */
	class OverexcLimX1 : public OverexcitationLimiterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		OverexcLimX1();
		~OverexcLimX1() override;

		/** \brief Low voltage point on the inverse time characteristic (EFD).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU efd1;

		/** \brief Mid voltage point on the inverse time characteristic (EFD).  Typical Value = 1.2. Default: nullptr */
		CIMPP::PU efd2;

		/** \brief High voltage point on the inverse time characteristic (EFD).  Typical Value = 1.5. Default: nullptr */
		CIMPP::PU efd3;

		/** \brief Desired field voltage (EFD).  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU efddes;

		/** \brief Rated field voltage (EFD).  Typical Value = 1.05. Default: nullptr */
		CIMPP::PU efdrated;

		/** \brief Gain (K).  Typical Value = 0.01. Default: nullptr */
		CIMPP::PU kmx;

		/** \brief Time to trip the exciter at the low voltage point on the inverse time characteristic (TIME).  Typical Value = 120. Default: nullptr */
		CIMPP::Seconds t1;

		/** \brief Time to trip the exciter at the mid voltage point on the inverse time characteristic (TIME).  Typical Value = 40. Default: nullptr */
		CIMPP::Seconds t2;

		/** \brief Time to trip the exciter at the high voltage point on the inverse time characteristic (TIME).  Typical Value = 15. Default: nullptr */
		CIMPP::Seconds t3;

		/** \brief Low voltage limit (V) (&gt;0). Default: nullptr */
		CIMPP::PU vlow;

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* OverexcLimX1_factory();
}
#endif
