#ifndef CD_h
#define CD_h

#include "SaleableItem.h"

class CD :public SaleableItem {
  public:
    CD(const char* pTitle, 
	unsigned int unitPricePence,
	unsigned int runningTimeMinsp,
	unsigned int noOfTracksp);
    unsigned int getNewPrice(void);

  private:
    unsigned int runningTimeMins, noOfTracks;
};

#endif
