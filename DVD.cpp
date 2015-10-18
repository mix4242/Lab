#include "DVD.h"
#include "SaleableItem.h"

DVD::DVD(const char* pTitle,
    unsigned int unitPricePence,
    unsigned int runningTimeMinsp,
    DVD::DVDFormat formatp):SaleableItem(pTitle, unitPricePence)
{
  runningTimeMins = runningTimeMinsp;
  format = formatp;
}

unsigned int DVD::getNewPrice(void)
{
  unsigned int tax = 2 * runningTimeMins;
  return tax + unitPricePence;
}
