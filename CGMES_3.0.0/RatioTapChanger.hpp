#ifndef RatioTapChanger_H
#define RatioTapChanger_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "TapChanger.hpp"
#include "BaseClassDefiner.hpp"
#include "PerCent.hpp"

namespace CIMPP
{
	class RatioTapChangerTable;
	class TransformerEnd;

	/*
	A tap changer that changes the voltage ratio impacting the voltage magnitude but not the phase angle across the transformer.  Angle sign convention (general): Positive value indicates a positive phase shift from the winding where the tap is located to the other winding (for a two-winding transformer).
	*/
	class RatioTapChanger : public TapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		RatioTapChanger();
		~RatioTapChanger() override;

		CIMPP::RatioTapChangerTable* RatioTapChangerTable;  /* The tap ratio table for this ratio  tap changer. Default: 0 */
		CIMPP::TransformerEnd* TransformerEnd;  /* Transformer end to which this ratio tap changer belongs. Default: 0 */
		CIMPP::PerCent stepVoltageIncrement;  /* Tap step increment, in per cent of rated voltage of the power transformer end, per step position. When the increment is negative, the voltage decreases when the tap step increases. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RatioTapChanger_factory();
}
#endif
