#ifndef WindPitchContEmulIEC_H
#define WindPitchContEmulIEC_H
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
#include "PU.hpp"
#include "Seconds.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class WindGenTurbineType2IEC;

	/*
	Pitch control emulator model.  Reference: IEC Standard 61400-27-1 Section 6.6.5.1.
	*/
	class WindPitchContEmulIEC : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		WindPitchContEmulIEC();
		~WindPitchContEmulIEC() override;

		CIMPP::WindGenTurbineType2IEC* WindGenTurbineType2IEC;  /* Wind turbine type 2 model with which this Pitch control emulator model is associated. Default: 0 */
		CIMPP::Simple_Float kdroop;  /* Power error gain (). It is case dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kipce;  /* Pitch control emulator integral constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU komegaaero;  /* Aerodynamic power change vs. omegachange (). It is case dependent parameter. Default: nullptr */
		CIMPP::Simple_Float kppce;  /* Pitch control emulator proportional constant (). It is type dependent parameter. Default: nullptr */
		CIMPP::PU omegaref;  /* Rotor speed in initial steady state (omega). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pimax;  /* Maximum steady state power (). It is case dependent parameter. Default: nullptr */
		CIMPP::PU pimin;  /* Minimum steady state power (). It is case dependent parameter. Default: nullptr */
		CIMPP::Seconds t1;  /* First time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds t2;  /* Second time constant in pitch control lag (). It is type dependent parameter. Default: nullptr */
		CIMPP::Seconds tpe;  /* Time constant in generator air gap power lag (). It is type dependent parameter. Default: nullptr */

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

	BaseClass* WindPitchContEmulIEC_factory();
}
#endif
