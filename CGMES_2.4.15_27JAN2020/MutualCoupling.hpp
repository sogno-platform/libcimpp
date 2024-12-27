#ifndef MutualCoupling_H
#define MutualCoupling_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Conductance.hpp"
#include "Length.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Susceptance.hpp"

namespace CIMPP
{
	class Terminal;

	/*
	This class represents the zero sequence line mutual coupling.
	*/
	class MutualCoupling : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		MutualCoupling();
		~MutualCoupling() override;

		CIMPP::Terminal* First_Terminal;  /* The starting terminal for the calculation of distances along the first branch of the mutual coupling.  Normally MutualCoupling would only be used for terminals of AC line segments.  The first and second terminals of a mutual coupling should point to different AC line segments. Default: 0 */
		CIMPP::Terminal* Second_Terminal;  /* The starting terminal for the calculation of distances along the second branch of the mutual coupling. Default: 0 */
		CIMPP::Susceptance b0ch;  /* Zero sequence mutual coupling shunt (charging) susceptance, uniformly distributed, of the entire line section. Default: nullptr */
		CIMPP::Length distance11;  /* Distance to the start of the coupled region from the first line`s terminal having sequence number equal to 1. Default: nullptr */
		CIMPP::Length distance12;  /* Distance to the end of the coupled region from the first line`s terminal with sequence number equal to 1. Default: nullptr */
		CIMPP::Length distance21;  /* Distance to the start of coupled region from the second line`s terminal with sequence number equal to 1. Default: nullptr */
		CIMPP::Length distance22;  /* Distance to the end of coupled region from the second line`s terminal with sequence number equal to 1. Default: nullptr */
		CIMPP::Conductance g0ch;  /* Zero sequence mutual coupling shunt (charging) conductance, uniformly distributed, of the entire line section. Default: nullptr */
		CIMPP::Resistance r0;  /* Zero sequence branch-to-branch mutual impedance coupling, resistance. Default: nullptr */
		CIMPP::Reactance x0;  /* Zero sequence branch-to-branch mutual impedance coupling, reactance. Default: nullptr */

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

	BaseClass* MutualCoupling_factory();
}
#endif
