#include <sstream>
#include "IdentifiedObject.hpp"
#include "MutualCoupling.hpp"

#include "Terminal.hpp"
#include "Terminal.hpp"
#include "Susceptance.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "Length.hpp"
#include "Conductance.hpp"
#include "Resistance.hpp"
#include "Reactance.hpp"

using namespace CIMPP;

MutualCoupling::MutualCoupling(): First_Terminal(nullptr), Second_Terminal(nullptr) {};

MutualCoupling::~MutualCoupling() {};


bool assign_Terminal_HasFirstMutualCoupling(BaseClass*, BaseClass*);
bool assign_MutualCoupling_First_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                element->First_Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->First_Terminal != nullptr)
                        return assign_Terminal_HasFirstMutualCoupling(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}

bool assign_Terminal_HasSecondMutualCoupling(BaseClass*, BaseClass*);
bool assign_MutualCoupling_Second_Terminal(BaseClass* BaseClass_ptr1, BaseClass* BaseClass_ptr2) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                element->Second_Terminal = dynamic_cast<Terminal*>(BaseClass_ptr2);
                if(element->Second_Terminal != nullptr)
                        return assign_Terminal_HasSecondMutualCoupling(BaseClass_ptr2, BaseClass_ptr1);
        }
        return false;
}












bool assign_MutualCoupling_b0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->b0ch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_distance11(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->distance11;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_distance12(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->distance12;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_distance21(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->distance21;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_distance22(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->distance22;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_g0ch(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->g0ch;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_r0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->r0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

bool assign_MutualCoupling_x0(std::stringstream &buffer, BaseClass* BaseClass_ptr1) {
	if(MutualCoupling* element = dynamic_cast<MutualCoupling*>(BaseClass_ptr1)) {
                buffer >> element->x0;
                if(buffer.fail())
                        return false;
                else
                        return true;
        }
        else
                return false;
}

namespace CIMPP {
	BaseClass* MutualCoupling_factory() {
		return new MutualCoupling;
	}
}

void MutualCoupling::addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map) {
	factory_map.insert(std::make_pair(std::string("cim:MutualCoupling"), &MutualCoupling_factory));
}

void MutualCoupling::addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map) {
			assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.b0ch"), &assign_MutualCoupling_b0ch));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.distance11"), &assign_MutualCoupling_distance11));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.distance12"), &assign_MutualCoupling_distance12));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.distance21"), &assign_MutualCoupling_distance21));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.distance22"), &assign_MutualCoupling_distance22));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.g0ch"), &assign_MutualCoupling_g0ch));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.r0"), &assign_MutualCoupling_r0));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.x0"), &assign_MutualCoupling_x0));
}

void MutualCoupling::addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map) {
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.First_Terminal"), &assign_MutualCoupling_First_Terminal));
	assign_map.insert(std::make_pair(std::string("cim:MutualCoupling.Second_Terminal"), &assign_MutualCoupling_Second_Terminal));
								}

const char MutualCoupling::debugName[] = "MutualCoupling";
const char* MutualCoupling::debugString()
{
	return MutualCoupling::debugName;
}

const BaseClassDefiner MutualCoupling::declare()
{
	return BaseClassDefiner(MutualCoupling::addConstructToMap, MutualCoupling::addPrimitiveAssignFnsToMap, MutualCoupling::addClassAssignFnsToMap, MutualCoupling::debugName);
}


