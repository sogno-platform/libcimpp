///////////////////////////////////////////////////////////
//  IntervalBlock.cpp
//  Implementation of the Class IntervalBlock
///////////////////////////////////////////////////////////

#include "IntervalBlock.h"

using IEC61968::Metering::IntervalBlock;


IntervalBlock::IntervalBlock()
	: PendingCalculation(nullptr), ReadingType(nullptr), MeterReading(nullptr)
{

}



IntervalBlock::~IntervalBlock(){

}
