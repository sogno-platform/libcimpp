#ifndef GovGAST4_H
#define GovGAST4_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TurbineGovernorDynamics.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/** \brief Generic turbogas. */
	class GovGAST4 : public TurbineGovernorDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		GovGAST4();
		~GovGAST4() override;

		/** \brief Droop (bp).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU bp;

		/** \brief Compressor gain (K).  Typical Value = 0. Default: nullptr */
		CIMPP::PU ktm;

		/** \brief Fuel flow maximum negative error value (MN).  Typical Value = -0.05. Default: nullptr */
		CIMPP::PU mnef;

		/** \brief Fuel flow maximum positive error value (MX).  Typical Value = 0.05. Default: nullptr */
		CIMPP::PU mxef;

		/** \brief Minimum valve opening (RYMN).  Typical Value = 0. Default: nullptr */
		CIMPP::PU rymn;

		/** \brief Maximum valve opening (RYMX).  Typical Value = 1.1. Default: nullptr */
		CIMPP::PU rymx;

		/** \brief Maximum gate opening velocity (T).  Typical Value = 3. Default: nullptr */
		CIMPP::Seconds ta;

		/** \brief Maximum gate closing velocity (T).  Typical Value = 0.5. Default: nullptr */
		CIMPP::Seconds tc;

		/** \brief Fuel control time constant (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tcm;

		/** \brief Compressor discharge volume time constant (T).  Typical Value = 0.2. Default: nullptr */
		CIMPP::Seconds tm;

		/** \brief Time constant of fuel valve positioner (T).  Typical Value = 0.1. Default: nullptr */
		CIMPP::Seconds tv;

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

	BaseClass* GovGAST4_factory();
}
#endif
