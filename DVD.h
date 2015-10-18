#ifndef Included_DVD_h
#define Included_DVD_h

#include "SaleableItem.h"

class DVD :public SaleableItem {
  public:
    enum DVDFormat {PAL, NTSC};
    DVD(const char* pTitle, 
	unsigned int unitPricePence, 
	unsigned int runningTimeMinsp, 
	DVDFormat formatp);
    unsigned int getNewPrice(void);

  private:
    unsigned int runningTimeMins;
    DVDFormat format;
};

#endif /* #ifndef Included_DVD_h */
