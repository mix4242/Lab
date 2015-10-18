#include "CD.h"
#include "SaleableItem.h"

CD::CD(const char* pTitle,
    unsigned int unitPricePence,
    unsigned int runningTimeMinsp,
    unsigned int noOfTracksp):SaleableItem(pTitle, unitPricePence)
{
  runningTimeMins = runningTimeMinsp;
  noOfTracks = noOfTracksp;
}

unsigned int CD::getNewPrice(void)
{
  unsigned int tax = 5 * noOfTracks;
  return tax + unitPricePence;
}
