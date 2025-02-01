/**
 * @file Item.cpp
 * @author jake_
 */
 
#include "Item.h"
#include "Aquarium.h"
/**
 * @file Item.cpp
 * @author your_name_here
 */

#include "pch.h"
#include "Item.h"

/**
 * Destructor
 */
Item::~Item()
{

}
/**
 * Constructor
 * @param aquarium The aquarium this item is a member of
 */
Item::Item(Aquarium *aquarium) : mAquarium(aquarium)
{
}