#ifndef TapChanger_H
#define TapChanger_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"
#include "Simple_Float.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class SvTapStep;
	class TapChangerControl;
	class TapSchedule;

	/*
	Mechanism for changing transformer winding tap positions.
	*/
	class TapChanger : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		TapChanger();
		~TapChanger() override;

		CIMPP::SvTapStep* SvTapStep;  /* The tap step state associated with the tap changer. Default: 0 */
		CIMPP::TapChangerControl* TapChangerControl;  /* The tap changers that participates in this regulating tap control scheme. Default: 0 */
		std::list<CIMPP::TapSchedule*> TapSchedules;  /* A TapSchedule is associated with a TapChanger. Default: 0 */
		CIMPP::Boolean controlEnabled;  /* Specifies the regulation status of the equipment.  True is regulating, false is not regulating. Default: false */
		CIMPP::Integer highStep;  /* Highest possible tap step position, advance from neutral. The attribute shall be greater than lowStep. Default: 0 */
		CIMPP::Integer lowStep;  /* Lowest possible tap step position, retard from neutral Default: 0 */
		CIMPP::Boolean ltcFlag;  /* Specifies whether or not a TapChanger has load tap changing capabilities. Default: false */
		CIMPP::Integer neutralStep;  /* The neutral tap step position for this winding. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: 0 */
		CIMPP::Voltage neutralU;  /* Voltage at which the winding operates at the neutral tap setting. Default: nullptr */
		CIMPP::Integer normalStep;  /* The tap step position used in `normal` network operation for this winding. For a `Fixed` tap changer indicates the current physical tap setting. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: 0 */
		CIMPP::Simple_Float step;  /* Tap changer position. Starting step for a steady state solution. Non integer values are allowed to support continuous tap variables. The reasons for continuous value are to support study cases where no discrete tap changers has yet been designed, a solutions where a narrow voltage band force the tap step to oscillate or accommodate for a continuous solution as input. The attribute shall be equal or greater than lowStep and equal or less than highStep. Default: nullptr */

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

	BaseClass* TapChanger_factory();
}
#endif
