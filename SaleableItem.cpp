#include "SaleableItem.h"

SaleableItem::SaleableItem(const char* pTitlep,
    unsigned int unitPricePencep)
{
  pTitle = pTitlep;
  unitPricePence = unitPricePencep;
}

const char* SaleableItem::getTitle(void)
{
  return pTitle;
}
