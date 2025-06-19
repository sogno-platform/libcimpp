#ifndef VAdjIEEE_H
#define VAdjIEEE_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "VoltageAdjusterDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{

	/** \brief The class represents IEEE Voltage Adjuster which is used to represent the voltage adjuster in either a power factor or var control system.  Reference: IEEE Standard 421.5-2005 Section 11.1. */
	class VAdjIEEE : public VoltageAdjusterDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		VAdjIEEE();
		~VAdjIEEE() override;

		/** \brief Rate at which output of adjuster changes ().  Unit = sec./PU.  Typical Value = 300. Default: nullptr */
		CIMPP::Simple_Float adjslew;

		/** \brief Time that adjuster pulses are off ().  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds taoff;

		/** \brief Time that adjuster pulses are on ().  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds taon;

		/** \brief Set high to provide a continuous raise or lower (). Default: nullptr */
		CIMPP::Simple_Float vadjf;

		/** \brief Maximum output of the adjuster ().  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU vadjmax;

		/** \brief Minimum output of the adjuster ().  Typical Value = 0.9. Default: nullptr */
		CIMPP::PU vadjmin;

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

	BaseClass* VAdjIEEE_factory();
}
#endif
