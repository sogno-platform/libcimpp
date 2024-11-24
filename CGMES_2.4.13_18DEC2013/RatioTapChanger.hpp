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
#include "TransformerControlMode.hpp"

namespace CIMPP
{
	class RatioTapChangerTable;
	class TransformerEnd;

	/*
	A tap changer that changes the voltage ratio impacting the voltage magnitude but not the phase angle across the transformer.
	*/
	class RatioTapChanger : public TapChanger
	{
	public:
		/* constructor initialising all attributes to null */
		RatioTapChanger();
		~RatioTapChanger() override;

		CIMPP::RatioTapChangerTable* RatioTapChangerTable;  /* The ratio tap changer of this tap ratio table. Default: 0 */
		CIMPP::TransformerEnd* TransformerEnd;  /* Ratio tap changer associated with this transformer end. Default: 0 */
		CIMPP::PerCent stepVoltageIncrement;  /* Tap step increment, in per cent of nominal voltage, per step position. Default: nullptr */
		CIMPP::TransformerControlMode tculControlMode;  /* Specifies the regulation control mode (voltage or reactive) of the RatioTapChanger. Default: 0 */

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
