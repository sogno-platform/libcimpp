#ifndef PssSB4_H
#define PssSB4_H
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
#include "PU.hpp"
#include "Seconds.hpp"

namespace CIMPP
{

	/*
	Power sensitive stabilizer model.
	*/
	class PssSB4 : public PowerSystemStabilizerDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		PssSB4();
		~PssSB4() override;

		CIMPP::PU kx;  /* Gain (Kx). Default: nullptr */
		CIMPP::Seconds ta;  /* Time constant (Ta). Default: nullptr */
		CIMPP::Seconds tb;  /* Time constant (Tb). Default: nullptr */
		CIMPP::Seconds tc;  /* Time constant (Tc). Default: nullptr */
		CIMPP::Seconds td;  /* Time constant (Td). Default: nullptr */
		CIMPP::Seconds te;  /* Time constant (Te). Default: nullptr */
		CIMPP::Seconds tt;  /* Time constant (Tt). Default: nullptr */
		CIMPP::Seconds tx1;  /* Reset time constant (Tx1). Default: nullptr */
		CIMPP::Seconds tx2;  /* Time constant (Tx2). Default: nullptr */
		CIMPP::PU vsmax;  /* Limiter (Vsmax). Default: nullptr */
		CIMPP::PU vsmin;  /* Limiter (Vsmin). Default: nullptr */

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

	BaseClass* PssSB4_factory();
}
#endif
